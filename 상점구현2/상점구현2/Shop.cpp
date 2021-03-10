#include "stdafx.h"
#include "Shop.h"

Shop::~Shop()
{
	for (int i = 0; i < 6; i++)
	{
		delete ShopList[i];
	}
	cout << "������Ʈ �Ҵ� ����" << endl;
}

void Shop::InitShop()
{
	ShopList[0] = new Item("����1", 100);
	ShopList[1] = new Item("����2", 200);

	ShopList[2] = (Item*)new Weapon("���", 200, 10);
	ShopList[3] = new Weapon("ö��", 300, 20);

	ShopList[4] = new Armor("��������", 200, 10);
	ShopList[5] = new Armor("��������", 300, 20);

}

void Shop::Play()
{
	InitShop();
	while (1)
	{
		system("cls");
		pInven->PrintInven();
		cout << "1.���� 2.�Ǹ� 3.������" << endl;
		cin >> Input;
		switch (Input)
		{
		case 1:
			BuyItem();
			break;
		case 2:
			SellItem();
			break;
		case 3:
			return;
		}
	}
}

void Shop::BuyItem()
{
	system("cls");
	for (int i = 0; i < 6; i++)
	{
		cout << i << ".";//�ε��� ���
		ShopList[i]->Print();
	}
	cout << "������ ������ ��ȣ �Է�" << endl;
	cin >> Input;
	pInven->AddItem(ShopList[Input]->Clone());
	pInven->Setgold(pInven->Getgold() - pInven->GetInven()[pInven->GetInven().size() - 1]->Getprice());
	for (int i = 0; i < pInven->GetInven().size() - 1; i++)
	{
		if ((pInven->GetInven().size() != 1) &&
			((pInven->GetInven()[pInven->GetInven().size() - 1])->Getname()) == pInven->GetInven()[i]->Getname())
		{
			pInven->GetInven()[i]->Setmount(pInven->GetInven()[i]->Getmount() + 1);
			pInven->DeleteItem((pInven->GetInven().size()) - 1);
			break;
		}
	}
	cout << "���ſϷ�" << endl;
	Sleep(1000);
}

void Shop::SellItem()
{
	system("cls");
	pInven->PrintInven();
	cout << "�Ǹ��� ������ ��ȣ �Է�" << endl;
	cin >> Input;
	pInven->GetInven()[Input]->Setmount(pInven->GetInven()[Input]->Getmount() - 1);
	pInven->Setgold(pInven->GetInven()[Input]->Getprice() + pInven->Getgold());
	if(pInven->GetInven()[Input]->Getmount() == 0)
		pInven->DeleteItem(Input);
	cout << "�ǸſϷ�" << endl;
	Sleep(1000);
}