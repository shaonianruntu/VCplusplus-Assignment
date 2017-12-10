// Myfn2.h : main header file for the MYFN2 application
//

#if !defined(AFX_MYFN2_H__AE57619A_2EA9_4E4C_B108_762F906B9148__INCLUDED_)
#define AFX_MYFN2_H__AE57619A_2EA9_4E4C_B108_762F906B9148__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyfn2App:
// See Myfn2.cpp for the implementation of this class
//

class CMyfn2App : public CWinApp
{
public:
	CMyfn2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyfn2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyfn2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFN2_H__AE57619A_2EA9_4E4C_B108_762F906B9148__INCLUDED_)
