// CPersonFormView.cpp
#include "pch.h"
#include "CPersonFormView.h"
#include "resource.h"

IMPLEMENT_DYNCREATE(CPersonFormView, CFormView)

BEGIN_MESSAGE_MAP(CPersonFormView, CFormView)
ON_BN_CLICKED(IDC_BUTTON_SUBMIT, &CPersonFormView::OnBnClickedSubmit)
END_MESSAGE_MAP()

void CPersonFormView::DoDataExchange(CDataExchange *pDX) {
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDX_Text(pDX, IDC_EDIT_CELLPHONE, m_strCellphone);
}

void CPersonFormView::OnBnClickedSubmit() {
	// Pull data from controls into member variables
	UpdateData(TRUE);

	CString msg;
	msg.Format(_T("Name: %s\nCellphone: %s"), m_strName, m_strCellphone);
	AfxMessageBox(msg);
}
