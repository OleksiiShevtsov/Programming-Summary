#include "pch.h"
#include <iostream>
#include <forward_list>

//forward_list - односвязный список

using namespace std;

void outputList(forward_list<int> list) {
	for (auto fl : list)
	{
		cout << fl << endl;
	}
}

int main()
{
	forward_list<int> fList = {20, 30, 40};
	//push_back нету добовление в конец списка
	fList.push_front(10);

	outputList(fList);

	forward_list<int>::iterator it = fList.begin();

	it++;
	//it-- нельзя перечислять назад 
	cout << "it = " << *it << endl;
	
	//удаление по итератору
	//удалиться следующий єлемент (во некоторых функциях)
	fList.erase_after(it);

	outputList(fList);

	return 0;
}