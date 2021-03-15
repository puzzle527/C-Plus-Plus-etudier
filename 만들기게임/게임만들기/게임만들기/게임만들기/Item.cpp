#include "stdafx.h"
#include "Item.h"

void Item::PrintItem()
{
	cout << "이름 : " << ItemName << "\t" << "이름 : " << ItemName << "\t"
		<< "수량 :  " << ItemMount << endl;
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
	cout << "이름 : " << ItemName << "\t" << "가격 : " << ItemPrice << endl;
	cout << "HP회복량 : " << ItemHP << "\t" << "MP회복량 : " << ItemMP << endl;
	cout << "수량 :  " << ItemMount << endl;
	
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
	cout << "이름 : " << ItemName << "\t" << "가격 : " << ItemPrice << endl;
	cout << "공격력 : " << ItemAtt << endl;
	cout << "수량 : " << ItemMount << endl;
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
	cout << "이름 : " << ItemName << "\t" << "가격 : " << ItemPrice << endl;
	cout << "방어력 : " << ItemDef << endl;
	cout << "수량 : " << ItemMount << endl;
}
