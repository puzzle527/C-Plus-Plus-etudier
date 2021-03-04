#include "stdafx.h"
#include "SRPPlayer.h"

void SRPPlayer::Print()
{
	switch (number)
	{
	case 0:
		cout << name << "\t" << "가위";
		break;
	case 1:
		cout << name << "\t" << "바위";
		break;
	case 2:
		cout << name << "\t" << "보";
		break;
	}
}

void SRPPlayer::PrintWin()
{
	if (isWin)
	{
		cout << "\t" << "승리" << endl;
	}
	else
	{
		cout << "\t" << "패배" << endl;
	}
}
