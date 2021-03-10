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

Item::Item(const Item & Copy)
{
	name = Copy.name;
	mount = Copy.mount;
	price = Copy.price;
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

Weapon::Weapon(const Weapon & Copy)
{
	name = Copy.name;
	mount = Copy.mount;
	price = Copy.price;
	att = Copy.att;
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

Armor::Armor(const Armor & Copy)
{
	name = Copy.name;
	mount = Copy.mount;
	price = Copy.price;
	def = Copy.def;
}

void Armor::Print()
{
	cout << "이름:" << name << "\t"
		<< "가격:" << price << "\t"
		<< "방어력:" << def << endl;
}