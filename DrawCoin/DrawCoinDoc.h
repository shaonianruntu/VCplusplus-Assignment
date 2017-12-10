// DrawCoinDoc.h : interface of the CDrawCoinDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAWCOINDOC_H__22943488_30AA_4EFF_B52D_69DA8D138553__INCLUDED_)
#define AFX_DRAWCOINDOC_H__22943488_30AA_4EFF_B52D_69DA8D138553__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDrawCoinDoc : public CDocument
{
protected: // create from serialization only
	CDrawCoinDoc();
	DECLARE_DYNCREATE(CDrawCoinDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawCoinDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void DeleteContents();
	//}}AFX_VIRTUAL

// Implementation
public:
	int m_nCoins;
	virtual ~CDrawCoinDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDrawCoinDoc)
	afx_msg void OnCoinAdd();
	afx_msg void OnCoinSub();
	afx_msg void OnUpdateCoinSub(CCmdUI* pCmdUI);
	afx_msg void OnUpdateCoinAdd(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWCOINDOC_H__22943488_30AA_4EFF_B52D_69DA8D138553__INCLUDED_)
