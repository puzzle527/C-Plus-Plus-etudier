#pragma once
class Store
{
	string	Name = "����";
	vector<Weapon>	StoreWeapon;
	vector<Armor>	StoreArmor;
	vector<Portion>	StorePortion;
	Player	User;

public:
	void StorePlay();
	void StorePrint();
	void InitStore();
};

