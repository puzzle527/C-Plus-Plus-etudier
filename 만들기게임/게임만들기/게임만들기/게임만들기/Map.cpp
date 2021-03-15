#include "stdafx.h"
#include "Map.h"

Map::Map()
{
}

Map::Map(string na)
{
	Mapname = na;
}

Map::~Map()
{
	for (int i = 0; Monster.size(); i++)
	{
		delete Monster[i];
	}
	Monster.clear();
	Monster.shrink_to_fit();
	delete pStore;
}

void Map::InitMob()
{
}

void Map::FightMob()
{
}

int Map::UseSkill()
{
	return 0;
}

void Map::DamageSkill(int SKnum, int Monum)
{
}

void Map::UseInven()
{
	pInven->PrintInven();
	cout << "사용할 아이템 번호를 선택하세요.(-1. 나가기)" << endl;
	cin >> Input;
	if (Input == -1)
		return;
	pInven->GetInven()[Input]->UseItem(pAtaho);
	pInven->DeleteInvenItem();
}

void Map::InitpStore()
{
}

int Map::Play()
{
	return 0;
}

int AtahoHome::Play()
{
	pInven->InitInven();
	pAtaho->InitSkill();
	//InitMob();
	while (1)
	{
		system("cls");
		cout << "현재 위치 : 아타호의 거처" << endl;
		pAtaho->PrintCharacter();
		cout << "0.종료 1.이동 2.인벤토리" << endl;
		cin >> Input;
		if (Input == 1)
		{
			cout << "어디로 이동하시겠습니까?(1.산길)" << endl;
			cin >> Input;
			return Input;
		}
		else if (Input == 2)
			UseInven();
	}
}

int MountainRoad::Play()
{
	//pAtaho->InitSkill();
	InitMob();
	while (1)
	{
		system("cls");
		cout << "현재 위치 : 산길" << endl;
		pAtaho->PrintCharacter();
		cout << "0.종료 1.이동 2.인벤토리 3.몬스터와 싸우기" << endl;
		cin >> Input;
		if (Input == 0)
			return 0;
		else if (Input == 1)
			return 2;
		else if (Input == 2)
			UseInven();
		else if (Input == 3)
			FightMob();
	}
}

void MountainRoad::InitMob()
{
	Monster.push_back(new Monkey("원숭이", 100, 5, 2, 30, 50));
	Monster.push_back(new Wildboar("멧돼지", 120, 10, 5, 40, 100));
}

void MountainRoad::FightMob()
{
	int Mobnum = rand() % 2;

	while (1)
	{
		system("cls");
		//아타호의 턴
		pAtaho->PrintCharacter();
		Monster[Mobnum]->PrintMop();
		cout << "1.공격 2.도주 3.인벤토리" << endl << endl;
		cin >> Input;
		switch (Input)
		{
		//스킬사용
		case 1:
		{
			int Skillnum = UseSkill();
			DamageSkill(Skillnum, Mobnum);
			break;
		}
		case 2:
			cout << "도주" << endl;
			return;
		//인벤토리 아이템 사용
		case 3:
			UseInven();
			break;
		}

		if (Monster[Mobnum]->GetMopHp() < 0)
		{
			cout << "몬스터를 잡았다." << endl;
			Monster[Mobnum]->SetMopHp(100);
			pAtaho->LevelUp(Monster[Mobnum]->GetMopExp());
			pInven->SetInvenGold(pInven->GetInvenGold() + Monster[Mobnum]->GetMopGold());
			return;
		}
		//몹의 턴
		cout << Monster[Mobnum]->GetMopName() << " : 공격" << endl;
		pAtaho->SetChHP(pAtaho->GetChHP() - Monster[Mobnum]->GetMopAtt());

		if (pAtaho->GetChHP() < 0)
		{
			cout << "죽었다." << endl;
			pAtaho->SetChHP(pAtaho->GetMAXHP());
			pAtaho->SetChMP(pAtaho->GetMAXMP());
			return;
		}

	}
}

int MountainRoad::UseSkill()
{
	pAtaho->ChPrintSkill();
	cout << "사용할 스킬번호를 선택하세요." << endl;

	if (pAtaho->GetChMP() < pAtaho->GetSkillMP(1))
		cout << "스킬은 사용할 수 없습니다." << endl;

	cin >> Input;
	return Input;
}

void MountainRoad::DamageSkill(int SKnum, int Monum) //UseSkill Input = Sknum
{
	Monster[Monum]->SetMopHp(Monster[Monum]->GetMopDef() + Monster[Monum]->GetMopHp() - pAtaho->GetSkillDamage(SKnum) + pAtaho->GetChAtt());
	pAtaho->SetChMP(pAtaho->GetChMP() - pAtaho->GetSkillMP(SKnum));
}

void MountainRoad::UseInven()
{
	pInven->PrintInven();
	cout << "사용할 아이템 번호를 선택하세요.(-1. 나가기)" << endl;
	cin >> Input;
	if (Input == -1)
		return;
	pInven->GetInven()[Input]->UseItem(pAtaho);
	pInven->DeleteInvenItem();
}

int SeasideVillage::Play()
{
	system("cls");
	InitpStore();
	pStore->InitStore();
	cout << "해변마을 이벤트가 발생하였습니다." << endl;
	cout << "1.먹기대회참가 2.마시기대회참가 3.참가안함" << endl;
	cin >> Input;
	if (Input == 1)
	{
		cout << "냠냠쩝쩝" << endl;
		Sleep(500);
		cout << "쿰척쿰척" << endl;
		Sleep(500);
		cout << "꺼-억" << endl;
		Sleep(500);
		cout << "먹기대회에서 우승하였습니다(우승상금 1000원)." << endl;
		pInven->SetInvenGold(pInven->GetInvenGold() + 1000);
	}
	else if (Input == 2)
	{
		cout << "꿀꺽꿀꺽" << endl;
		Sleep(500);
		cout << "벌컥벌컥" << endl;
		Sleep(500);
		cout << "꺼-억" << endl;
		Sleep(500);
		cout << "마시기대회에서 우승하였습니다(우승상금 500원)." << endl;
		pInven->SetInvenGold(pInven->GetInvenGold() + 500);
	}

	while (1)
	{
		cout << "현재 위치 : 해변마을" << endl;
		pAtaho->PrintCharacter();
		cout << "0.종료 1.산길 2.인벤토리 3.상점 4.휴식" << endl;
		cin >> Input;
		if (Input == 0)
			return 0;
		else if (Input == 1)
			return 1;
		else if (Input == 2)
			UseInven();
		else if (Input == 3)
		{
			cout << "1.구매 2.판매 -1.나가기" << endl;
			cin >> Input;
			if (Input == -1)
				continue;
			else if (Input == 1)
			{
				int index = pStore->UseStore();
				pInven->AddInvenItem(pStore->SelectStoreItem(index), 1);
				pInven->AddGold(pStore->GetStoreList()[index]->GetItemPrice());
			}
			else if (Input == 2)
				pInven->SetInvenGold(pInven->GetInvenGold() + pInven->SellItem());
		}
		else if (Input == 4)
			pAtaho->Rest();
	}
}

void SeasideVillage::InitpStore()
{
	pStore = new SeaStore;
}

void SeasideVillage::UseInven()
{
	pInven->PrintInven();
	cout << "사용할 아이템 번호를 선택하세요.(-1. 나가기)" << endl;
	cin >> Input;
	if (Input == -1)
		return;
	pInven->GetInven()[Input]->UseItem(pAtaho);
	pInven->DeleteInvenItem();
}