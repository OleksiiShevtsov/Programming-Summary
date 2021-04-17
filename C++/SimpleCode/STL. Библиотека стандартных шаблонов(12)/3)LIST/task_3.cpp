#include <iostream>
#include <vector>
#include <list>

using namespace std;

//List - двусвязный список

template <typename T>
void printListInt(const list<T> &myList){
	cout <<"amount of elements: "<< myList.size() << endl;
	
	for(list<int>::const_iterator iter = myList.begin(); iter != myList.end(); iter++){
		cout <<"myList = "<< *iter << endl;
	} 
	cout << endl;
}

int main(){
	
	list<int> myList(1);
	
	//добавление в конец листа
	myList.push_back(10);
	myList.push_back(10);
	myList.push_back(10);
	myList.push_back(5);
	//добавление в начало листа 
	myList.push_front(20);
	//pop_... - удалить
	
	printListInt(myList);
	
	//сортировать по возрастанию
	myList.sort();
	
	//удалить последовательные дублекаты
	myList.unique();
	
	//порядок наоборот
	myList.reverse();
	
	list<int>::iterator it = myList.begin();
	
	//итератор переместиться на n место в листе
	//(лист не поддерживает индексирование)
	advance(it, 2);
	
	//добавление по итератору
	myList.insert(it, 100);
	
	printListInt(myList);
	
	//удаляет по итератору
	myList.erase(it);
		
	//удаляет по значению
	myList.remove(5);
	
	//очистить лист
	myList.clear();
	
	//заполняет программу числамии удаляет другие(количество, значени)
	//(копирование одного листа в другой(итератор начало, итератор конец))
	myList.assign(3, 123);
	
	printListInt(myList);
	
	return 0;
}
