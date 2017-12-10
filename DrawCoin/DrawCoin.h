// DrawCoin.h : main header file for the DRAWCOIN application
//

#if !defined(AFX_DRAWCOIN_H__702DAC0E_8054_4304_884E_8EF41CD3EB57__INCLUDED_)
#define AFX_DRAWCOIN_H__702DAC0E_8054_4304_884E_8EF41CD3EB57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDrawCoinApp:
// See DrawCoin.cpp for the implementation of this class
//

class CDrawCoinApp : public CWinApp
{
public:
	CDrawCoinApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawCoinApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDrawCoinApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWCOIN_H__702DAC0E_8054_4304_884E_8EF41CD3EB57__INCLUDED_)
