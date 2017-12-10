// Myfn2Doc.h : interface of the CMyfn2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYFN2DOC_H__08C38DCB_62FC_4638_BA25_FF3CB04B25C3__INCLUDED_)
#define AFX_MYFN2DOC_H__08C38DCB_62FC_4638_BA25_FF3CB04B25C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyfn2Doc : public CDocument
{
protected: // create from serialization only
	CMyfn2Doc();
	DECLARE_DYNCREATE(CMyfn2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyfn2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyfn2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyfn2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFN2DOC_H__08C38DCB_62FC_4638_BA25_FF3CB04B25C3__INCLUDED_)
