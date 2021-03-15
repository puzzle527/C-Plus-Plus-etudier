#pragma once
class Mop
{
protected:
	string	MopName;
	int		MopHp;
	int		MopAtt;
	int		MopDef;
	int		MopExp;
	int		MopGold;
public:
	Mop();
	Mop(string na, int h, int at);

	virtual void PrintMop();
	MAKEGETSET(string, MopName)
	MAKEGETSET(int, MopHp)
	MAKEGETSET(int, MopExp)
	MAKEGETSET(int, MopAtt)
	MAKEGETSET(int, MopDef)
	MAKEGETSET(int, MopGold)
};

class Monkey : public Mop
{
public:
	Monkey();
	Monkey(string na, int h, int at, int def, int exp, int gold);

	void PrintMop() override;
};

class Wildboar : public Mop
{
public:
	Wildboar();
	Wildboar(string na, int h, int at, int def, int exp, int gold);

	void PrintMop() override;
};

