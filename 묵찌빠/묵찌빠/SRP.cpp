#include "stdafx.h"
#include "SRP.h"

void SRP::PlayGame()
{
	string tempstr;
	cout << "�÷��̾� �̸��� �Է����ּ���." << endl;
	cin >> tempstr;
 
	Player.Setname(tempstr);
	Com.Setname("��ǻ��");

	//���������� ����
	while (1)
	{
		int tempnum;
		Player.SetisWin(false);
		Com.SetisWin(false);

		cout << "0.���� 1.���� 2.��" << endl;
		cin >> tempnum;
		Player.Setnumber(tempnum);
		Com.Setnumber(rand() % 3);

		if (Player.Getnumber() == Com.Getnumber())
		{
			cout << "���º�" << endl;
			continue;
		}
		else if (Player.Getnumber() == 0)
		{
			if (Com.Getnumber() == 2)
				Player.SetisWin(true);
			else
				Com.SetisWin(true);
		}
		else if (Player.Getnumber() == 1)
		{
			if (Com.Getnumber() == 0)
				Player.SetisWin(true);
			else
				Com.SetisWin(true);
		}
		else
		{
			if (Com.Getnumber() == 1)
				Player.SetisWin(true);
			else
				Com.SetisWin(true);
		}

		Player.Print();
		Player.PrintWin();
		Com.Print();
		Com.PrintWin();

		while (1)
		{
			cout << "1.�� 0.�� 2.��" << endl;
			cin >> tempnum;

			Player.Setnumber(tempnum);
			Com.Setnumber(rand() % 3);

			Player.Print();
			cout << endl;
			Com.Print();
			cout << endl;

			if (Player.GetisWin() == true)
			{
				if (Player.Getnumber() == Com.Getnumber())
				{
					cout << "�÷��̾� �¸�" << endl;
					return;
				}
				else if (Player.Getnumber() == 0)
				{
					if (Com.Getnumber() == 1)
					{
						Player.SetisWin(false);
						Com.SetisWin(true);
					}

				}
				else if (Player.Getnumber() == 1)
				{
					if (Com.Getnumber() == 2)
					{
						Player.SetisWin(false);
						Com.SetisWin(true);
					}
				}
				else
				{
					if (Com.Getnumber() == 0)
					{
						Player.SetisWin(false);
						Com.SetisWin(true);
					}
				}
			}
			else
			{
				if (Com.Getnumber() == Player.Getnumber())
				{
					cout << "��ǻ�� �¸�" << endl;
					return;
				}
				else if (Com.Getnumber() == 0)
				{
					if (Player.Getnumber() == 1)
					{
						Com.SetisWin(false);
						Player.SetisWin(true);
					}

				}
				else if (Player.Getnumber() == 1)
				{
					if (Player.Getnumber() == 2)
					{
						Com.SetisWin(false);
						Player.SetisWin(true);
					}
				}
				else
				{
					if (Player.Getnumber() == 0)
					{
						Com.SetisWin(false);
						Player.SetisWin(true);
					}
				}
			}
		}
	}
}