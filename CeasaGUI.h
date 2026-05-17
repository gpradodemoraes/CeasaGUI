// CeasaGUI.h : main header file for the CeasaGUI application
//
#pragma once

#ifndef __AFXWIN_H__
#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h" // main symbols

// CCeasaApp:
// See CeasaGUI.cpp for the implementation of this class
//

class CCeasaApp : public CWinApp {
   public:
	CCeasaApp() noexcept;

	// Overrides
   public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	// Implementation

   public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCeasaApp theApp;
