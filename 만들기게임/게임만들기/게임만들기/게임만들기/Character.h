#pragma once
class Character
{
protected:
	string	Chname;
	int		MAXHP	= 100;
	int		MAXMP	= 100;
	int		ChHP;
	int		ChMP;
	int		Level	= 1;
	int		Exp		= 0;
	int		ChDef	= 5;
	int		ChAtt	= 10;
	vector<Skill*> pSkill;

public:
	Character();
	~Character();
	Character(string na);

	virtual void PrintCharacter();
	virtual void InitSkill();
	virtual void AddSkill(Skill *pSk);
	virtual void ChPrintSkill();
	virtual int	 GetSkillDamage(int Sknum);
	virtual int	 GetSkillMP(int Sknum);
	virtual void LevelUp(int exp);
	virtual void Rest();
	MAKEGETSET(int, Exp)
	MAKEGETSET(int, ChAtt)
	MAKEGETSET(int, ChDef)
	MAKEGETSET(int, ChHP)
	MAKEGETSET(int, ChMP)
	MAKEGETSET(int, MAXHP)
	MAKEGETSET(int, MAXMP)
	MAKEGETSET(int, Level)
};

class Ataho : public Character
{

public:
	Ataho();
	Ataho(string na, int hp, int mp);

	void PrintCharacter()		override;
	void InitSkill()			override;
	void AddSkill(Skill *pSk)	override;
	void ChPrintSkill()			override;
	int	 GetSkillDamage(int Sknum) override;
	int	 GetSkillMP(int Sknum) override;
	void LevelUp(int exp) override;
	void Rest() override;
};

