#pragma once
class SRPPlayer
{
	string  name;   //�̸�
	int     number1;
	int		number2;
	int		LastHand;
	bool    isWin;  //�̰���� ������

public:
	void    Print();   //���θ�����
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

