// MainInject.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_InjectDLL.h"
#include "MainInject.h"
#include "afxdialogex.h"


// MainInject �Ի���

IMPLEMENT_DYNAMIC(MainInject, CDialogEx)

MainInject::MainInject(CWnd* pParent /*=NULL*/)
	: CDialogEx(MainInject::IDD, pParent)
	, m_staticlog(_T(""))
{

}

MainInject::~MainInject()
{
}

void MainInject::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATIC_LOG, m_staticlog);
}


BEGIN_MESSAGE_MAP(MainInject, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_INJECT, &MainInject::OnBnClickedBtnInject)
	ON_BN_CLICKED(IDC_BTN_UNINJECT, &MainInject::OnBnClickedBtnUninject)
END_MESSAGE_MAP()


// MainInject ��Ϣ�������


void MainInject::OnBnClickedBtnInject()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	CFileDialog cdlg(true);

	CString filePathName;

	if (cdlg.DoModal() == IDOK){
		filePathName = cdlg.GetPathName();

		m_hmodule= LoadLibrary(filePathName);
		m_staticlog = filePathName;
	}

	//ShowWindow(SW_HIDE);


	this->ShowWindow(SW_HIDE);


	UpdateData(FALSE);
}


void MainInject::OnBnClickedBtnUninject()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	FreeLibrary(m_hmodule);
}
