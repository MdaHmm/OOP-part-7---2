#include <iostream>
#include "Linkedlist.h"

int main() {

	setlocale(LC_ALL, "Russian");

	LinkedList list;
	list.Push_back(0);
	list.Push_back(1);
	list.Push_back(2);
	list.Push_back(3);
	list.Push_back(4);
	list.Push_back(5);
	list.Push_back(6);
	list.Push_back(7);
	list.Push_back(8);
	list.Push_back(9);
	list.PushByIndex(999, 3);
	list.ShowList();
	//std::cout << list.SearchByIndex(3)->GetData();


	return 0;
}