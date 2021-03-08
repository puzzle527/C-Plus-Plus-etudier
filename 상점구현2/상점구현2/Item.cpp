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
	cout << "�̸�:" << name << "\t"
		<< "����:" << price << endl;
}

Weapon::Weapon(string na, int pr, int at)
{
	name = na;
	price = pr;
	att = at;
}

void Weapon::Print()
{
	cout << "�̸�:" << name << "\t"
		<< "����:" << price << "\t"
		<< "���ݷ�:" << att << endl;
}

Armor::Armor(string na, int pr, int de)
{
	name = na;
	price = pr;
	def = de;
}

void Armor::Print()
{
	cout << "�̸�:" << name << "\t"
		<< "����:" << price << "\t"
		<< "����:" << def << endl;
}