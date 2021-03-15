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
	cout << "스킬 이름 : " << SkillName << endl;
	cout << "스킬 데미지 : " << SkillDamage << endl;
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
	cout << "스킬 이름 : " << SkillName << endl;
	cout << "스킬 데미지 : " << SkillDamage << endl;
	cout << "Mp 소모량 : " << SkillMP << endl;
}