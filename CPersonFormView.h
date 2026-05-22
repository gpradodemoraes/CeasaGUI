#pragma once
#include <afxext.h>
#include "resource.h"

class CPersonFormView : public CFormView {
	DECLARE_DYNCREATE(CPersonFormView)

   public:
	enum { IDD = IDD_PERSON_FORM };

	CString m_strName;
	CString m_strCellphone;

   protected:
	CPersonFormView() : CFormView(IDD) {}

	virtual ~CPersonFormView() {}

	virtual void DoDataExchange(CDataExchange *pDX) override;

	afx_msg void OnBnClickedSubmit();
	DECLARE_MESSAGE_MAP()
};
