// MyDrawDoc.cpp : implementation of the CMyDrawDoc class
//

#include "stdafx.h"
#include "MyDraw.h"

#include "MyDrawDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyDrawDoc

IMPLEMENT_DYNCREATE(CMyDrawDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyDrawDoc, CDocument)
	//{{AFX_MSG_MAP(CMyDrawDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDrawDoc construction/destruction

CMyDrawDoc::CMyDrawDoc()
{
	// TODO: add one-time construction code here

}

CMyDrawDoc::~CMyDrawDoc()
{
}

BOOL CMyDrawDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyDrawDoc serialization

void CMyDrawDoc::Serialize(CArchive& ar)
{
   if (ar.IsStoring()) {
	// TODO: add storing code here
	m_LineArray.Serialize(ar);  // ����CObArray������л�����
	m_CircleArray.Serialize(ar);  // ����CObArray������л�����
    }
   else {
	// TODO: add loading code here
	m_LineArray.Serialize(ar);
	m_CircleArray.Serialize(ar);  // ����CObArray������л�����
	}

}

/////////////////////////////////////////////////////////////////////////////
// CMyDrawDoc diagnostics

#ifdef _DEBUG
void CMyDrawDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyDrawDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyDrawDoc commands

void  CMyDrawDoc::AddLine(CPoint  pt1, CPoint  pt2)
{
	CLine*  pLine = new CLine(pt1, pt2);  
				   // �½�һ���߶ζ���
	m_LineArray.Add(pLine);  // �����߶μӵ���̬����
}

void  CMyDrawDoc::AddCircle(CPoint  pt1, int  r)
{
	CCircle*  pCircle = new CCircle(pt1, r);  
				   // �½�һ���߶ζ���
	m_CircleArray.Add(pCircle);  // �����߶μӵ���̬����
}

CLine*  CMyDrawDoc::GetLine(int  nIndex)
{
	if(nIndex<0||nIndex>m_LineArray.GetUpperBound())  
				    // �ж��Ƿ�Խ��
		return  NULL;
	return m_LineArray.GetAt(nIndex);  
				    // ���ظ�������߶ζ����ָ��
}

int   CMyDrawDoc::GetNumLines()
{
		return m_LineArray.GetSize();  
					// �����߶ε�����
}

CCircle*  CMyDrawDoc::GetCircle(int  nIndex)
{
	if(nIndex<0||nIndex>m_CircleArray.GetUpperBound())  
				    // �ж��Ƿ�Խ��
		return  NULL;
	return m_CircleArray.GetAt(nIndex);  
				    // ���ظ�������߶ζ����ָ��
}

int   CMyDrawDoc::GetNumCircles()
{
		return m_CircleArray.GetSize();  
					// �����߶ε�����
}

void CMyDrawDoc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
	int nIndex = GetNumLines();
    while(nIndex--)
             delete m_LineArray.GetAt(nIndex);
    m_LineArray.RemoveAll();

    nIndex = GetNumCircles();
    while(nIndex--)
             delete m_CircleArray.GetAt(nIndex);
    m_CircleArray.RemoveAll();

    CDocument::DeleteContents();

}
