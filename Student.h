#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(void);
public:
	~Student(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	Student(string, int, string, int);
	Student(const Student&);
	std::string Get_subject() { return subject; }
	void Set_subject(int);
	Student& operator=(const Student&);
	friend istream& operator>>(istream& in, Student& l);
	friend ostream& operator<<(ostream& out, const Student& l);
protected:
	std:: string subject;
	int grade;
};

