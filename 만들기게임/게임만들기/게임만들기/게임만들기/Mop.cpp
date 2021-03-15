#include "stdafx.h"
#include "Mop.h"

Mop::Mop()
{
}

Mop::Mop(string na, int h, int at)
{
	MopName = na;
	MopHp = h;
	MopAtt = at;
}

void Mop::PrintMop()
{
}

Wildboar::Wildboar()
{
}

Wildboar::Wildboar(string na, int h, int at, int def, int exp, int gold)
{
	MopName = na;
	MopHp = h;
	MopAtt = at;
	MopDef = def;
	MopExp = exp;
	MopGold = gold;
}

void Wildboar::PrintMop()
{
	cout << "이름 : " << MopName << endl;
	cout << "체력 : " << MopHp << endl;
	cout << "공격력 : " << MopAtt << endl;
}

Monkey::Monkey()
{
}

Monkey::Monkey(string na, int h, int at, int def, int exp, int gold)
{
	MopName = na;
	MopHp = h;
	MopAtt = at;
	MopDef = def;
	MopExp = exp;
	MopGold = gold;
}

void Monkey::PrintMop()
{
	cout << "이름 : " << MopName << endl;
	cout << "체력 : " << MopHp << endl;
	cout << "공격력 : " << MopAtt << endl;
	cout << "방어력 : " << MopDef << endl;
}
