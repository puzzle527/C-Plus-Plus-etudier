#pragma once
class Student
{
	string name;//�̸�
	int age;	//����
	bool gender; //����
public:
	//ĸ��ȭ
	//�ۿ��� ����� ����Ҽ��ִ� �Լ�
	void Print();
	//�� �Լ�(������� �ְ������)
	void SetName(string str);
	void SetAge(int num);
	void SetGender(bool num);
	//�� �Լ�(������� �ް������)
	string GetName();
	int GetAge();
	bool GetGender();
};

