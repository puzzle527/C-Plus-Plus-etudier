#include "stdafx.h"
#include "Inventory.h"

Inventory::~Inventory()
{
	for (int i = 0; i < InvenList.size(); i++)
	{
		delete InvenList[i];
	}
	InvenList.clear();
	InvenList.shrink_to_fit();
}

void Inventory::PrintInven()
{
	system("cls");
	for (int i = 0; i < InvenList.size(); i++)
	{
		cout << i << ". ";
		InvenList[i]->PrintItem();
	}
	cout << endl;
	cout << "현재 골드 : " <<InvenGold << endl;
}

void Inventory::InitInven()
{
	InvenList.push_back(new Portion("약초1", 200, 100, 0));
	InvenList.push_back(new Portion("리프레쉬워터1", 200, 0, 50));
}

void Inventory::AddInvenItem(Item * item, int mount)
{
	InvenList.push_back(item);
	for (int i = 0; i < InvenList.size() - 1; i++)
	{
		if (InvenList[InvenList.size() - 1]->GetItemName() == InvenList[i]->GetItemName())
		{
			InvenList[i]->SetItemMount(InvenList[i]->GetItemMount() + mount);
			InvenList.pop_back();
			return;
		}
	}
}

void Inventory::DeleteInvenItem(int index)
{
	InvenList.erase(InvenList.begin() + index);
}

void Inventory::DeleteInvenItem()
{
	for (int i = 0; i < InvenList.size(); i++)
	{
		if (InvenList[i]->GetItemMount() == 0)
			InvenList.erase(InvenList.begin() + i);
	}
}

int Inventory::SellItem()
{
	int Input;
	system("cls");
	PrintInven();
	cout << "판매할 아이템 번호를 선택하세요." << endl;
	cin >> Input;
	InvenList[Input]->SetItemMount(InvenList[Input]->GetItemMount() - 1);
	DeleteInvenItem();
	return InvenList[Input]->GetItemPrice();
}

void Inventory::AddGold(int price)
{
	InvenGold += price;
}
