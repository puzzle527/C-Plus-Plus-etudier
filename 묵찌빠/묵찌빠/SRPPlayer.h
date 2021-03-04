#pragma once
class SRPPlayer
{
private:
	string  name;   //이름
	int     number; //마지막에 남은 손
	bool    isWin;  //이겼는지 졌는지
public:
	void    Print();   //본인멤버출력
	void	PrintWin();
	MAKEGETSET(string, name)
	MAKEGETSET(int, number)
	MAKEGETSET(bool, isWin)
};

