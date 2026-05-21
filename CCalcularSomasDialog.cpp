// CCalcularSomasDialog.cpp : implementation file
//

#include "pch.h"
#include "CeasaGUI.h"
#include "afxdialogex.h"
#include "CCalcularSomasDialog.h"
#include "Resource.h"

// CCalcularSomasDialog dialog

IMPLEMENT_DYNAMIC(CCalcularSomasDialog, CDialogEx)

CCalcularSomasDialog::CCalcularSomasDialog(CWnd *pParent /*=nullptr*/) : CDialogEx(IDD_SOMA_FORMVIEW, pParent) {}

CCalcularSomasDialog::~CCalcularSomasDialog() {}

void CCalcularSomasDialog::DoDataExchange(CDataExchange *pDX) { CDialogEx::DoDataExchange(pDX); }

void CCalcularSomasDialog::OnDestroy() {
	CDialog::OnDestroy();

	// Notify the parent (MainFrame) that this dialog is being destroyed
	if (GetParent()) GetParent()->PostMessage(WM_CALCULAR_SOMAS_CLOSED);
}

BEGIN_MESSAGE_MAP(CCalcularSomasDialog, CDialogEx)
ON_WM_DESTROY()
END_MESSAGE_MAP()

// CCalcularSomasDialog message handlers
