#include "stdafx.h"

int main()
{

	srand((unsigned int)time(NULL));

	SRP* A = new SRP();
	A->PlayGame();

	delete A;

	return 0;
}