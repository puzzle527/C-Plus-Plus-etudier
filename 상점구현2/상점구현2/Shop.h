#pragma once

class Shop
{
private:	
	Item*		ShopList[6];
	int			Input;

public:
	void    InitShop();//상점목록 초기화
	void    Play(); //상점실행함수
	void    BuyItem();
	void    SellItem();
};