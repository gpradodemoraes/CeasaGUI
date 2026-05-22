// MainFrm.h : interface of the CMainFrame class
//

#pragma once
#include "ChildView.h"
#include "CPersonFormView.h"

class CMainFrame : public CFrameWnd {
   public:
	HACCEL m_hAccel;
	CMainFrame() noexcept;
	afx_msg void OnCalcularSomas();
	afx_msg void OnShowHelp();

   protected:
	DECLARE_DYNAMIC(CMainFrame)

	// Attributes
   public:
	// Operations
   public:
	// Overrides
   public:
	virtual BOOL PreCreateWindow(CREATESTRUCT &cs);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void *pExtra, AFX_CMDHANDLERINFO *pHandlerInfo);

	virtual void OnSize(UINT nType, int cx, int cy);

	// Implementation
   public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext &dc) const;
#endif

   protected: // control bar embedded members
	CStatusBar m_wndStatusBar;
	CChildView m_wndView;
	CPersonFormView *m_pPersonFormView = nullptr;

	// Generated message map functions
   protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd *pOldWnd);
	DECLARE_MESSAGE_MAP()
};
