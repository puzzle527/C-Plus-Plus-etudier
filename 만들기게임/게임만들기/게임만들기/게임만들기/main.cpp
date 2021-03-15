#include "stdafx.h"

int main(void)
{
	srand(time(NULL));
	Ataho* pAtaho = new Ataho("¾ÆÅ¸È£", 100, 100);
	Store* pStore = new Store;
	Inventory* pInven = new Inventory;

	AtahoHome* Map1 = new AtahoHome;
	MountainRoad* Map2 = new MountainRoad;
	SeasideVillage* Map3 = new SeasideVillage;
	Map* CurrentMap = Map1;

	Map3->SetpInven(pInven);
	Map3->SetpAtaho(pAtaho);
	//Map3->SetpStore(pStore);

	Map2->SetpInven(pInven);
	Map2->SetpAtaho(pAtaho);
	//Map2->SetpStore(pStore);

	Map1->SetpInven(pInven);
	Map1->SetpAtaho(pAtaho);
	//Map1->SetpStore(pStore);
	
	while (1)
	{
		int MapNumber = CurrentMap->Play();
		if (MapNumber == 0)
			return 0;
		else if (MapNumber == 1)
		{
			CurrentMap = Map2;
		}
		else if (MapNumber == 2)
		{
			CurrentMap = Map3;
		}
		
	}

	delete Map3;
	delete Map2;
	delete Map1;
	delete pInven;
	delete pAtaho;
	delete pStore;
	return 0;
}