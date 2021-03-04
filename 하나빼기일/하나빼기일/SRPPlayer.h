#pragma once
class SRPPlayer
{
	string  name;   //이름
	int     number1;
	int		number2;
	int		LastHand;
	bool    isWin;  //이겼는지 졌는지

public:
	void    Print();   //본인멤버출력
	void	PrintHands();
	void	SetName(string str);
	void	SetHands(int num1, int num2);
	void	SetIsWin(bool tempbool);
	void	SetLastHand(int num);
	int		GetRHand();
	int		GetLHand();
	int		GetLastHand();
	bool	GetIsWin();
	string	GetName();
};

