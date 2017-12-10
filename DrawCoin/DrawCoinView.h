// DrawCoinView.h : interface of the CDrawCoinView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAWCOINVIEW_H__7F6A14AE_5ACC_4BB4_BF39_D2B058F7606B__INCLUDED_)
#define AFX_DRAWCOINVIEW_H__7F6A14AE_5ACC_4BB4_BF39_D2B058F7606B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDrawCoinView : public CView
{
protected: // create from serialization only
	CDrawCoinView();
	DECLARE_DYNCREATE(CDrawCoinView)

// Attributes
public:
	CDrawCoinDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawCoinView)
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
	virtual ~CDrawCoinView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDrawCoinView)
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DrawCoinView.cpp
inline CDrawCoinDoc* CDrawCoinView::GetDocument()
   { return (CDrawCoinDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWCOINVIEW_H__7F6A14AE_5ACC_4BB4_BF39_D2B058F7606B__INCLUDED_)
