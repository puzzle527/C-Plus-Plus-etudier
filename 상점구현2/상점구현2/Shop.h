#pragma once

class Shop
{
private:
	Inventory*	pInven;
	Item*		ShopList[6];
	int			Input;

public:
	~Shop();
	void    InitShop();//������� �ʱ�ȭ
	void    Play(); //���������Լ�
	void    BuyItem();
	void    SellItem();
	MAKESET(Inventory*, pInven)
};