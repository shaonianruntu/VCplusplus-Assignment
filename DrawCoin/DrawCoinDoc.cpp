// DrawCoinDoc.cpp : implementation of the CDrawCoinDoc class
//

#include "stdafx.h"
#include "DrawCoin.h"

#include "DrawCoinDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinDoc

IMPLEMENT_DYNCREATE(CDrawCoinDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawCoinDoc, CDocument)
	//{{AFX_MSG_MAP(CDrawCoinDoc)
	ON_COMMAND(ID_COIN_ADD, OnCoinAdd)
	ON_COMMAND(ID_COIN_SUB, OnCoinSub)
	ON_UPDATE_COMMAND_UI(ID_COIN_SUB, OnUpdateCoinSub)
	ON_UPDATE_COMMAND_UI(ID_COIN_ADD, OnUpdateCoinAdd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinDoc construction/destruction

CDrawCoinDoc::CDrawCoinDoc()
{
	// TODO: add one-time construction code here

}

CDrawCoinDoc::~CDrawCoinDoc()
{
}

BOOL CDrawCoinDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDrawCoinDoc serialization

void CDrawCoinDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinDoc diagnostics

#ifdef _DEBUG
void CDrawCoinDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawCoinDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinDoc commands

void CDrawCoinDoc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
	m_nCoins = 1;
	CDocument::DeleteContents();
}

void CDrawCoinDoc::OnCoinAdd() 
{
	// TODO: Add your command handler code here
	m_nCoins++;
    UpdateAllViews(NULL);  	// 刷新视图
}

void CDrawCoinDoc::OnCoinSub() 
{
	// TODO: Add your command handler code here
	if(m_nCoins > 0) m_nCoins--;
    UpdateAllViews(NULL);  	// 刷新视图
}

void CDrawCoinDoc::OnUpdateCoinSub(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if (m_nCoins < 1) pCmdUI->Enable(FALSE);
    else pCmdUI->Enable(TRUE);
}

void CDrawCoinDoc::OnUpdateCoinAdd(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if (m_nCoins > 5) pCmdUI->Enable(FALSE);
    else pCmdUI->Enable(TRUE);
}
