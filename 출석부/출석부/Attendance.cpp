#include "stdafx.h"
#include "Attendance.h"

void Attendance::AddStudent()
{
	Student temp;
	string tempstr;
	int tempnum;
	bool tempbool;

	cout << "이름을 입력해 주세요:";
	cin >> tempstr;
	//셋함수 호출로 멤버값 바꾸기
	temp.SetName(tempstr);

	cout << "나이를 입력해 주세요:";
	cin >> tempnum;
	//셋함수 호출로 멤버값 바꾸기
	temp.SetAge(tempnum);

	cout << "성별을 입력해 주세요:";
	cin >> tempbool;
	//셋함수 호출로 멤버값 바꾸기
	temp.SetGender(tempbool);

	//끝에 추가
	//객체타입으로 넣을때 값을 복사하여 넣는다.
	attendance.push_back(temp);
}

void Attendance::DeleteStudent()
{
	cout << "1.번호로 지우기 2.이름, 나이, 성별로 지우기" << endl;
	cin >> Input;
	if (Input == 1)
	{
		//1. 출석부 번호를 통해 제거
		cout << "삭제하고싶은 학생 번호를 입력해주세요" << endl;
		cin >> Input;
		if (Input < 0 || Input >= attendance.size())
		{
			cout << "잘못된 번호입니다" << endl;
			Sleep(1000);//1초간 정지
			return;
		}
		//존재하는 인덱스
		attendance.erase(attendance.begin() + Input);
	}
	if (Input == 2)
	{
		cout << "검색구분 : 1.이름 2.나이 3.성별" << endl;
		cin >> Input;

		string	tempstr;
		int		tempnum;
		bool	tempbool;

		if (Input == 1)
		{
			cout << "삭제할 이름을 입력하세요." << endl;
			cin >> tempstr;
			cout << "1.전부지우기 2.선택지우기" << endl;
			cin >> Input;
			if (Input == 1)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempstr == attendance[i].GetName())
					{
						attendance.erase(attendance.begin() + i);
						i--;
					}
				}
			}
			else if (Input == 2)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempstr == attendance[i].GetName())
					{
						attendance[i].Print();
						cout << " 이 학생을 지우시겠습니까? (1.yes 2.no)" << endl;
						cin >> Input;
						if (Input == 1)
						{
							attendance.erase(attendance.begin() + i);
							break;
						}
						else if (Input == 2)
							continue;
					}
				}
			}
		}
		else if (Input == 2)
		{
			cout << "삭제할 나이를 입력하세요." << endl;
			cin >> tempnum;
			cout << "1.전부지우기 2.선택지우기" << endl;
			cin >> Input;
			if (Input == 1)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempnum == attendance[i].GetAge())
					{
						attendance.erase(attendance.begin() + i);
						i--;
					}
				}
			}
			else if (Input == 2)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempnum == attendance[i].GetAge())
					{
						attendance[i].Print();
						cout << " 이 학생을 지우시겠습니까? (1.yes 2.no)" << endl;
						cin >> Input;
						if (Input == 1)
						{
							attendance.erase(attendance.begin() + i);
							break;
						}
						else if (Input == 2)
							continue;
					}
				}
			}
		}
		else if (Input == 3)
		{
			cout << "삭제할  성별을 입력하세요." << endl;
			cin >> tempbool;
			cout << "1.전부지우기 2.선택지우기" << endl;
			cin >> Input;
			if (Input == 1)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempbool == attendance[i].GetGender())
					{
						attendance.erase(attendance.begin() + i);
						i--;
					}
				}
			}
			else if (Input == 2)
			{
				for (int i = 0; i < attendance.size(); i++)
				{
					if (tempbool == attendance[i].GetGender())
					{
						attendance[i].Print();
						cout << " 이 학생을 지우시겠습니까? (1.yes 2.no)" << endl;
						cin >> Input;
						if (Input == 1)
						{
							attendance.erase(attendance.begin() + i);
							break;
						}
						else if (Input == 2)
							continue;
					}
				}
			}
		}
	}

	//과제
	//2. 이름이나 나이 검색을 통해 제거
	//이름검색인지? 나이검색인지?
	//검색할 값을 입력
	//반복문을통해 배열안에 같은값이 있는지 확인

	//배열에안에 같은값이 있는 객체가 여럿을때(선택)
	//1. 전부지우기,2.선택하여 지우기

	//그다음 같은값이있는 배열의 객체를 삭제

}

void Attendance::PrintAttendance()
{
	for (int i = 0; i < attendance.size(); i++)
	{
		cout << i << ".";
		//attendance[i].Print();
		cout << "이름:" << attendance[i].GetName()
			<< "나이:" << attendance[i].GetAge();
		if (attendance[i].GetGender())
		{
			cout << "성별:남" << endl;
		}
		else
		{
			cout << "성별:여" << endl;
		}
	}
}

void Attendance::Play()
{
	while (1)
	{
		//화면 전부 지우기
		system("cls");
		//출석부 명단 출력
		PrintAttendance();
		//입력값으로 선택
		cout << "1.학생 추가 2. 학생 삭제" << endl;
		cin >> Input;
		if (Input == 1)
		{
			AddStudent();
		}
		else if (Input == 2)
		{
			DeleteStudent();
		}
	}
}
