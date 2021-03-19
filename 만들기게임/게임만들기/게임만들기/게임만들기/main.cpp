#include "stdafx.h"

int main(void)
{
	srand(time(NULL));
	Ataho* pAtaho = new Ataho("��Ÿȣ", 100, 100);
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
	fout << "�ִ�ü��:" << pAtaho->GetMAXHP() << endl;
	fout << "�ִ븶��:" << pAtaho->GetMAXMP() << endl;
	fout << "����ü��:" << pAtaho->GetChHP() << endl;
	fout << "����ü��:" << pAtaho->GetChMP() << endl;
	fout << "����:" << pAtaho->GetLevel() << endl;
	fout << "����ġ:" << pAtaho->GetExp() << endl;
	fout << "���ݷ�:" << pAtaho->GetChAtt() << endl;
	fout << "����:" << pAtaho->GetChDef() << endl;
	fout << "���:" << pInven->GetInvenGold() << endl;

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