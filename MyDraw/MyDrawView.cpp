// MyDrawView.cpp : implementation of the CMyDrawView class
//

#include "stdafx.h"
#include "MyDraw.h"
#include "math.h"

#include "MyDrawDoc.h"
#include "MyDrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView

IMPLEMENT_DYNCREATE(CMyDrawView, CScrollView)

BEGIN_MESSAGE_MAP(CMyDrawView, CScrollView)
	//{{AFX_MSG_MAP(CMyDrawView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_DRAW_LINE, OnDrawLine)
	ON_UPDATE_COMMAND_UI(ID_DRAW_LINE, OnUpdateDrawLine)
	ON_COMMAND(ID_DRAW_CIRCLE, OnDrawCircle)
	ON_UPDATE_COMMAND_UI(ID_DRAW_CIRCLE, OnUpdateDrawCircle)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView construction/destruction

CMyDrawView::CMyDrawView()
{
	// TODO: add construction code here
	m_bDragging = false;  // 初始化拖拽标记	
	// 获得十字光标句柄
	m_hCross = AfxGetApp()->LoadStandardCursor(IDC_CROSS);
	m_bLine = true;       // 初始化画线标记	

}

CMyDrawView::~CMyDrawView()
{
}

BOOL CMyDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView drawing

void CMyDrawView::OnDraw(CDC* pDC)
{
	CMyDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
    int   nIndex = pDoc->GetNumLines(); // 取得线段的数量
	// 循环画出每一段线段
	while(nIndex--)  		// 数组下标从0到nIndex-1
	{
        CLine *pLine;
		pLine = pDoc->GetLine(nIndex);
        if (pLine)
            pLine->DrawLine(pDC);  
					// 类CLine的成员函数
	}

    nIndex = pDoc->GetNumCircles(); // 取得线段的数量
	// 循环画出每一段线段
	while(nIndex--)  		// 数组下标从0到nIndex-1
	{
        CCircle *pCircle;
		pCircle = pDoc->GetCircle(nIndex);
        if (pCircle)
            pCircle->DrawCircle(pDC);  
					// 类CLine的成员函数
	}

}

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView printing

BOOL CMyDrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyDrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyDrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView diagnostics

#ifdef _DEBUG
void CMyDrawView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CMyDrawView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CMyDrawDoc* CMyDrawView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDrawDoc)));
	return (CMyDrawDoc*)m_pDocument;
}




#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyDrawView message handlers

void CMyDrawView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetCapture();  // 捕捉鼠标
	::SetCursor(m_hCross);  	// 设置十字光标
	m_ptOrigin = point;
	m_bDragging = TRUE;  	// 设置拖拽标记	
	CScrollView::OnLButtonDown(nFlags, point);
}

void CMyDrawView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(m_bDragging)
	{
	      m_bDragging = false; // 清拖拽标记	
	      ReleaseCapture();    // 释放鼠标，还原鼠标形状

          if(!m_bLine)
          {
              CClientDC   dc(this);
              CMyDrawDoc  *pDoc = GetDocument(); //获得文档对象指针
              ASSERT_VALID(pDoc);  	            //测试文档对象是否有效
              
              CPoint ptOrg, ptStart, ptEnd;
              int r;
              ptOrg = GetScrollPosition();
              ptStart = ptOrg + m_ptOrigin;
              ptEnd = ptOrg + point;
              r = int(sqrt((ptEnd.x-ptStart.x)*(ptEnd.x-ptStart.x)+
                           (ptEnd.y-ptStart.y)*(ptEnd.y-ptStart.y)));
              pDoc->AddCircle(ptStart, r);       //加入线段到指针数组
	          dc.Ellipse(m_ptOrigin.x-r,m_ptOrigin.y-r,
                         m_ptOrigin.x+r,m_ptOrigin.y+r);  
          }
	}
	CScrollView::OnLButtonUp(nFlags, point);
}

void CMyDrawView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC   dc(this);

	if(m_bDragging && m_bLine)
	{
        CMyDrawDoc  *pDoc = GetDocument(); //获得文档对象指针
		ASSERT_VALID(pDoc);  	            //测试文档对象是否有效
		
        CPoint ptOrg, ptStart, ptEnd;
        ptOrg = GetScrollPosition();
        ptStart = ptOrg + m_ptOrigin;
        ptEnd = ptOrg + point;
        pDoc->AddLine(ptStart, ptEnd);       //加入线段到指针数组
        dc.MoveTo(m_ptOrigin); 
        dc.LineTo(point);  // 绘制线段
        m_ptOrigin=point;  // 新的起始点

	}

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



	CScrollView::OnMouseMove(nFlags, point);
}

void CMyDrawView::OnInitialUpdate() 
{
	CScrollView::OnInitialUpdate();
    
    CSize sizeTotal;
    sizeTotal.cx = sizeTotal.cy = 1000;
    SetScrollSizes(MM_TEXT, sizeTotal);

    SetTimer(1,500,NULL); //设置定时器
	// TODO: Add your specialized code here and/or call the base class
	
}

void CMyDrawView::OnDrawLine() 
{
	// TODO: Add your command handler code here
	if(!m_bLine) m_bLine = true;
}

void CMyDrawView::OnUpdateDrawLine(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(m_bLine) pCmdUI->SetCheck(1);
    else pCmdUI->SetCheck(0);
}

void CMyDrawView::OnDrawCircle() 
{
	// TODO: Add your command handler code here
	if(m_bLine) m_bLine = false;
}

void CMyDrawView::OnUpdateDrawCircle(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(!m_bLine) pCmdUI->SetCheck(1);	
    else pCmdUI->SetCheck(0);
}

BOOL CMyDrawView::DestroyWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	KillTimer(1); //清除定时器

	return CScrollView::DestroyWindow();
}

void CMyDrawView::OnTimer(UINT nIDEvent) 
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

	CScrollView::OnTimer(nIDEvent);
}
