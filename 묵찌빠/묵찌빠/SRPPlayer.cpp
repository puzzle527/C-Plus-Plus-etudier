#include "stdafx.h"
#include "SRPPlayer.h"

void SRPPlayer::Print()
{
	switch (number)
	{
	case 0:
		cout << name << "\t" << "����";
		break;
	case 1:
		cout << name << "\t" << "����";
		break;
	case 2:
		cout << name << "\t" << "��";
		break;
	}
}

void SRPPlayer::PrintWin()
{
	if (isWin)
	{
		cout << "\t" << "�¸�" << endl;
	}
	else
	{
		cout << "\t" << "�й�" << endl;
	}
}
