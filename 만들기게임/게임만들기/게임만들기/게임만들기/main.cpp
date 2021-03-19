#include "stdafx.h"

int main(void)
{
	srand(time(NULL));
	Ataho* pAtaho = new Ataho("아타호", 100, 100);
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
	
	/*while (1)
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
		
	}*/

	ofstream fout;
	fout.open("Save.txt", ios::out);
	fout << "최대체력:" << pAtaho->GetMAXHP() << endl;
	fout << "최대마나:" << pAtaho->GetMAXMP() << endl;
	fout << "현재체력:" << pAtaho->GetChHP() << endl;
	fout << "현재체력:" << pAtaho->GetChMP() << endl;
	fout << "레벨:" << pAtaho->GetLevel() << endl;
	fout << "경험치:" << pAtaho->GetExp() << endl;
	fout << "공격력:" << pAtaho->GetChAtt() << endl;
	fout << "방어력:" << pAtaho->GetChDef() << endl;
	fout << "골드:" << pInven->GetInvenGold() << endl;

	ifstream fin;

	fin.open("Save.txt", ios::in);
	string	temp = "";
	int		ntemp = 0;
	fin >> temp;
	for (int i = 0; i < temp.find(':') + 1; i++)
	{
		temp.erase(temp.begin() + i);
		i--;
	}
	ntemp = stoi(temp);	
	pAtaho->SetMAXHP(ntemp);

	delete Map3;
	delete Map2;
	delete Map1;
	delete pInven;
	delete pAtaho;
	delete pStore;
	return 0;
}