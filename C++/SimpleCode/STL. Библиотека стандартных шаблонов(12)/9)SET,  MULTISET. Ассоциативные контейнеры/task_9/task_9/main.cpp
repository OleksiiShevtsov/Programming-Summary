#include <iostream>
#include <string>
#include <set>

//set, multiset - бинарное дерево
//set - хранит уникальные значение
//multiset - хранит дублирующие значение
//set, multiset - нельзя изменить значение

using namespace std;

int main() {

	set<int> mySet;
	mySet.insert(10);
	mySet.insert(30);
	mySet.insert(20);
	mySet.insert(40);

	//ищет по значению(возвращяет итератор)
	auto it = mySet.find(10);

	//удаляет по значению
	auto it = mySet.erase(10);

	//выводит в упорядоченном виде
	for (auto &item : mySet) {
		cout << item << endl;
	}

	multiset<int> myMultiset;
	myMultiset.insert(20);
	myMultiset.insert(20);

	int exit; cin >> exit;
	return 0;
}