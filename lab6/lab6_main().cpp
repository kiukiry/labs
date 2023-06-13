#include <iostream>
#include "list.h"

int main()
{
	setlocale(0, "");
	List list(5);
	list.show();
	std::cout << "Удаленный элемент: " << list.pop() << std::endl;
	list.push("Камень\n");
	std::cout << "Последний  элемент: " << list.top() << std::endl;
	list.show();

	List list2;
	list2 = list;
	list2.show();
	return 0;
}