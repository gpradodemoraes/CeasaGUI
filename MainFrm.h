// MainFrm.h : interface of the CMainFrame class
//

#pragma once
#include "ChildView.h"
#include "CCalcularSomasDialog.h"

class CMainFrame : public CFrameWnd {
   public:
	HACCEL m_hAccel;
	CCalcularSomasDialog *m_pCalcDlg = nullptr;
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

	// Generated message map functions
   protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd *pOldWnd);

   private:
	afx_msg LRESULT OnCalcularSomasClosed(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};
