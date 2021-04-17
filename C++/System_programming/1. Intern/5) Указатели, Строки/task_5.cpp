#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	//предел 0х100 - 0х500 (к примеру)
	//в стеке
	int x = 10; // -> 0х500
	int y = 20; // -> 0х4fc
	int z = 20; // -> 0х4f8
	
	cout <<"&x: "<< &x << endl;
	cout <<"&y: "<< &y << endl;
	cout <<"&z: "<< &z << endl;
	cout << endl;
	
	int* px = &x;
	int** ppx = &px;
	
	cout <<"px: "<< px << endl;
	cout <<"*px: "<< *px << endl;
	cout <<"&px: "<< &px << endl;//адрксс на указатель
	cout <<"ppx: "<< ppx << endl;//указатель на указатель
	cout <<"*ppx: "<< *ppx << endl;
	cout <<"**ppx: "<< **ppx << endl;
	
	cout << endl;//строки//////
	cout <<"**string**"<< endl;
	cout << endl;//////////////
	
	const char* str = "Hello Alex!";

	cout << str << endl;
	cout << *(++str) << endl;
	
	return 0;
}
