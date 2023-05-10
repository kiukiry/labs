#include "zarplata.h"
#include <iostream>
#include <string>
using namespace std;
//������� ��� �������� ������� ��� ����������
zarplata make_zarplata()
{
	string s, fio;
	int i;
	double d;
	cin.ignore(); // ������� ������ �����
	cout << "Vvedite fio" << endl;
	getline(cin, fio, ' '); // ���������� ������� ����� ���
	getline(cin, s, ' '); // ���������� ������� ����� ���
	fio += " " + s;
	getline(cin, s); // ���������� �������� ����� ��� 
	fio += " " + s;
	cout << "Vvedite premiu" << endl;
	cin >> i; // ���������� ������
	cout << "Vvedite oklad" << endl;
	cin >> d; // ���������� ������

	zarplata t(fio, i, d);
	return t;
}
//������� ��� �������� ������� ��� ���������
void print_zarplata(zarplata&t)
{
	t.show();
}
void main()
{
	//����������� ��� ����������
	zarplata t1;
	t1.show();
	//���������� � �����������
	zarplata t2("Ivanov Petr Mihailovich", 15, 30000);
	t2.show();
	//����������� �����������
	zarplata t3 = t2;
	t3.set_fio("Palkin Maxim Sergeevich");
	t3.set_premia(5);
	t3.set_oklad(50000);
	//����������� �����������
	print_zarplata(t3);
	//����������� �����������
	t1 = make_zarplata();
	t1.show();
}
