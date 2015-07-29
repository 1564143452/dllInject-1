// MFC_InjectDLL.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "MFC_InjectDLL.h"
#include "MainInject.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CMFC_InjectDLLApp

BEGIN_MESSAGE_MAP(CMFC_InjectDLLApp, CWinApp)
END_MESSAGE_MAP()


// CMFC_InjectDLLApp ����

CMFC_InjectDLLApp::CMFC_InjectDLLApp()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CMFC_InjectDLLApp ����

CMFC_InjectDLLApp theApp;

MainInject *pmainInject = nullptr;

DWORD WINAPI MainInjectDlgProc(LPARAM lpData){

	pmainInject = new MainInject;
	pmainInject->DoModal();
	delete pmainInject;
	FreeLibraryAndExitThread(theApp.m_hInstance, 1);
	return true;
}


// CMFC_InjectDLLApp ��ʼ��

BOOL CMFC_InjectDLLApp::InitInstance()
{
	CWinApp::InitInstance();


	::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)MainInjectDlgProc, NULL, NULL, NULL);

	return TRUE;
}
