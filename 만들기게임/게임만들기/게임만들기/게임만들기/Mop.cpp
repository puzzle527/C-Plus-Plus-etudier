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
	cout << "�̸� : " << MopName << endl;
	cout << "ü�� : " << MopHp << endl;
	cout << "���ݷ� : " << MopAtt << endl;
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
	cout << "�̸� : " << MopName << endl;
	cout << "ü�� : " << MopHp << endl;
	cout << "���ݷ� : " << MopAtt << endl;
	cout << "���� : " << MopDef << endl;
}
