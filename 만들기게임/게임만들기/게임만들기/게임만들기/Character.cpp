#include "stdafx.h"
#include "Character.h"

Character::Character()
{
}

Character::~Character()
{
	for (int i = 0; pSkill.size(); i++)
	{
		delete pSkill[i];
	}
	pSkill.clear();
	pSkill.shrink_to_fit();
}

Character::Character(string na)
{
	Chname = na;
}

void Character::PrintCharacter()
{
	cout << Chname << endl;
}

void Character::InitSkill()
{
}

void Character::AddSkill(Skill * pSk)
{
}

void Character::ChPrintSkill()
{
}

int Character::GetSkillDamage(int Sknum)
{
	return 0;
}

int Character::GetSkillMP(int Sknum)
{
	return 0;
}

void Character::LevelUp(int exp)
{
}

void Character::Rest()
{
}

Ataho::Ataho()
{
}

Ataho::Ataho(string na, int hp, int mp)
{
	Chname = na;
	ChHP = hp;
	ChMP = mp;
}

void Ataho::PrintCharacter()
{
	cout << "�̸� : " << Chname << endl;
	cout << "ü�� : " << ChHP << "\t" << "���� : " << ChMP << endl;
	cout << "���� : " << Level << "\t" << "����ġ : " << Exp << endl;
	cout << "���ݷ� : " << ChAtt << "\t" << "���� : " << ChDef << endl;
}

void Ataho::InitSkill()
{
	pSkill.push_back(new SkillBasic("����", 25, 0));
	pSkill.push_back(new SkillNormal("ȣ��", 50, 20));
}

void Ataho::AddSkill(Skill * pSk)
{
	pSkill.push_back(pSk);
}

void Ataho::ChPrintSkill()
{
	for (int i = 0; i < pSkill.size(); i++)
	{
		if (pSkill[i]->GetSkillMP() <= ChMP)
		{
			cout << i << ".";
			pSkill[i]->PrintSkill();
		}
	}
}

int Ataho::GetSkillDamage(int Sknum)
{
	return pSkill[Sknum]->GetSkillDamage();
}

int Ataho::GetSkillMP(int Sknum)
{
	return pSkill[Sknum]->GetSkillMP();
}

void Ataho::LevelUp(int exp)
{
	Exp += exp;
	if (Exp >= 100)
	{
		Level++;
		MAXHP += 30;
		MAXMP += 20;
		ChHP = MAXHP;
		ChMP = MAXMP;
		ChDef += 2;
		ChAtt += 5;
		Exp -= 100;
	}
	if (Level == 2)
	{
		SkillNormal* NewSkill = new SkillNormal("ȣ�ݱ�", 70, 30);
		AddSkill(NewSkill);
	}
}

void Ataho::Rest()
{
	system("cls");
	cout << "�޽��� ���մϴ�. ü�°� ������ ȸ���˴ϴ�." << endl;
	Sleep(500);
	ChHP = MAXHP;
	ChMP = MAXMP;
}
