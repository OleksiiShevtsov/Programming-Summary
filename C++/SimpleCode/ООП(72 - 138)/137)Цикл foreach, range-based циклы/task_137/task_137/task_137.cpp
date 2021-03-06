#include "pch.h"
#include <iostream>
#include <list>

using namespace std;

int main() {

	int array[] = { 10, 20, 30, 40, 50 };

	//перебор по ключу (вариант как в С#)
	//for each(int var in arr) 
	//{
	//	cout << var << endl;
	//}

	//перебор по ключу (вариант С++)
	//работает только с колекциями
	for(const auto element : array)
	{
		//значение копируеться из array в element
		//element = 10;
		cout << element << endl;
	}

	cout << "\narray[0] = " << array[0] << endl;

	list<int> myList;
	myList.push_back(10);
	myList.push_back(20);

	for (const auto element : myList)
	{
		cout << "element list - "<< element << endl;
	}

	int exit; cin >> exit;
	return 0;
}