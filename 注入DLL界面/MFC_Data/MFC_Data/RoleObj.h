#pragma once
#include "global_func_var.h"
class CRoleObj
{
public:
	CRoleObj();
	~CRoleObj();

	CRoleObj * init();
	void Print_allarg();
private:
	//������������
	char* szpRoleName; //��������
	DWORD ndLevel; //����ȼ�
	DWORD ndCurHp; //��ǰhp
	DWORD ndCurMp; 
	DWORD ndCurAngry;
	DWORD ndMaxHp;
	DWORD ndMaxMp;
	DWORD ndMaxAngry;
	QWORD nqCurExp;
	QWORD ndMaxExp;
	DWORD ndCurLilian; //��ǰ����
};

