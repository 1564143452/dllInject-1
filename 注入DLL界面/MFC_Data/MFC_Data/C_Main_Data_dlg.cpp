// C_Main_Data_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_Data.h"
#include "C_Main_Data_dlg.h"
#include "afxdialogex.h"
#include "global_func_var.h"
#include "RoleObj.h"

// C_Main_Data_dlg �Ի���

IMPLEMENT_DYNAMIC(C_Main_Data_dlg, CDialogEx)

C_Main_Data_dlg::C_Main_Data_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C_Main_Data_dlg::IDD, pParent)
{

}

C_Main_Data_dlg::~C_Main_Data_dlg()
{
}

void C_Main_Data_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_Main_Data_dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_TEST, &C_Main_Data_dlg::OnBnClickedBtnTest)
END_MESSAGE_MAP()


// C_Main_Data_dlg ��Ϣ�������


void C_Main_Data_dlg::OnBnClickedBtnTest()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	CRoleObj *pRoleobj = new CRoleObj;
	pRoleobj->init()->Print_allarg();
	delete pRoleobj;

	DbgPrint_String("��Ϣ���뵽���Ժ������԰�ť");

}
