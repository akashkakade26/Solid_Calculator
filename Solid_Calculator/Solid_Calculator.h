
// Solid_Calculator.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSolidCalculatorApp:
// See Solid_Calculator.cpp for the implementation of this class
//

class CSolidCalculatorApp : public CWinApp
{
public:
	CSolidCalculatorApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSolidCalculatorApp theApp;
