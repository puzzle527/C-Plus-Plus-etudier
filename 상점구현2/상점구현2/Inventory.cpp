#include "stdafx.h"
#include "Inventory.h"

Inventory::~Inventory()
{
	Inven.clear();
	Inven.shrink_to_fit();
	cout << "�κ��丮 �Ҵ� ����" << endl;
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
		cout << "���� : " << Inven[i]->Getmount() << endl;
	}
	cout << "������ : " << gold << endl;
}

void Inventory::DeleteItem(int index)
{
	Inven.erase(Inven.begin() + index);
}
