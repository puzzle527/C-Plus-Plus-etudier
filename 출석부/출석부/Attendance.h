#pragma once
class Attendance
{
	//�߰��߰� �߰������� ���� ���ͷ� ����
	vector<Student> attendance;
	int	Input;
public:
	//�л� �߰�
	void AddStudent();
	//�л� ����
	void DeleteStudent();
	//�л���� ���
	void PrintAttendance();
	//�⼮�� ȣ���Լ�
	void Play();
};

