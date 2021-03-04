#pragma once
class SRP
{
	vector<SRPPlayer>   Players;
	int                 Size;
	int                 Scnt, Rcnt, Pcnt;

public:
	void PlayGame();
	void isWinPlayer(int number);
};

