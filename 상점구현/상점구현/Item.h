#pragma once
class Item
{
protected:
	string	Name;
	int		Price;
	int		Amount = 5;
public:
	MAKEGETSET(string, Name);
	MAKEGETSET(int, Price);
	MAKEGETSET(int, Amount);
};

class Weapon : public Item
{
	int Attack;
public:
	MAKEGETSET(int, Attack);
	void PrintWeapon();
};

class Armor : public Item
{
	int Defense;
public:
	MAKEGETSET(int, Defense);
	void PrintArmor();
};

class Portion : public Item
{
	int HpRecovery = 0;
	int MpRecovery = 0;
public:
	MAKEGETSET(int, HpRecovery);
	MAKEGETSET(int, MpRecovery);
	void PrintPortion();
};