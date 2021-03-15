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
	cout << "����� ������ ��ȣ�� �����ϼ���.(-1. ������)" << endl;
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
		cout << "���� ��ġ : ��Ÿȣ�� ��ó" << endl;
		pAtaho->PrintCharacter();
		cout << "0.���� 1.�̵� 2.�κ��丮" << endl;
		cin >> Input;
		if (Input == 1)
		{
			cout << "���� �̵��Ͻðڽ��ϱ�?(1.���)" << endl;
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
		cout << "���� ��ġ : ���" << endl;
		pAtaho->PrintCharacter();
		cout << "0.���� 1.�̵� 2.�κ��丮 3.���Ϳ� �ο��" << endl;
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
	Monster.push_back(new Monkey("������", 100, 5, 2, 30, 50));
	Monster.push_back(new Wildboar("�����", 120, 10, 5, 40, 100));
}

void MountainRoad::FightMob()
{
	int Mobnum = rand() % 2;

	while (1)
	{
		system("cls");
		//��Ÿȣ�� ��
		pAtaho->PrintCharacter();
		Monster[Mobnum]->PrintMop();
		cout << "1.���� 2.���� 3.�κ��丮" << endl << endl;
		cin >> Input;
		switch (Input)
		{
		//��ų���
		case 1:
		{
			int Skillnum = UseSkill();
			DamageSkill(Skillnum, Mobnum);
			break;
		}
		case 2:
			cout << "����" << endl;
			return;
		//�κ��丮 ������ ���
		case 3:
			UseInven();
			break;
		}

		if (Monster[Mobnum]->GetMopHp() < 0)
		{
			cout << "���͸� ��Ҵ�." << endl;
			Monster[Mobnum]->SetMopHp(100);
			pAtaho->LevelUp(Monster[Mobnum]->GetMopExp());
			pInven->SetInvenGold(pInven->GetInvenGold() + Monster[Mobnum]->GetMopGold());
			return;
		}
		//���� ��
		cout << Monster[Mobnum]->GetMopName() << " : ����" << endl;
		pAtaho->SetChHP(pAtaho->GetChHP() - Monster[Mobnum]->GetMopAtt());

		if (pAtaho->GetChHP() < 0)
		{
			cout << "�׾���." << endl;
			pAtaho->SetChHP(pAtaho->GetMAXHP());
			pAtaho->SetChMP(pAtaho->GetMAXMP());
			return;
		}

	}
}

int MountainRoad::UseSkill()
{
	pAtaho->ChPrintSkill();
	cout << "����� ��ų��ȣ�� �����ϼ���." << endl;

	if (pAtaho->GetChMP() < pAtaho->GetSkillMP(1))
		cout << "��ų�� ����� �� �����ϴ�." << endl;

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
	cout << "����� ������ ��ȣ�� �����ϼ���.(-1. ������)" << endl;
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
	cout << "�غ����� �̺�Ʈ�� �߻��Ͽ����ϴ�." << endl;
	cout << "1.�Ա��ȸ���� 2.���ñ��ȸ���� 3.��������" << endl;
	cin >> Input;
	if (Input == 1)
	{
		cout << "�ȳ�����" << endl;
		Sleep(500);
		cout << "��ô��ô" << endl;
		Sleep(500);
		cout << "��-��" << endl;
		Sleep(500);
		cout << "�Ա��ȸ���� ����Ͽ����ϴ�(��»�� 1000��)." << endl;
		pInven->SetInvenGold(pInven->GetInvenGold() + 1000);
	}
	else if (Input == 2)
	{
		cout << "�ܲ��ܲ�" << endl;
		Sleep(500);
		cout << "��������" << endl;
		Sleep(500);
		cout << "��-��" << endl;
		Sleep(500);
		cout << "���ñ��ȸ���� ����Ͽ����ϴ�(��»�� 500��)." << endl;
		pInven->SetInvenGold(pInven->GetInvenGold() + 500);
	}

	while (1)
	{
		cout << "���� ��ġ : �غ�����" << endl;
		pAtaho->PrintCharacter();
		cout << "0.���� 1.��� 2.�κ��丮 3.���� 4.�޽�" << endl;
		cin >> Input;
		if (Input == 0)
			return 0;
		else if (Input == 1)
			return 1;
		else if (Input == 2)
			UseInven();
		else if (Input == 3)
		{
			cout << "1.���� 2.�Ǹ� -1.������" << endl;
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
	cout << "����� ������ ��ȣ�� �����ϼ���.(-1. ������)" << endl;
	cin >> Input;
	if (Input == -1)
		return;
	pInven->GetInven()[Input]->UseItem(pAtaho);
	pInven->DeleteInvenItem();
}