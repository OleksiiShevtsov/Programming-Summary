#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//���������� �����
//C-cast
//static_cast
//reinterpret_cast


int main(){

	const int size = 10;
	char arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	
	int* i = (int*)arr;//������ - ��������������
	short* s = (short*)arr;
	
	/*for(int j = 0; j < size; j++){
		cout <<"i: "<< *(i + j) << endl;
	}
	for(int j = 0; j < size; j++){
		cout <<"s: "<< *(s + j) << endl;
	}*/
	
	cout << endl;//������������� 2//////
	cout <<"**������������� 2**"<< endl;
	cout << endl;///////////////////////
	
	int arr2[] = {0x11111111, 0x22222222, 0x33333333};
	
	char* c2 = (char*)arr2;
	
	char a = *(c2 + 0);//0x11
	char b = *(c2 + 1);//0x11
	char c = *(c2 + 5);//0x22
	char d = *(c2 + 9);//0x33
	
	return 0;
}
