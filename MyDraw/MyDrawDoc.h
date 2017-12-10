// MyDrawDoc.h : interface of the CMyDrawDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYDRAWDOC_H__D761A0BB_8F44_4158_A1F5_23B1129B91AB__INCLUDED_)
#define AFX_MYDRAWDOC_H__D761A0BB_8F44_4158_A1F5_23B1129B91AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Line.h"
#include "Circle.h"
#include <afxtempl.h>  	// ʹ��MFC��ģ��

class CMyDrawDoc : public CDocument
{
protected: // create from serialization only
	CMyDrawDoc();

	DECLARE_DYNCREATE(CMyDrawDoc)
    CTypedPtrArray<CObArray,CLine*>   m_LineArray;  
			// ����߶ζ���ָ��Ķ�̬����
    CTypedPtrArray<CObArray,CCircle*>   m_CircleArray;  
// Attributes
public:
	CLine*  GetLine(int nIndex);  	
			// ��ȡָ������߶ζ����ָ��
	void   AddLine(CPoint pt1, CPoint pt2);  
			// ��̬����������µ��߶ζ����ָ��
	int    GetNumLines();  	// ��ȡ�߶ε�����
	CCircle*  GetCircle(int nIndex);  	
			// ��ȡָ������߶ζ����ָ��
	void   AddCircle(CPoint pt1, int r);  
	int    GetNumCircles();  	// ��ȡ�߶ε�����

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDrawDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void DeleteContents();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyDrawDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyDrawDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDRAWDOC_H__D761A0BB_8F44_4158_A1F5_23B1129B91AB__INCLUDED_)
