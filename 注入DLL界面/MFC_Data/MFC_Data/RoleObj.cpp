#include "stdafx.h"
#include "RoleObj.h"
#include "BaseAddr.h"

CRoleObj::CRoleObj()
{
}


CRoleObj::~CRoleObj()
{
}



CRoleObj * CRoleObj::init(){


	//char* szpRoleName; //��������
	//DWORD ndLevel; //����ȼ�
	//DWORD ndCurHp; //��ǰhp
	//DWORD ndCurMp;
	//DWORD ndCurAngry;
	//DWORD ndMaxHp;
	//DWORD ndMaxMp;
	//DWORD ndMaxAngry;
	//QWORD nqCurExp;
	//QWORD ndMaxExp;
	//DWORD ndCurLilian; //��ǰ����
	__try{
		szpRoleName = (char*)Base_RoleAddr;
		ndLevel = *(BYTE*)(Base_RoleAddr + 0x34);
		ndCurHp = *(DWORD*)(Base_RoleAddr + 0x80);
		ndCurMp = *(DWORD*)(Base_RoleAddr + 0x84);
		ndCurAngry = *(DWORD*)(Base_RoleAddr + 0x88);
		ndMaxHp = *(DWORD*)(Base_RoleAddr + 0x8c);
		ndMaxMp = *(DWORD*)(Base_RoleAddr + 0x90);
		ndMaxAngry = *(DWORD*)(Base_RoleAddr + 0x94);
		nqCurExp = *(QWORD*)(Base_RoleAddr + 0x98);
		ndMaxExp = *(QWORD*)(Base_RoleAddr + 0xa0);
		ndCurLilian = *(DWORD*)(Base_RoleAddr + 0xAC);
	}
	__except (1){

		DbgPrint_String("CRoleObj * CRoleObj::init()�����쳣");
	}


	return this;
}


void  CRoleObj::Print_allarg(){

	DbgPrint_String("%s  , %d , %d", szpRoleName, ndCurHp, ndCurMp);

}