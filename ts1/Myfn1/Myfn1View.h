// Myfn1View.h : interface of the CMyfn1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYFN1VIEW_H__AD384F1F_4BA3_4318_88D5_D1BBB3D94D09__INCLUDED_)
#define AFX_MYFN1VIEW_H__AD384F1F_4BA3_4318_88D5_D1BBB3D94D09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyfn1View : public CView
{
protected: // create from serialization only
	CMyfn1View();
	DECLARE_DYNCREATE(CMyfn1View)

// Attributes
public:
	CMyfn1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyfn1View)
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
	virtual ~CMyfn1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyfn1View)
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Myfn1View.cpp
inline CMyfn1Doc* CMyfn1View::GetDocument()
   { return (CMyfn1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFN1VIEW_H__AD384F1F_4BA3_4318_88D5_D1BBB3D94D09__INCLUDED_)
