#include "stdafx.h"

int main()
{
	srand((unsigned int)time(NULL));

	Shop* pShop = new Shop();
	pShop->Play();
	delete pShop;

	return 0;
}