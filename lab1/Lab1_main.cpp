#include "fraction.h"
#include <iostream>
using namespace std;
fraction make_fraction(double F, int S)
{
	fraction t;//������� ��������� ����������
	t.Init(F, S);//���������������� ���� ���������� t � ������� ���������� �������
	return t;//������� �������� ���������� t
}
void main()
{
	fraction r;

	r.Read();//���� ����� ���������� �
	//����� �������� �������, ������������ � ������� ������� Power()
	cout << r.element(10);
	

}
