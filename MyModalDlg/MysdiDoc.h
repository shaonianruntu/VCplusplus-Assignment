// MysdiDoc.h : interface of the CMysdiDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSDIDOC_H__E38CFF4B_6A76_4FDF_A10D_D8A69A7463CB__INCLUDED_)
#define AFX_MYSDIDOC_H__E38CFF4B_6A76_4FDF_A10D_D8A69A7463CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMysdiDoc : public CDocument
{
protected: // create from serialization only
	CMysdiDoc();
	DECLARE_DYNCREATE(CMysdiDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMysdiDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMysdiDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMysdiDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDIDOC_H__E38CFF4B_6A76_4FDF_A10D_D8A69A7463CB__INCLUDED_)
