// MysdiView.cpp : implementation of the CMysdiView class
//

#include "stdafx.h"
#include "Mysdi.h"
#include "Radius.h"

#include "MysdiDoc.h"
#include "MysdiView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMysdiView

IMPLEMENT_DYNCREATE(CMysdiView, CView)

BEGIN_MESSAGE_MAP(CMysdiView, CView)
	//{{AFX_MSG_MAP(CMysdiView)
	ON_COMMAND(ID_EDIT_RADIUS, OnEditRadius)
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMysdiView construction/destruction

CMysdiView::CMysdiView()
{
	// TODO: add construction code here
    m_nCViewRadius = 0;
}

CMysdiView::~CMysdiView()
{
}

BOOL CMysdiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMysdiView drawing

void CMysdiView::OnDraw(CDC* pDC)
{
	CMysdiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
    pDC->Ellipse(0, 0, 2*m_nCViewRadius, 
 				2*m_nCViewRadius);



}

/////////////////////////////////////////////////////////////////////////////
// CMysdiView printing

BOOL CMysdiView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMysdiView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMysdiView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMysdiView diagnostics

#ifdef _DEBUG
void CMysdiView::AssertValid() const
{
	CView::AssertValid();
}

void CMysdiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMysdiDoc* CMysdiView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMysdiDoc)));
	return (CMysdiDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMysdiView message handlers

void CMysdiView::OnEditRadius() 
{
	// TODO: Add your command handler code here
	CRadius   dlg;   	// 定义一个对话框对象

	dlg.m_Radius = 100;	// 设置编辑框显示的初始值

	if (dlg.DoModal() == IDOK)    // 显示对话框
	{
	         m_nCViewRadius = dlg.m_Radius;   
     			  // 接收并存储编辑框数据
	         Invalidate();   // 刷新视图
    }

}

void CMysdiView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
		CRadius   dlg;   	// 定义一个对话框对象
	dlg.m_Radius = 100;	// 设置编辑框显示的初始值

	if (dlg.DoModal() == IDOK)    // 显示对话框
	{
	         m_nCViewRadius = dlg.m_Radius;   
     			  // 接收并存储编辑框数据
	         Invalidate();   // 刷新视图
    }

	CView::OnRButtonDown(nFlags, point);
}
