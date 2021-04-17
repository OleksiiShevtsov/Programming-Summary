#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	list<int>::iterator it = myList.begin();
	
	cout << *it << endl;
	
	cout << *(++it) << endl;//лучши для цыкла
	cout << *(it++) << endl;//назрузка на оп
	
	cout << *it << endl;
	
	return 0;
}
