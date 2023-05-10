#include "fraction.h"
#include <iostream>
using namespace std;
//реализация метода для инициализации полей структуры
void fraction::Init(double F, int S)
{
	first = F; second = S;
}
//реализация метода для чтения значений полей структуры
void fraction::Read()
{
	cout << "\na0?"; cin >> first;
	cout << "\nr?"; cin >> second;
	
}

//реализация метода для вывода значений полей структуры

//метод для возведения в степень

double fraction::element(int j)
{
	return first*pow(second, j);
}
