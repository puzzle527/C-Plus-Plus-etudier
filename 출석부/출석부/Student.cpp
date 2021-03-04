#include "stdafx.h"
#include "Student.h"

void Student::Print()
{
	cout << "�̸�:" << name << "����:" << age;
	if (gender)
	{
		cout << "����:��" << endl;
	}
	else
	{
		cout << "����:��" << endl;
	}
}

void Student::SetName(string str)
{
	name = str;
}

void Student::SetAge(int num)
{
	age = num;
}

void Student::SetGender(bool num)
{
	gender = num;
}

string Student::GetName()
{
	return name;
}

int Student::GetAge()
{
	return age;
}

bool Student::GetGender()
{
	return gender;
}