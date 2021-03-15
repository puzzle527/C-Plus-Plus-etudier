#pragma once
class Store
{
protected:
	vector<Item*> StoreList;
public:
	~Store();
	vector<Item*>& GetStoreList() { return StoreList; }
	virtual void AddStoreItem(Item* item);
	virtual void PrintStore();
	virtual int UseStore();
	virtual void InitStore();
	virtual Item* SelectStoreItem(int index);
};

class SeaStore : public Store
{
public:
	void AddStoreItem(Item* item) override;
	void PrintStore() override;
	int UseStore() override;
	void InitStore() override;
	Item* SelectStoreItem(int index) override;
};

