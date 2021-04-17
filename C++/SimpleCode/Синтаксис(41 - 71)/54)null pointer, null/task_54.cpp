#include <iostream>
using namespace std;

int main(){
	
	int* px = new int;
	cout << px << endl;
	cout << *px << endl;
	*px = 10;
	cout << *px << endl;
	
	delete px;
	
	//чистка указателя 
	
	//px = NULL;//нулевой указатель (px = 0; - тоже самое)
	
	if (px != NULL){//проверка
		cout << *px << endl;
	}
	
	//nullptr
	//px = nullptr; (не работает в Dev-C++)!!!(лучше использовать nullptr)
	
	//если перед delete зачистить указатель то произойдет утечка памяти!!!
	
	return 0;	
}
