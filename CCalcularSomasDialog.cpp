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

void CCalcularSomasDialog::OnOK() {}

void CCalcularSomasDialog::OnCancel() {}

BEGIN_MESSAGE_MAP(CCalcularSomasDialog, CDialogEx)
ON_WM_DESTROY()
ON_BN_CLICKED(IDC_BUTTON_CALCULA_SOMAS, &CCalcularSomasDialog::OnBnClickedButtonCalculaSomas)
END_MESSAGE_MAP()

// CCalcularSomasDialog message handlers

void CCalcularSomasDialog::OnBnClickedButtonCalculaSomas() {
	MessageBoxW(_T("Botão Calcular Somas"), _T("Calcular Somas apertado!"), MB_OK);
	DestroyWindow();
}

BOOL CCalcularSomasDialog::PreTranslateMessage(MSG *pMsg) {
	if (pMsg->message == WM_LBUTTONDOWN) {
		TRACE("Mouse click received! hwnd=%p, dialog hwnd=%p\n", pMsg->hwnd, m_hWnd);
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}

BOOL CCalcularSomasDialog::OnInitDialog() {
	CDialogEx::OnInitDialog();

	TRACE("=== CCalcularSomasDialog Diagnostics ===\n");
	TRACE("Dialog HWND:       %p\n", m_hWnd);
	TRACE("Parent HWND:       %p\n", GetParent()->GetSafeHwnd());
	TRACE("Parent enabled:    %d\n", GetParent()->IsWindowEnabled());
	TRACE("Dialog enabled:    %d\n", IsWindowEnabled());
	TRACE("Dialog visible:    %d\n", IsWindowVisible());

	LONG style = GetWindowLong(m_hWnd, GWL_STYLE);
	TRACE("Has WS_CHILD:      %d\n", (style & WS_CHILD) != 0);
	TRACE("Has WS_VISIBLE:    %d\n", (style & WS_VISIBLE) != 0);
	TRACE("Has WS_DISABLED:   %d\n", (style & WS_DISABLED) != 0);

	CRect rect;
	GetWindowRect(&rect);
	TRACE("Dialog screen rect: %d %d %d %d\n", rect.left, rect.top, rect.right, rect.bottom);

	GetParent()->GetClientRect(&rect);
	TRACE("Parent client rect: %d %d %d %d\n", rect.left, rect.top, rect.right, rect.bottom);

	return TRUE;
}
