#include "stdafx.h"

int main()
{
	srand((unsigned int)time(NULL));

	Inventory* pInven = new Inventory();
	Shop* pShop = new Shop();
	pShop->SetpInven(pInven);
	pShop->Play();

	delete pShop;
	delete pInven;

	return 0;
}