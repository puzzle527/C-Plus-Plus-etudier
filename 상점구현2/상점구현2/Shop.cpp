#include "stdafx.h"
#include "Shop.h"

Shop::~Shop()
{
	for (int i = 0; i < 6; i++)
	{
		delete ShopList[i];
	}
	cout << "샵리스트 할당 해제" << endl;
}

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
		system("cls");
		pInven->PrintInven();
		cout << "1.구입 2.판매 3.나가기" << endl;
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
		cout << i << ".";//인덱스 출력
		ShopList[i]->Print();
	}
	cout << "구매할 아이템 번호 입력" << endl;
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
	cout << "구매완료" << endl;
	Sleep(1000);
}

void Shop::SellItem()
{
	system("cls");
	pInven->PrintInven();
	cout << "판매할 아이템 번호 입력" << endl;
	cin >> Input;
	pInven->GetInven()[Input]->Setmount(pInven->GetInven()[Input]->Getmount() - 1);
	pInven->Setgold(pInven->GetInven()[Input]->Getprice() + pInven->Getgold());
	if(pInven->GetInven()[Input]->Getmount() == 0)
		pInven->DeleteItem(Input);
	cout << "판매완료" << endl;
	Sleep(1000);
}