// Myfn1.h : main header file for the MYFN1 application
//

#if !defined(AFX_MYFN1_H__7039B80D_6EA4_4418_873A_E0AAE9668E97__INCLUDED_)
#define AFX_MYFN1_H__7039B80D_6EA4_4418_873A_E0AAE9668E97__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyfn1App:
// See Myfn1.cpp for the implementation of this class
//

class CMyfn1App : public CWinApp
{
public:
	CMyfn1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyfn1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyfn1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFN1_H__7039B80D_6EA4_4418_873A_E0AAE9668E97__INCLUDED_)
