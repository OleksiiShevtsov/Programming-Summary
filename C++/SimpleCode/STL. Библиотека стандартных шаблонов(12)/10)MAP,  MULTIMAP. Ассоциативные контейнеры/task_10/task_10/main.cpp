#include <iostream>
#include <string>
//библеотека map
#include <map>

//map, multimap - бинарное дерево
//map хранит только уникальные ключи
//multimap может хранить одинаковые значение

using namespace std;
int main() {

	//реализация пары
	pair<int, string> p(22, "Alex");
	cout << p.first << endl;
	cout << p.second << endl;

	//реализация map
	map<int, string> myMap;

	//добаление в контейнер (копирует)
	myMap.insert(p);
	myMap.insert(make_pair(32, "LeBron"));
	myMap.insert(pair<int, string>(55, "Jordan"));
	//добаление в контейнер (новый метод(добаляет сразу))
	myMap.emplace(64, "Chan");
	
	//проверка на наличие по ключу(возращяет итератор на єтот масив)
	//если не нашел то возращает end();
	auto it = myMap.find(34);

	cout << myMap[34] << endl;

	//реализация multimap
	multimap<int, string> myMultimap;
	myMultimap.emplace(22, "F");
	myMultimap.emplace(22, "G");

	return 0;
}