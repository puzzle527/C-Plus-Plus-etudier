#pragma once
class SRPPlayer
{
private:
	string  name;   //�̸�
	int     number; //�������� ���� ��
	bool    isWin;  //�̰���� ������
public:
	void    Print();   //���θ�����
	void	PrintWin();
	MAKEGETSET(string, name)
	MAKEGETSET(int, number)
	MAKEGETSET(bool, isWin)
};

