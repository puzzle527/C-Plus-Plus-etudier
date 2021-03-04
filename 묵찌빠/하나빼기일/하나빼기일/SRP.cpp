#include "stdafx.h"
#include "SRP.h"

void SRP::PlayGame()
{
	cout << "������ �ο��� �Է����ּ���" << endl;
	cin >> Size;
	Players.resize(Size);

	for (int i = 0; i < Size; i++)
	{
		string tempstr;

		cout << "�÷��̾��̸�:";
		cin >> tempstr;
		Players[i].SetName(tempstr);
	}

	while (1)
	{
		Scnt = Rcnt = Pcnt = 0;

		cout << "���� ���� ��" << endl << endl;

		for (int i = 0; i < Players.size(); i++)
		{
			//���������� ����
			int tempnum1 = rand() % 3;
			int tempnum2 = rand() % 3;

			Players[i].SetIsWin(false);
			Players[i].SetHands(tempnum1, tempnum2);

			Players[i].PrintHands();
		}

		Sleep(1000);
		cout << endl;
		cout << "�ϳ� ���� ��" << endl << endl;
		Sleep(1000);

		for (int i = 0; i < Players.size(); i++)
		{
			int tempnum = rand() % 2;
			//int temp1 = Players[i].GetRHand();
			//int temp2 = Players[i].GetLHand();

			if (tempnum == 0)
				Players[i].SetLastHand(Players[i].GetRHand());
			else
				Players[i].SetLastHand(Players[i].GetLHand());

			if (Players[i].GetLastHand() == 0)
				Scnt++;
			else if (Players[i].GetLastHand() == 1)
				Rcnt++;
			else if (Players[i].GetLastHand() == 2)
				Pcnt++;
		}
		if ((Scnt > 0 && Rcnt > 0 && Pcnt > 0)
			 || Scnt == Players.size() 
			 || Rcnt == Players.size() 
			 || Pcnt == Players.size())
		{
			for (int i = 0; i < Players.size(); i++)
			{

				switch (Players[i].GetLastHand())
				{
				case 0:
					cout << Players[i].GetName() << " : ����";
					break;
				case 1:
					cout << Players[i].GetName() << " : ����";
					break;
				case 2:
					cout << Players[i].GetName() << " : ��";
					break;
				}
				cout << endl;
			}
			cout << endl;
			cout << "���º�" << endl << endl;
			continue;
		}
		else
		{
			//������ �̱���
			if (Rcnt == 0)
			{
				isWinPlayer(0);
			}
			//������ �̱���
			else if (Pcnt == 0)
			{
				isWinPlayer(1);
			}
			//���� �̱���
			else
			{
				isWinPlayer(2);
			}
		}

		for (int i = 0; i < Players.size(); i++)
		{
			if (Players[i].GetIsWin() == false)
			{
				Players.erase(Players.begin()+ i);
				i--;
			}
		}

		if (Players.size() == 1)
		{
			cout << Players[0].GetName() << "�¸�" << endl;
			Players.clear();
			Players.shrink_to_fit();
			break;
		}
	}
}

void SRP::isWinPlayer(int number)
{
	for (int i = 0; i < Players.size(); i++)
	{
		if (Players[i].GetLastHand() == number)
		{
			Players[i].SetIsWin(true);
		}
		//���� ���
		Players[i].Print();
	}
}
