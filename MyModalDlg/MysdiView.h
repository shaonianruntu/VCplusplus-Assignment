// MysdiView.h : interface of the CMysdiView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSDIVIEW_H__69C1AD9F_7DEC_459E_BD1F_09E3A58D845A__INCLUDED_)
#define AFX_MYSDIVIEW_H__69C1AD9F_7DEC_459E_BD1F_09E3A58D845A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMysdiView : public CView
{
protected: // create from serialization only
	CMysdiView();
	DECLARE_DYNCREATE(CMysdiView)

// Attributes
public:
	CMysdiDoc* GetDocument();

// Operations
public:
    int m_nCViewRadius;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMysdiView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMysdiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMysdiView)
	afx_msg void OnEditRadius();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MysdiView.cpp
inline CMysdiDoc* CMysdiView::GetDocument()
   { return (CMysdiDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDIVIEW_H__69C1AD9F_7DEC_459E_BD1F_09E3A58D845A__INCLUDED_)
