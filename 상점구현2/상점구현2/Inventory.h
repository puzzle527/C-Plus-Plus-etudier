#pragma once
class Inventory
{
	vector<Item*> Inven;
	int gold = 10000;
public:
	~Inventory();
	vector<Item*>& GetInven() { return Inven; }
	void AddItem(Item* p);
	void PrintInven();
	void DeleteItem(int index);
	MAKEGETSET(int, gold)
	//MAKEGET(vector<Item*>, Inven)
};

