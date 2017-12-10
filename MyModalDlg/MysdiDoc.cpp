// MysdiDoc.cpp : implementation of the CMysdiDoc class
//

#include "stdafx.h"
#include "Mysdi.h"

#include "MysdiDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMysdiDoc

IMPLEMENT_DYNCREATE(CMysdiDoc, CDocument)

BEGIN_MESSAGE_MAP(CMysdiDoc, CDocument)
	//{{AFX_MSG_MAP(CMysdiDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMysdiDoc construction/destruction

CMysdiDoc::CMysdiDoc()
{
	// TODO: add one-time construction code here

}

CMysdiDoc::~CMysdiDoc()
{
}

BOOL CMysdiDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMysdiDoc serialization

void CMysdiDoc::Serialize(CArchive& ar)
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
// CMysdiDoc diagnostics

#ifdef _DEBUG
void CMysdiDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMysdiDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMysdiDoc commands
