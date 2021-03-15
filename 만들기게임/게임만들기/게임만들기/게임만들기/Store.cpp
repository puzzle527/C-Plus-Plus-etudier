#include "stdafx.h"
#include "Store.h"

Store::~Store()
{
	for (int i = 0; i < StoreList.size(); i++)
	{
		delete StoreList[i];
	}
	StoreList.clear();
	StoreList.shrink_to_fit();
}

void Store::AddStoreItem(Item * item)
{
}

void Store::PrintStore()
{
}

int Store::UseStore()
{
	return 0;
}

void Store::InitStore()
{
}

Item* Store::SelectStoreItem(int index)
{
	return StoreList[index];
}

void SeaStore::AddStoreItem(Item * item)
{
	StoreList.push_back(item);
}

void SeaStore::PrintStore()
{
	system("cls");
	for (int i = 0; i < StoreList.size(); i++)
	{
		cout << i << ". ";
		StoreList[i]->PrintItem();
	}
}

int SeaStore::UseStore()
{
	int Input;
	PrintStore();
	cout << "구매할 아이템 번호를 선택하세요." << endl;
	cin >> Input;
	return Input;
}

void SeaStore::InitStore()
{
	StoreList.push_back(new Portion("약초2", 50, 50, 0));
	StoreList.push_back(new Portion("리프레쉬워터3", 50, 0, 30));
	StoreList.push_back(new Weapon("너클", 200, 10));
	StoreList.push_back(new Armor("도복", 200, 5));
}

Item* SeaStore::SelectStoreItem(int index)
{
	return StoreList[index]->Clone();
}
