#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	//������ 0�100 - 0�500 (� �������)
	//� �����
	int x = 10; // -> 0�500
	int y = 20; // -> 0�4fc
	int z = 20; // -> 0�4f8
	
	cout <<"&x: "<< &x << endl;
	cout <<"&y: "<< &y << endl;
	cout <<"&z: "<< &z << endl;
	cout << endl;
	
	int* px = &x;
	int** ppx = &px;
	
	cout <<"px: "<< px << endl;
	cout <<"*px: "<< *px << endl;
	cout <<"&px: "<< &px << endl;//������ �� ���������
	cout <<"ppx: "<< ppx << endl;//��������� �� ���������
	cout <<"*ppx: "<< *ppx << endl;
	cout <<"**ppx: "<< **ppx << endl;
	
	cout << endl;//������//////
	cout <<"**string**"<< endl;
	cout << endl;//////////////
	
	const char* str = "Hello Alex!";

	cout << str << endl;
	cout << *(++str) << endl;
	
	return 0;
}
