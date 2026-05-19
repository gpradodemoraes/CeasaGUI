// ChildView.h : interface of the CChildView class
//

#pragma once

// CChildView window

class CChildView : public CWnd {
	// Construction
   public:
	CChildView();
	void drawHelp();

	// Attributes
   public:
	// Operations
   public:
	// Overrides
   protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT &cs);

	// Implementation
   public:
	virtual ~CChildView();

	// Generated message map functions
   protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};
