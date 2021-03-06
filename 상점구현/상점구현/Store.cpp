#include "stdafx.h"
#include "Store.h"

void Store::StorePlay()
{
	User.SetName("����");
	
	InitStore();

	while (1)
	{
		User.PrintPlayer();
		cout << endl;

		StorePrint();

		int Input = 0;
		int cnt = 0;
		cout << "1.���� 2.�Ǹ� 3.������" << endl;
		cin >> Input;
		if (Input == 1)
		{
			cout << "1.���� 2.�� 3.����" << endl;
			cin >> Input;
			if (Input == 1)
			{
				cout << "������ ���� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "���� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StoreWeapon[Input - 1].SetAmount(StoreWeapon[Input - 1].GetAmount() - cnt);
				User.SetMoney(User.GetMoney() - StoreWeapon[Input - 1].GetPrice() * cnt);
				for (int i = 0; i < StoreWeapon.size(); i++)
				{
					if (StoreWeapon[i].GetAmount() == 0)
						StoreWeapon.erase(StoreWeapon.begin() + i);
				}
			}
			else if (Input == 2)
			{
				cout << "������ �� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "���� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StoreArmor[Input - 1].SetAmount(StoreArmor[Input - 1].GetAmount() - cnt);
				User.SetMoney(User.GetMoney() - StoreArmor[Input - 1].GetPrice() * cnt);
				for (int i = 0; i < StoreArmor.size(); i++)
				{
					if (StoreArmor[i].GetAmount() == 0)
						StoreArmor.erase(StoreArmor.begin() + i);
				}
			}
			else if (Input == 3)
			{
				cout << "������ ���� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "���� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StorePortion[Input - 1].SetAmount(StorePortion[Input - 1].GetAmount() - cnt);
				User.SetMoney(User.GetMoney() - StorePortion[Input - 1].GetPrice() * cnt);
				for (int i = 0; i < StorePortion.size(); i++)
				{
					if (StorePortion[i].GetAmount() == 0)
						StorePortion[i].SetAmount(1000);
				}
			}
		}
		else if (Input == 2)
		{
			cout << "1.���� 2.�� 3.����" << endl;
			cin >> Input;
			if (Input == 1)
			{
				cout << "�Ǹ��� ���� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "�Ǹ� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StoreWeapon[Input - 1].SetAmount(StoreWeapon[Input - 1].GetAmount() + cnt);
				User.SetMoney(User.GetMoney() + StoreWeapon[Input - 1].GetPrice() * cnt);
			}
			else if (Input == 2)
			{
				cout << "�Ǹ��� �� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "�Ǹ� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StoreArmor[Input - 1].SetAmount(StoreArmor[Input - 1].GetAmount() + cnt);
				User.SetMoney(User.GetMoney() + StoreArmor[Input - 1].GetPrice() * cnt);
			}
			if (Input == 3)
			{
				cout << "�Ǹ��� ���� ��ȣ�� �����Ͽ� �ּ���." << endl;
				cin >> Input;
				cout << "�Ǹ� ������ �Է����ּ���." << endl;
				cin >> cnt;
				StorePortion[Input - 1].SetAmount(StorePortion[Input - 1].GetAmount() + cnt);
				User.SetMoney(User.GetMoney() + StorePortion[Input - 1].GetPrice() * cnt);
			}
		}
		else if (Input == 3)
		{
			cout << "������ �����ϴ�." << endl;
			break;
		}
	}
}

void Store::StorePrint()
{
	for (int i = 0; i < StoreWeapon.size(); i++)
	{
		cout << i + 1 << ".";
		StoreWeapon[i].PrintWeapon();
	}
	for (int i = 0; i < StoreArmor.size(); i++)
	{
		cout << i + 1 << ".";
		StoreArmor[i].PrintArmor();
	}
	for (int i = 0; i < StorePortion.size(); i++)
	{
		cout << i + 1 << ".";
		StorePortion[i].PrintPortion();
	}
}

void Store::InitStore()
{
	Weapon	tempWeapon;
	Armor	tempArmor;
	Portion	tempPortion;

	tempWeapon.SetName("��");
	tempWeapon.SetAttack(100);
	tempWeapon.SetPrice(3000);
	StoreWeapon.push_back(tempWeapon);
	
	tempWeapon.SetName("Ȱ");
	tempWeapon.SetAttack(80);
	tempWeapon.SetPrice(2500);
	StoreWeapon.push_back(tempWeapon);

	tempWeapon.SetName("����");
	tempWeapon.SetAttack(110);
	tempWeapon.SetPrice(4000);
	StoreWeapon.push_back(tempWeapon);

	tempArmor.SetName("����");
	tempArmor.SetDefense(50);
	tempArmor.SetPrice(3000);
	StoreArmor.push_back(tempArmor);

	tempArmor.SetName("����");
	tempArmor.SetDefense(50);
	tempArmor.SetPrice(2000);
	StoreArmor.push_back(tempArmor);

	tempArmor.SetName("�Ź�");
	tempArmor.SetDefense(30);
	tempArmor.SetPrice(1000);
	StoreArmor.push_back(tempArmor);

	tempPortion.SetName("HP����");
	tempPortion.SetHpRecovery(100);
	tempPortion.SetMpRecovery(0);
	tempPortion.SetPrice(200);
	tempPortion.SetAmount(1000);
	StorePortion.push_back(tempPortion);

	tempPortion.SetName("MP����");
	tempPortion.SetMpRecovery(100);
	tempPortion.SetHpRecovery(0);
	tempPortion.SetPrice(300);
	tempPortion.SetAmount(1000);
	StorePortion.push_back(tempPortion);
}