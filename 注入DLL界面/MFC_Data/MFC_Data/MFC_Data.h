// MFC_Data.h : MFC_Data DLL ����ͷ�ļ�
//

#pragma once
#include "C_Main_Data_dlg.h"

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_DataApp
// �йش���ʵ�ֵ���Ϣ������� MFC_Data.cpp
//

class CMFC_DataApp : public CWinApp
{
public:
	CMFC_DataApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()


private:

	//C_Main_Data_dlg *p_maindataDlg;

	//DWORD WINAPI gamemain_dlg(LPVOID lpaRam);
	void init();
};
