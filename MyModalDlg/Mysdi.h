// Mysdi.h : main header file for the MYSDI application
//

#if !defined(AFX_MYSDI_H__232EAEFC_B5A4_4661_93C6_32973FD8C95C__INCLUDED_)
#define AFX_MYSDI_H__232EAEFC_B5A4_4661_93C6_32973FD8C95C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMysdiApp:
// See Mysdi.cpp for the implementation of this class
//

class CMysdiApp : public CWinApp
{
public:
	CMysdiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMysdiApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMysdiApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDI_H__232EAEFC_B5A4_4661_93C6_32973FD8C95C__INCLUDED_)
