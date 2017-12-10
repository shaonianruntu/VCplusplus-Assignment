// Myfn2Doc.cpp : implementation of the CMyfn2Doc class
//

#include "stdafx.h"
#include "Myfn2.h"

#include "Myfn2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyfn2Doc

IMPLEMENT_DYNCREATE(CMyfn2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMyfn2Doc, CDocument)
	//{{AFX_MSG_MAP(CMyfn2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyfn2Doc construction/destruction

CMyfn2Doc::CMyfn2Doc()
{
	// TODO: add one-time construction code here

}

CMyfn2Doc::~CMyfn2Doc()
{
}

BOOL CMyfn2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyfn2Doc serialization

void CMyfn2Doc::Serialize(CArchive& ar)
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
// CMyfn2Doc diagnostics

#ifdef _DEBUG
void CMyfn2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyfn2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyfn2Doc commands
