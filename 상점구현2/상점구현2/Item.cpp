#include "stdafx.h"
#include "Item.h"

Item::Item()
{
}

Item::Item(string na, int pr)
{
	name = na;
	price = pr;
}

void Item::Print()
{
	cout << "이름:" << name << "\t"
		<< "가격:" << price << endl;
}

Weapon::Weapon(string na, int pr, int at)
{
	name = na;
	price = pr;
	att = at;
}

void Weapon::Print()
{
	cout << "이름:" << name << "\t"
		<< "가격:" << price << "\t"
		<< "공격력:" << att << endl;
}

Armor::Armor(string na, int pr, int de)
{
	name = na;
	price = pr;
	def = de;
}

void Armor::Print()
{
	cout << "이름:" << name << "\t"
		<< "가격:" << price << "\t"
		<< "방어력:" << def << endl;
}