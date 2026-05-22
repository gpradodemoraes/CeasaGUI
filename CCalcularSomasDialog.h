#pragma once
#include "afxdialogex.h"

// CCalcularSomasDialog dialog

class CCalcularSomasDialog : public CDialogEx {
	DECLARE_DYNAMIC(CCalcularSomasDialog)

   public:
	CCalcularSomasDialog(CWnd *pParent = nullptr); // standard constructor
	virtual ~CCalcularSomasDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SOMA_FORMVIEW };
#endif

   protected:
	virtual void DoDataExchange(CDataExchange *pDX); // DDX/DDV support
	afx_msg void OnDestroy();
	virtual void OnOK() override;
	virtual void OnCancel() override;
	virtual BOOL CCalcularSomasDialog::PreTranslateMessage(MSG *pMsg) override;
	virtual BOOL OnInitDialog() override;
	DECLARE_MESSAGE_MAP()
   public:
	afx_msg void OnBnClickedButtonCalculaSomas();
};
