#pragma once

#include <windows.h>
// MainInject �Ի���

class MainInject : public CDialogEx
{
	DECLARE_DYNAMIC(MainInject)

public:
	MainInject(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MainInject();

// �Ի�������
	enum { IDD = IDD_DLG_INJECT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnInject();
	CString m_staticlog;
	HMODULE m_hmodule;
	
	afx_msg void OnBnClickedBtnUninject();
};
