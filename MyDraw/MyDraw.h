// MyDraw.h : main header file for the MYDRAW application
//

#if !defined(AFX_MYDRAW_H__2E21AD3D_9B38_4EB9_A813_2B9F8FE9F495__INCLUDED_)
#define AFX_MYDRAW_H__2E21AD3D_9B38_4EB9_A813_2B9F8FE9F495__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyDrawApp:
// See MyDraw.cpp for the implementation of this class
//

class CMyDrawApp : public CWinApp
{
public:
	CMyDrawApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDrawApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyDrawApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDRAW_H__2E21AD3D_9B38_4EB9_A813_2B9F8FE9F495__INCLUDED_)
