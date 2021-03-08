#include "stdafx.h"
#include "Shop.h"

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
		cout << "1.���� 2.�Ǹ�" << endl;
		cin >> Input;
		switch (Input)
		{
		case 1:
			BuyItem();
			break;
		case 2:
			SellItem();
			break;
		}
	}
}

void Shop::BuyItem()
{
	for (int i = 0; i < 6; i++)
	{
		ShopList[i]->Print();
	}
	cout << "������ ����" << endl;
}

void Shop::SellItem()
{
	cout << "������ �Ǹ�" << endl;
}