#pragma once

#include "resource.h"
// C_Main_Data_dlg �Ի���

class C_Main_Data_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(C_Main_Data_dlg)

public:
	C_Main_Data_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_Main_Data_dlg();

// �Ի�������
	enum { IDD = IDD_DLG_MAIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnTest();
};
