#pragma once
//�������� ������
#include <iostream>
#include <string>
using namespace std;
class zarplata
{
	//��������
	string fio;
	int premia;
	double oklad;
public:
	zarplata();//����������� ��� ����������
	zarplata(string, int, double);//����������� � �����������
	zarplata(const zarplata&);//����������� �����������
	~zarplata();//����������
	string get_fio();//��������
	void set_fio(string);//�����������
	int get_premia();//��������
	void set_premia(int); //�����������
	double get_oklad();//��������
	void set_oklad(double); //�����������
	void show();//�������� ���������
};
