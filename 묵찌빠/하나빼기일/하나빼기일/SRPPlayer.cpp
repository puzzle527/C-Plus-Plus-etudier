#include "stdafx.h"
#include "SRPPlayer.h"

void SRPPlayer::Print()
{
	switch (LastHand)
	{
	case 0:
		cout << name << " : 가위";
		break;
	case 1:
		cout << name << " : 바위";
		break;
	case 2:
		cout << name << " : 보";
		break;
	}
	if (isWin)
	{
		cout << "\t" << "승리" << endl;
	}
	else
	{
		cout << "\t" << "패배" << endl;
	}
}

void SRPPlayer::SetName(string str)
{
	name = str;
}

void SRPPlayer::SetHands(int num1, int num2)
{
	number1 = num1;
	number2 = num2;
}

void SRPPlayer::SetIsWin(bool tempbool)
{
	isWin = tempbool;
}

void SRPPlayer::SetLastHand(int num)
{
	LastHand = num;
}

int SRPPlayer::GetRHand()
{
	return number1;
}

int SRPPlayer::GetLHand()
{
	return number2;
}

int SRPPlayer::GetLastHand()
{
	return LastHand;
}

bool SRPPlayer::GetIsWin()
{
	return isWin;
}

string SRPPlayer::GetName()
{
	return name;
}

void SRPPlayer::PrintHands()
{
	switch (number1)
	{
	case 0:
		cout << name << "오른손 : 가위";
		break;
	case 1:
		cout << name << "오른손 : 바위";
		break;
	case 2:
		cout << name << "오른손 : 보";
		break;
	}

	cout << "\t";

	switch (number2)
	{
	case 0:
		cout << "왼손 : 가위";
		break;
	case 1:
		cout << "왼손 : 바위";
		break;
	case 2:
		cout << "왼손 : 보";
		break;
	}
	cout << endl;
}
