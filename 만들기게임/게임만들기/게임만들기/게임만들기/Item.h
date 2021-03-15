#pragma once
class Item
{
protected:
	string	ItemName;
	int		ItemPrice;
	int		ItemMount = 1;
public:
	MAKEGETSET(int, ItemMount)
	MAKEGETSET(int, ItemPrice)
	MAKEGETSET(string, ItemName)
	virtual void PrintItem();
	virtual void UseItem(Character* pCharac);
	virtual Item* Clone() { return new Item(*this); }
	Item();
};

class Portion : public Item
{
	int ItemHP;
	int ItemMP;
public:
	Portion();
	Portion(string name, int price, int hp, int mp);
	void PrintItem() override;
	void UseItem(Character* pCharac) override;
	MAKEGETSET(int, ItemHP)
	MAKEGETSET(int, ItemMP)
	Item* Clone() override { return new Portion(*this); }
};

class Weapon : public Item
{
	int ItemAtt;
public:
	Weapon();
	Weapon(string name, int price, int att);
	void PrintItem() override;
	MAKEGETSET(int, ItemAtt)
	Item* Clone() override { return new Weapon(*this); }
};

class Armor : public Item
{
	int ItemDef;
public:
	Armor();
	Armor(string name, int price, int def);
	void PrintItem() override;
	MAKEGETSET(int, ItemDef)
	Item* Clone() override { return new Armor(*this); }
};