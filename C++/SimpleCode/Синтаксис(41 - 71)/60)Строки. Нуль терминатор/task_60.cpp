#include <iostream>
#include <string>//��� ����� (�����)
#include <cstring>//c ������

using namespace std;

int main(){
	char string[255] = "Hello World!";//���������� ��� ��������� '\0'
	cout << string << endl;
	
	char string2[] = {'H', 'e', 'l', 'l', 'o', '\0'};//����� �������� ������ '\0'
	cout << string2 << endl;
	
	cout << strlen(string2) << endl;
	
	return 0;
}
