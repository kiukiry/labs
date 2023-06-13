#pragma once
#include <iostream>
#include <string>
using namespace std;


class List
{
	struct Point
	{
		string data = "";
		Point* next = nullptr;
	};

	Point* head;								
	size_t size;								
	bool list_is_empty()
	{
		return size == 0;
	}						
	void output(Point* obj);					
	void push_op(Point* obj);					

public:
	List() : head(nullptr), size(0) {}
	List(int n);
	List(const List& list);
	List& operator=(const List& list);		
	~List();
	string top() const { return head->data; }	
	void show();								
	void push(string str);						
	string pop();								

};