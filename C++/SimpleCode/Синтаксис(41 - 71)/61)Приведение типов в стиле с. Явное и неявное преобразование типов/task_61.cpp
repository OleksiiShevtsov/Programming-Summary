#include <iostream>
#include <string>//для строк (класс)
#include <cstring>//c строки

using namespace std;

int main(){
	//преобразование типов в С
	
	double d = 33.33;
	cout <<"d = "<< d << endl;
	
	//явное преобразование
	cout << d <<" -> int: "<< (int)d << endl;//преобразование double в int
	cout << d <<" -> bool: "<< (bool)d << endl;//преобразование double в bool
	cout << d <<" -> char: "<< char(d) << endl;//преобразование double в char
	
	//не явное преобразование
	int i = d;
	cout <<"\ni = "<< i << endl;
	
	//сужающейся 33.33 -> 33
	//увелич.
	int x = 10; double y = 2.2;
	cout << x/y << endl;//результат будет double
	
	cout << (int)(x/y) << endl;//явное в int
	
	return 0;
}
