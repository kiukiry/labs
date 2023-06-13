#include "list.h"

void List::push_op(Point* obj)
{
	if (obj == nullptr) return;
	push_op(obj->next);
	this->push(obj->data);
}

List& List::operator=(const List& list)
{
	while (this->pop() != "");
	Point temp = *list.head;
	push_op(&temp);

	return *this;
}

List::List(const List& list)
{
	Point temp = *list.head;
	push_op(&temp);
}

List::List(int n) : List()
{

	if (n > 0)
	{
		string str;
		cout << "Введите " << n << " строк:\n";
		for (int i = 1; i <= n; i++)
		{
			cout << i << ". ";
			getline(cin, str);
			push(str);
		}
	}
}

List::~List()
{
	while (pop() != "");
}

void List::push(string str)
{
	size++;
	Point* obj = new Point;
	obj->data = str;
	obj->next = head;
	head = obj;
}

string List::pop()
{
	string result = "";
	if (!list_is_empty())
	{
		result = head->data;
		Point* temp = head;
		head = head->next;
		delete temp;
		size--;
	}
	return result;
}

void List::output(Point* obj)
{
	if (obj == nullptr) return;
	output(obj->next);
	cout << obj->data << endl;
}

void List::show()
{
	if (list_is_empty()) cout << "Список пуст" << endl;
	else output(head);
}