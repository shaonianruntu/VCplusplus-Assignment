// DrawCoinView.cpp : implementation of the CDrawCoinView class
//

#include "stdafx.h"
#include "DrawCoin.h"

#include "DrawCoinDoc.h"
#include "DrawCoinView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinView

IMPLEMENT_DYNCREATE(CDrawCoinView, CView)

BEGIN_MESSAGE_MAP(CDrawCoinView, CView)
	//{{AFX_MSG_MAP(CDrawCoinView)
	ON_WM_CONTEXTMENU()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinView construction/destruction

CDrawCoinView::CDrawCoinView()
{
	// TODO: add construction code here

}

CDrawCoinView::~CDrawCoinView()
{
}

BOOL CDrawCoinView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinView drawing

void CDrawCoinView::OnDraw(CDC* pDC)
{
	CDrawCoinDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
    //pDC->SelectStockObject(HOLLOW_BRUSH);

    for(int i=0; i<pDoc->m_nCoins; i++)
	{
		int y=200-10*i;
		pDC->Ellipse(200,y,300,y-30);  
 		      // 用两个偏移的椭圆表示一枚硬币
		pDC->Ellipse(200,y-8,300,y-33);
	}

    CString   strCoins;
    // 先获得主窗口， 再获得状态栏的指针
    CStatusBar*  pStatus = (CStatusBar*)AfxGetApp()->m_pMainWnd->
        GetDescendantWindow(ID_VIEW_STATUS_BAR); 
    if(pStatus)
    {
        strCoins.Format("硬币:%d", pDoc->m_nCoins);    
        
        // 设置要显示的信息
        CSize size = pDC->GetTextExtent(strCoins); //得到文本所需的大小尺寸
        pStatus->SetPaneInfo(4, ID_INDICATOR_COIN,
            SBPS_NORMAL, size.cx); //按文本所需的宽度设置状态栏宽度

        pStatus->SetPaneText(4, strCoins);  
        // 显示硬币数量，面板编号从0开始
    }

}

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinView printing

BOOL CDrawCoinView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawCoinView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawCoinView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinView diagnostics

#ifdef _DEBUG
void CDrawCoinView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawCoinView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawCoinDoc* CDrawCoinView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawCoinDoc)));
	return (CDrawCoinDoc*)m_pDocument;
}
#endif //_DEBUG


void CDrawCoinView::OnContextMenu(CWnd* pWnd, CPoint point) 
{
    // TODO: Add your message handler code here
    CMenu   menuPopup;  // 声明菜单对象
    if (menuPopup.CreatePopupMenu())  // 创建弹出式菜单
    {
        // 向菜单menuPopup中添加菜单项
        menuPopup.AppendMenu(MF_STRING,
            ID_COIN_ADD, "增加硬币\tCtrl+A");
        menuPopup.AppendMenu(MF_STRING, 
            ID_COIN_SUB, "减少硬币\tCtrl+B");
        // 显示弹出式菜单，并跟踪用户的菜单项的选择
        menuPopup.TrackPopupMenu(TPM_LEFTALIGN, point.x, point.y, this);
    }
}
