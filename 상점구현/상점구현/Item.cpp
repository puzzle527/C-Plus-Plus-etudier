#include "stdafx.h"
#include "Item.h"

void Weapon::PrintWeapon()
{
	cout << "���� : ����" << endl;
	cout << "�̸� : " << Name << "\t���� : " << Price << endl;
	cout << "���ݷ� : " << Attack;
	cout << "\t���� ���� : " << Amount << endl << endl;
}

void Armor::PrintArmor()
{
	cout << "���� : ��" << endl;
	cout << "�̸� : " << Name << "\t���� : " << Price << endl;
	cout << "���� : " << Defense;
	cout << "\t���� ���� : " << Amount << endl << endl;
}

void Portion::PrintPortion()
{
	cout << "���� : ����" << endl;
	cout << "�̸� : " << Name << "\t\t���� : " << Price << endl;
	if (HpRecovery == 0)
		cout << "���� ȸ���� : " << MpRecovery;
	else if (MpRecovery == 0)
		cout << "ü�� ȸ���� : " << HpRecovery;
	cout << "\t���� ���� : " << Amount << endl << endl;
}
