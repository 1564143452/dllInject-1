// MFC_Data.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "MFC_Data.h"

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

// CMFC_DataApp

BEGIN_MESSAGE_MAP(CMFC_DataApp, CWinApp)
END_MESSAGE_MAP()


// CMFC_DataApp ����

CMFC_DataApp::CMFC_DataApp()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��

	//p_maindataDlg = nullptr;
}


// Ψһ��һ�� CMFC_DataApp ����

CMFC_DataApp theApp;


// CMFC_DataApp ��ʼ��

BOOL CMFC_DataApp::InitInstance()
{
	CWinApp::InitInstance();


	//���������ļ���
	init();

	return TRUE;
}


//�ص�����
C_Main_Data_dlg *p_maindataDlg = nullptr;
DWORD WINAPI gamemain_dlg(LPVOID lpaRam){
	p_maindataDlg = new C_Main_Data_dlg;
	
	p_maindataDlg->DoModal();

	delete p_maindataDlg;
	FreeLibraryAndExitThread(theApp.m_hInstance, 1);

	return TRUE;
}



void  CMFC_DataApp::init(){

	::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)gamemain_dlg, NULL, NULL, NULL);
	
}