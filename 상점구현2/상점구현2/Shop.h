#pragma once

class Shop
{
private:
	Inventory*	pInven;
	Item*		ShopList[6];
	int			Input;

public:
	~Shop();
	void    InitShop();//상점목록 초기화
	void    Play(); //상점실행함수
	void    BuyItem();
	void    SellItem();
	MAKESET(Inventory*, pInven)
};