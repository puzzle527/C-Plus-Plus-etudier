#include "stdafx.h"
#include "Item.h"

void Weapon::PrintWeapon()
{
	cout << "종류 : 무기" << endl;
	cout << "이름 : " << Name << "\t가격 : " << Price << endl;
	cout << "공격력 : " << Attack;
	cout << "\t현재 갯수 : " << Amount << endl << endl;
}

void Armor::PrintArmor()
{
	cout << "종류 : 방어구" << endl;
	cout << "이름 : " << Name << "\t가격 : " << Price << endl;
	cout << "방어력 : " << Defense;
	cout << "\t현재 갯수 : " << Amount << endl << endl;
}

void Portion::PrintPortion()
{
	cout << "종류 : 포션" << endl;
	cout << "이름 : " << Name << "\t\t가격 : " << Price << endl;
	if (HpRecovery == 0)
		cout << "마나 회복량 : " << MpRecovery;
	else if (MpRecovery == 0)
		cout << "체력 회복량 : " << HpRecovery;
	cout << "\t현재 갯수 : " << Amount << endl << endl;
}
