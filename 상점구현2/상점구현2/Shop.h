#pragma once

class Shop
{
private:	
	Item*		ShopList[6];
	int			Input;

public:
	void    InitShop();//������� �ʱ�ȭ
	void    Play(); //���������Լ�
	void    BuyItem();
	void    SellItem();
};