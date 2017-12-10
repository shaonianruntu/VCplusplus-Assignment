#if !defined(AFX_RADIUS_H__FB79A671_9B94_4697_89D0_0F2173691B84__INCLUDED_)
#define AFX_RADIUS_H__FB79A671_9B94_4697_89D0_0F2173691B84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Radius.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRadius dialog

class CRadius : public CDialog
{
// Construction
public:
	CRadius(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRadius)
	enum { IDD = IDD_RADIUSDLG };
	int		m_Radius;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRadius)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRadius)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RADIUS_H__FB79A671_9B94_4697_89D0_0F2173691B84__INCLUDED_)
