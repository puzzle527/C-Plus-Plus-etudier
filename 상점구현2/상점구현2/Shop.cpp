#include "stdafx.h"
#include "Shop.h"

void Shop::InitShop()
{
	ShopList[0] = new Item("잡템1", 100);
	ShopList[1] = new Item("잡템2", 200);

	ShopList[2] = (Item*)new Weapon("목검", 200, 10);
	ShopList[3] = new Weapon("철검", 300, 20);

	ShopList[4] = new Armor("나무투구", 200, 10);
	ShopList[5] = new Armor("나무갑옷", 300, 20);

}

void Shop::Play()
{
	InitShop();
	while (1)
	{
		cout << "1.구입 2.판매" << endl;
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
	cout << "아이템 구매" << endl;
}

void Shop::SellItem()
{
	cout << "아이템 판매" << endl;
}