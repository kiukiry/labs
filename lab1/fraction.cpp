#include "fraction.h"
#include <iostream>
using namespace std;
//���������� ������ ��� ������������� ����� ���������
void fraction::Init(double F, int S)
{
	first = F; second = S;
}
//���������� ������ ��� ������ �������� ����� ���������
void fraction::Read()
{
	cout << "\na0?"; cin >> first;
	cout << "\nr?"; cin >> second;
	
}

//���������� ������ ��� ������ �������� ����� ���������

//����� ��� ���������� � �������

double fraction::element(int j)
{
	return first*pow(second, j);
}
