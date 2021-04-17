#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//клчевое слово auto определяет
	//само какой тип данных у переменных
	//но нужно сразу ее инициализировать
	
	//не работает в Dev C++
	
	//auto i = 10;
	//auto d = 10.50;
	//auto s = "string";
	
	vector<int> myVector;
	myVector.push_back(10);
	
	/*равносильны*/vector<int>::iterator iter1 = myVector.begin();
	/*равносильны*/auto iter2 = myVector.begin();
	
	return 0;
}
