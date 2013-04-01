#pragma once

#include "resource.h"

// CShaderLoadingDialog dialog
class CShaderLoadingDialog : public CDialog
{
public:
	CShaderLoadingDialog();
	virtual ~CShaderLoadingDialog();

	void setRange( int num );
	void step();

// Dialog Data
	enum { IDD = IDD_SHADER_LOADING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	BOOL OnInitDialog();

	CProgressCtrl bar_;

	DECLARE_MESSAGE_MAP()
};
