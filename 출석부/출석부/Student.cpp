#include "stdafx.h"
#include "Student.h"

void Student::Print()
{
	cout << "이름:" << name << "나이:" << age;
	if (gender)
	{
		cout << "성별:남" << endl;
	}
	else
	{
		cout << "성별:여" << endl;
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