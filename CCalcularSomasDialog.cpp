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

void CCalcularSomasDialog::OnLButtonDown(UINT nFlags, CPoint point) {
	MessageBoxW(_T("Mostrar HELP! óú"), _T("HELP áéí"), MB_OK);
	this->PostMessageW(WM_CLOSE);
}

void CCalcularSomasDialog::OnOK() {}

BEGIN_MESSAGE_MAP(CCalcularSomasDialog, CDialogEx)
ON_WM_DESTROY()
ON_WM_LBUTTONDOWN()
ON_BN_CLICKED(IDC_BUTTON_CALCULA_SOMAS, &CCalcularSomasDialog::OnBnClickedButtonCalculaSomas)
END_MESSAGE_MAP()

// CCalcularSomasDialog message handlers

void CCalcularSomasDialog::OnBnClickedButtonCalculaSomas() {
	MessageBoxW(_T("Botão Calcular Somas"), _T("Calcular Somas apertado!"), MB_OK);
	DestroyWindow();
}
