#include <iostream>
#include <string>//��� ����� (�����)
#include <cstring>//c ������

using namespace std;
void foo(char *str);
int main(){
	
	char str[] = "Hello";
	
	char* string = str; //���������� �� ������ -  char* string[]
	
	cout << string << endl;
	cout << endl;
	
	//����� �����
	char* strArr[] = {"Alex1", "Alex2", "Alex3"};
	for(int i = 0; i < 3; i++){
		cout << strArr[i] << endl;
	}
	
	//�������� � �������
	foo(string);
	foo(strArr[0]);
	return 0;
}
void foo(char *str){
	cout << strlen(str) << endl;
}
