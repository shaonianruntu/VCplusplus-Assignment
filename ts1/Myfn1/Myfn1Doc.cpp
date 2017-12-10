// Myfn1Doc.cpp : implementation of the CMyfn1Doc class
//

#include "stdafx.h"
#include "Myfn1.h"

#include "Myfn1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyfn1Doc

IMPLEMENT_DYNCREATE(CMyfn1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMyfn1Doc, CDocument)
	//{{AFX_MSG_MAP(CMyfn1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyfn1Doc construction/destruction

CMyfn1Doc::CMyfn1Doc()
{
	// TODO: add one-time construction code here

}

CMyfn1Doc::~CMyfn1Doc()
{
}

BOOL CMyfn1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyfn1Doc serialization

void CMyfn1Doc::Serialize(CArchive& ar)
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
// CMyfn1Doc diagnostics

#ifdef _DEBUG
void CMyfn1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyfn1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyfn1Doc commands
