#include "zarplata.h"
#include <iostream>
#include <string>
using namespace std;
//����������� ��� ����������
zarplata::zarplata()
{
	fio = "";
	premia = 0;
	oklad = 0;
	cout << "Constructor bez parametrov dlia objecta" << this << endl;
}
//����������� � �����������
zarplata::zarplata(string N, int K, double S)
{
	fio = N;
	premia = K;
	oklad = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//����������� �����������
zarplata::zarplata(const zarplata& t)
{
	fio = t.fio;
	premia = t.premia;
	oklad = t.oklad;
	cout << "Constructor copirovania dlia objecta" << this << endl;
}
//����������
zarplata::~zarplata()
{
	cout << "Destructor dlia objecta" << this << endl;
}
//���������
string zarplata::get_fio()
{
	return fio;
}
int zarplata::get_premia()
{
	return premia;
}
double zarplata::get_oklad()
{
	return oklad;
}
//������������
void zarplata::set_fio(string N)
{
	fio = N;
}
void zarplata::set_premia(int K)
{
	premia = K;
}
void zarplata::set_oklad(double S)
{
	oklad = S;
}
//����� ��� ��������� ���������
void zarplata::show()
{
	cout << "fio :" << fio << endl;
	cout << "premia :" << premia << endl;
	cout << "oklad :" << oklad << endl;
}
