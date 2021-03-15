#include "stdafx.h"
#include "Item.h"

void Item::PrintItem()
{
	cout << "�̸� : " << ItemName << "\t" << "�̸� : " << ItemName << "\t"
		<< "���� :  " << ItemMount << endl;
}

void Item::UseItem(Character* pCharac)
{
	
}

Item::Item()
{
}

Portion::Portion()
{
}

Portion::Portion(string name, int price, int hp, int mp)
{
	ItemName = name;
	ItemPrice = price;
	ItemHP = hp;
	ItemMP = mp;
}

void Portion::PrintItem()
{
	cout << "�̸� : " << ItemName << "\t" << "���� : " << ItemPrice << endl;
	cout << "HPȸ���� : " << ItemHP << "\t" << "MPȸ���� : " << ItemMP << endl;
	cout << "���� :  " << ItemMount << endl;
	
}

void Portion::UseItem(Character* pCharac)
{
	pCharac->SetChHP(pCharac->GetChHP() + ItemHP);
	if (pCharac->GetChHP() >= pCharac->GetMAXHP())
		pCharac->SetChHP(pCharac->GetMAXHP());
	pCharac->SetChMP(pCharac->GetChMP() + ItemMP);
	if (pCharac->GetChMP() >= pCharac->GetMAXMP())
		pCharac->SetChMP(pCharac->GetMAXMP());
	ItemMount--;
}

Weapon::Weapon()
{
}

Weapon::Weapon(string name, int price, int att)
{
	ItemName = name;
	ItemPrice = price;
	ItemAtt = att;
}

void Weapon::PrintItem()
{
	cout << "�̸� : " << ItemName << "\t" << "���� : " << ItemPrice << endl;
	cout << "���ݷ� : " << ItemAtt << endl;
	cout << "���� : " << ItemMount << endl;
}

Armor::Armor()
{
}

Armor::Armor(string name, int price, int def)
{
	ItemName = name;
	ItemPrice = price;
	ItemDef = def;
}

void Armor::PrintItem()
{
	cout << "�̸� : " << ItemName << "\t" << "���� : " << ItemPrice << endl;
	cout << "���� : " << ItemDef << endl;
	cout << "���� : " << ItemMount << endl;
}
