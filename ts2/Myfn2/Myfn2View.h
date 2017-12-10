// Myfn2View.h : interface of the CMyfn2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYFN2VIEW_H__3E3724EB_068D_49B6_9192_998A089B31FB__INCLUDED_)
#define AFX_MYFN2VIEW_H__3E3724EB_068D_49B6_9192_998A089B31FB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyfn2View : public CView
{
protected: // create from serialization only
	CMyfn2View();
	DECLARE_DYNCREATE(CMyfn2View)

// Attributes
public:
	CMyfn2Doc* GetDocument();

// Operations
public:
	int n_mCircle;
	int x1,x2,y1,y2;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyfn2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL DestroyWindow();
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyfn2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyfn2View)
	afx_msg void OnDrawcirAdd();
	afx_msg void OnDrawcirSvb();
	afx_msg void OnUpdateDrawcirAdd(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDrawcirSvb(CCmdUI* pCmdUI);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Myfn2View.cpp
inline CMyfn2Doc* CMyfn2View::GetDocument()
   { return (CMyfn2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFN2VIEW_H__3E3724EB_068D_49B6_9192_998A089B31FB__INCLUDED_)
