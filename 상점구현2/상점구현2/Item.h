#pragma once

class Item
{
private:

protected:
	string	name;
	int		price;
	int		mount = 1;
public:
	Item();
	Item(string na, int pr);
	Item(const Item &Copy);
	virtual void Print();
	virtual ~Item() //가상 소멸자
	{
		cout << "아이템 삭제" << endl;
	}
	MAKEGETSET(string, name);
	MAKEGETSET(int, price);
	MAKEGETSET(int, mount);
	virtual Item* Clone() { return new Item(*this); }
};

class Weapon :public Item
{
private:
	int att;
public:
	Weapon(string na, int pr, int at);
	Weapon(const Weapon &Copy);
	~Weapon()
	{
		cout << "웨폰 삭제" << endl;
	}
	void Print() override;
	virtual Item* Clone() { return new Weapon(*this); }
};

class Armor :public Item
{
private:
	int def;
public:
	Armor(string na, int pr, int de);
	Armor(const Armor &Copy);
	~Armor()
	{
		cout << "아머 삭제" << endl;
	}
	void Print() override;
	virtual Item* Clone() { return new Armor(*this); }
};

