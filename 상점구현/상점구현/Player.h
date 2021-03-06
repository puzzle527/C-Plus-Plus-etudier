#pragma once
class Player
{
	string	Name;
	int		Money = 50000;

public:
	MAKEGETSET(string, Name);
	MAKEGETSET(int, Money);
	void PrintPlayer();
};

