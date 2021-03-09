#include "stdafx.h"
#include "Inventory.h"

Inventory::~Inventory()
{
	Inven.clear();
	Inven.shrink_to_fit();
	cout << "인벤토리 할당 해제" << endl;
}

void Inventory::AddItem(Item * p)
{
	Inven.push_back(p);
}

void Inventory::PrintInven()
{
	for (int i = 0; i < Inven.size(); i++)
	{
		cout << i << ".";
		Inven[i]->Print();
		cout << "수량 : " << Inven[i]->Getmount() << endl;
	}
	cout << "소지금 : " << gold << endl;
}

void Inventory::DeleteItem(int index)
{
	Inven.erase(Inven.begin() + index);
}
