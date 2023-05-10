#pragma once
//описание класса
#include <iostream>
#include <string>
using namespace std;
class zarplata
{
	//атрибуты
	string fio;
	int premia;
	double oklad;
public:
	zarplata();//конструктор без параметров
	zarplata(string, int, double);//конструктор с параметрами
	zarplata(const zarplata&);//конструктор копирования
	~zarplata();//деструктор
	string get_fio();//селектор
	void set_fio(string);//модификатор
	int get_premia();//селектор
	void set_premia(int); //модификатор
	double get_oklad();//селектор
	void set_oklad(double); //модификатор
	void show();//просмотр атрибутов
};
