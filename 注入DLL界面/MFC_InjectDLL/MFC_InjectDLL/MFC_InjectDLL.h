// MFC_InjectDLL.h : MFC_InjectDLL DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_InjectDLLApp
// �йش���ʵ�ֵ���Ϣ������� MFC_InjectDLL.cpp
//

class CMFC_InjectDLLApp : public CWinApp
{
public:
	CMFC_InjectDLLApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
