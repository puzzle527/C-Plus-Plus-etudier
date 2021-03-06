#pragma once
class Store
{
	string	Name = "ªÛ¡°";
	vector<Weapon>	StoreWeapon;
	vector<Armor>	StoreArmor;
	vector<Portion>	StorePortion;
	Player	User;

public:
	void StorePlay();
	void StorePrint();
	void InitStore();
};

