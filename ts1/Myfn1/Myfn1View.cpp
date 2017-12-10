// Myfn1View.cpp : implementation of the CMyfn1View class
//

#include "stdafx.h"
#include "Myfn1.h"

#include "Myfn1Doc.h"
#include "Myfn1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View

IMPLEMENT_DYNCREATE(CMyfn1View, CView)

BEGIN_MESSAGE_MAP(CMyfn1View, CView)
	//{{AFX_MSG_MAP(CMyfn1View)
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View construction/destruction

CMyfn1View::CMyfn1View()
{
	// TODO: add construction code here

}

CMyfn1View::~CMyfn1View()
{
}

BOOL CMyfn1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View drawing

void CMyfn1View::OnDraw(CDC* pDC)
{
	CMyfn1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	//����������
	pDC->Rectangle(CRect(50,50,100,100));
	
	//������Բ
	pDC->Ellipse(CRect(250,120,650,320));
	//������Բ
	pDC->Ellipse(CRect(350,120,550,320));	

	//����ˮƽֱ��
	pDC->MoveTo(350,220);	
	pDC->LineTo(550,220);
	//����Ǧֱֱ��
	pDC->MoveTo(450,120);
	pDC->LineTo(450,320);


}

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View printing

BOOL CMyfn1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyfn1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyfn1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View diagnostics

#ifdef _DEBUG
void CMyfn1View::AssertValid() const
{
	CView::AssertValid();
}

void CMyfn1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyfn1Doc* CMyfn1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyfn1Doc)));
	return (CMyfn1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyfn1View message handlers

int m_nRight;	//�����һ�������¼����

void CMyfn1View::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_nRight++;					//�һ���������һ
	CString strOutput;			//������������ĸ�ʽ���ַ���
	strOutput.Format("The times of right button down: %d",m_nRight);
	MessageBox(strOutput);		//������ʾ��Ϣ��

	CView::OnRButtonDown(nFlags, point);
}
