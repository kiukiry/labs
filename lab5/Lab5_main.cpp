#include "Object.h"
#include "Person.h"
#include "Student.h"
#include "Vector.h"
#include <string>
#include <iostream>
using namespace std;
void main()
{
	Vector v(5);//������ �� 5 ���������
	Person a;//������ ������  Person
	cin >> a;
	Student b;// ������ ������ Student
	cin >> b;
	Object* p = &a;//������ ��������� �� ������ ������ 




	v.Add(p);//��������� ������ � ������
	p = &b;//������ ��������� �� ������ ������ Student
	v.Add(p); //��������� ������ � ������
	cout << v;//����� �������
	
}

