#pragma once
class Inventory
{
	vector<Item*> InvenList;
	int	InvenGold = 100;
public:
	~Inventory();
	vector<Item*>& GetInven() { return InvenList; }
	void PrintInven();
	void InitInven();
	void AddInvenItem(Item * item, int mount);
	void DeleteInvenItem(int index);
	void DeleteInvenItem();
	int SellItem();
	virtual void AddGold(int price);
	MAKEGETSET(int, InvenGold)
};

