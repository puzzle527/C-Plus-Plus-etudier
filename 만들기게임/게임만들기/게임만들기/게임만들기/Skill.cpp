#include "stdafx.h"
#include "Skill.h"

Skill::Skill()
{
}

void Skill::PrintSkill()
{
}

SkillBasic::SkillBasic()
{
}

SkillBasic::SkillBasic(string name, int damage, int mp)
{
	SkillName = name;
	SkillDamage = damage;
	SkillMP = mp;
}

void SkillBasic::PrintSkill()
{
	cout << "��ų �̸� : " << SkillName << endl;
	cout << "��ų ������ : " << SkillDamage << endl;
}

SkillNormal::SkillNormal()
{
}

SkillNormal::SkillNormal(string name, int damage, int mp)
{
	SkillName = name;
	SkillDamage = damage;
	SkillMP = mp;
}

void SkillNormal::PrintSkill()
{
	cout << "��ų �̸� : " << SkillName << endl;
	cout << "��ų ������ : " << SkillDamage << endl;
	cout << "Mp �Ҹ� : " << SkillMP << endl;
}