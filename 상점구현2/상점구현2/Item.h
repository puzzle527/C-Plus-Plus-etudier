#pragma once

class Item
{
private:

protected:
	string name;
	int price;
public:
	Item();
	Item(string na, int pr);
	void virtual Print();
};

class Weapon :public Item
{
private:
	int att;
public:

	Weapon(string na, int pr, int at);
	void virtual Print();
};

class Armor :public Item
{
private:
	int def;
public:
	Armor(string na, int pr, int de);
	void virtual Print();
};

