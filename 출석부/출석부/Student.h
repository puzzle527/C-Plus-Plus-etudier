#pragma once
class Student
{
	string name;//이름
	int age;	//나이
	bool gender; //성별
public:
	//캡슐화
	//밖에서 멤버들 출력할수있는 함수
	void Print();
	//셋 함수(멤버값을 주고싶을때)
	void SetName(string str);
	void SetAge(int num);
	void SetGender(bool num);
	//겟 함수(멤버값을 받고싶을때)
	string GetName();
	int GetAge();
	bool GetGender();
};

