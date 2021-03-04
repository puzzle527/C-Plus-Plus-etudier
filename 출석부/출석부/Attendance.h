#pragma once
class Attendance
{
	//중간중간 추가삽입이 쉬운 벡터로 선언
	vector<Student> attendance;
	int	Input;
public:
	//학생 추가
	void AddStudent();
	//학생 제거
	void DeleteStudent();
	//학생목록 출력
	void PrintAttendance();
	//출석부 호출함수
	void Play();
};

