#include "stdafx.h"
#include "SRP.h"

void SRP::PlayGame()
{
	cout << "참여할 인원을 입력해주세요" << endl;
	cin >> Size;
	Players.resize(Size);

	for (int i = 0; i < Size; i++)
	{
		string tempstr;

		cout << "플레이어이름:";
		cin >> tempstr;
		Players[i].SetName(tempstr);
	}

	while (1)
	{
		Scnt = Rcnt = Pcnt = 0;

		cout << "가위 바위 보" << endl << endl;

		for (int i = 0; i < Players.size(); i++)
		{
			//가위바위보 내기
			int tempnum1 = rand() % 3;
			int tempnum2 = rand() % 3;

			Players[i].SetIsWin(false);
			Players[i].SetHands(tempnum1, tempnum2);

			Players[i].PrintHands();
		}

		Sleep(1000);
		cout << endl;
		cout << "하나 빼기 일" << endl << endl;
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
					cout << Players[i].GetName() << " : 가위";
					break;
				case 1:
					cout << Players[i].GetName() << " : 바위";
					break;
				case 2:
					cout << Players[i].GetName() << " : 보";
					break;
				}
				cout << endl;
			}
			cout << endl;
			cout << "무승부" << endl << endl;
			continue;
		}
		else
		{
			//가위가 이긴경우
			if (Rcnt == 0)
			{
				isWinPlayer(0);
			}
			//바위가 이긴경우
			else if (Pcnt == 0)
			{
				isWinPlayer(1);
			}
			//보가 이긴경우
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
			cout << Players[0].GetName() << "승리" << endl;
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
		//승패 출력
		Players[i].Print();
	}
}
