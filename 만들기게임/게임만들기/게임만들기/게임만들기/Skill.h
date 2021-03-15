#pragma once
class Skill
{
protected:
	string	SkillName;
	int		SkillDamage;
	int		SkillMP;
public:
	Skill();
	virtual void PrintSkill();
	MAKEGETSET(int, SkillDamage)
	MAKEGETSET(int, SkillMP)
};

class SkillBasic : public Skill
{
public:
	SkillBasic();
	SkillBasic(string name, int damage, int mp);
	void PrintSkill() override;
};

class SkillNormal : public Skill
{
public:
	SkillNormal();
	SkillNormal(string name, int damage, int mp);
	void PrintSkill() override;
};
