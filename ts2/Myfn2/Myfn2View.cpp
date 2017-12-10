// Myfn2View.cpp : implementation of the CMyfn2View class
//

#include "stdafx.h"
#include "Myfn2.h"

#include "Myfn2Doc.h"
#include "Myfn2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View

IMPLEMENT_DYNCREATE(CMyfn2View, CView)

BEGIN_MESSAGE_MAP(CMyfn2View, CView)
	//{{AFX_MSG_MAP(CMyfn2View)
	ON_COMMAND(ID_DRAWCIR_ADD, OnDrawcirAdd)
	ON_COMMAND(ID_DRAWCIR_SVB, OnDrawcirSvb)
	ON_UPDATE_COMMAND_UI(ID_DRAWCIR_ADD, OnUpdateDrawcirAdd)
	ON_UPDATE_COMMAND_UI(ID_DRAWCIR_SVB, OnUpdateDrawcirSvb)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View construction/destruction

CMyfn2View::CMyfn2View()
{
	// TODO: add construction code here
	n_mCircle=1;
}

CMyfn2View::~CMyfn2View()
{
}

BOOL CMyfn2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View drawing

void CMyfn2View::OnDraw(CDC* pDC)
{
	CMyfn2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	int i;
	for(i=0;i<n_mCircle;i++)
	{
		pDC->Ellipse(CRect(x1+100*(i-1),y1,x2+100*(i-1),y2));
	}
	
	

}

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View printing

BOOL CMyfn2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyfn2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyfn2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View diagnostics

#ifdef _DEBUG
void CMyfn2View::AssertValid() const
{
	CView::AssertValid();
}

void CMyfn2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyfn2Doc* CMyfn2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyfn2Doc)));
	return (CMyfn2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyfn2View message handlers

void CMyfn2View::OnDrawcirAdd() 
{
	// TODO: Add your command handler code here
	n_mCircle++;
	Invalidate();	//强行非法化,使其被迫刷新界面
}

void CMyfn2View::OnDrawcirSvb() 
{
	// TODO: Add your command handler code here
	n_mCircle--;
	Invalidate();	//强行非法化,使其被迫刷新界面
}

void CMyfn2View::OnUpdateDrawcirAdd(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(n_mCircle>4) pCmdUI->Enable(FALSE);
	else pCmdUI->Enable(TRUE);
}

void CMyfn2View::OnUpdateDrawcirSvb(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(n_mCircle<2) pCmdUI->Enable(FALSE);
	else pCmdUI->Enable(TRUE);
}


void CMyfn2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if((point.x!=(x1+25))||(point.y!=(y1+25)))
	{
		n_mCircle=0;

		x1=point.x + 50;
		x2=point.x + 150;
		y1=point.y - 50;
		y2=point.y + 50;

	}

	if(n_mCircle<5) 
		n_mCircle++;
	Invalidate();	//强行非法化,使其被迫刷新界面

	CView::OnLButtonDown(nFlags, point);
}

BOOL CMyfn2View::DestroyWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	KillTimer(1); //清除定时器
	return CView::DestroyWindow();
}

void CMyfn2View::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	CSize sizeTotal;
    sizeTotal.cx = sizeTotal.cy = 1000;


    SetTimer(1,500,NULL); //设置定时器
	// TODO: Add your specialized code here and/or call the base class
	
}

void CMyfn2View::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC   dc(this);
	CString   str;
    // 先获得主窗口， 再获得状态栏的指针
    CStatusBar*  pStatus = (CStatusBar*)AfxGetApp()->m_pMainWnd->
        GetDescendantWindow(ID_VIEW_STATUS_BAR); 
    if(pStatus)
    {
        str.Format("(%d,%d)", point.x,point.y);    
        // 设置要显示的信息
        pStatus->SetPaneInfo(1, ID_INDICATOR_LOC, SBPS_NORMAL, 50); //设置状态栏宽度
        pStatus->SetPaneText(1, str);  
        // 显示硬币数量，面板编号从0开始
    }
	CView::OnMouseMove(nFlags, point);
}

void CMyfn2View::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CStatusBar*  pStatus = (CStatusBar*)AfxGetApp()->m_pMainWnd->GetDescendantWindow(ID_VIEW_STATUS_BAR); 
    if(pStatus) {
         CString sText = pStatus->GetPaneText(0); //获得状态栏第0个面板的显示字符
         int len = sText.GetLength();              
         CString sright = sText.Left(2); 
         CString sleft = sText.Right(len-2); 
         sText = sleft + sright;
         pStatus->SetPaneText(0,sText); //设置状态栏第0个面板的显示字符
    }
	CView::OnTimer(nIDEvent);
}
