#include "zarplata.h"
#include <iostream>
#include <string>
using namespace std;
//функция для возврата объекта как результата
zarplata make_zarplata()
{
	string s, fio;
	int i;
	double d;
	cin.ignore(); // очистка буфера ввода
	cout << "Vvedite fio" << endl;
	getline(cin, fio, ' '); // считывание первого слова ФИО
	getline(cin, s, ' '); // считывание второго слова ФИО
	fio += " " + s;
	getline(cin, s); // считывание третьего слова ФИО 
	fio += " " + s;
	cout << "Vvedite premiu" << endl;
	cin >> i; // считывание премии
	cout << "Vvedite oklad" << endl;
	cin >> d; // считывание оклада

	zarplata t(fio, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_zarplata(zarplata&t)
{
	t.show();
}
void main()
{
	//конструктор без параметров
	zarplata t1;
	t1.show();
	//коструктор с параметрами
	zarplata t2("Ivanov Petr Mihailovich", 15, 30000);
	t2.show();
	//конструктор копирования
	zarplata t3 = t2;
	t3.set_fio("Palkin Maxim Sergeevich");
	t3.set_premia(5);
	t3.set_oklad(50000);
	//конструктор копирования
	print_zarplata(t3);
	//конструктор копирования
	t1 = make_zarplata();
	t1.show();
}
