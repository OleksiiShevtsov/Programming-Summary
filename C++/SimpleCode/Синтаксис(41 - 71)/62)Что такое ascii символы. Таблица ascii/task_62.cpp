#include <iostream>
#include <string>//��� ����� (�����)
#include <cstring>//c ������

using namespace std;

	//������� �������� ASCII

int main(){
	//setlocale(LC_ALL, "ru");
	cout << sizeof(char) << endl;
	
	for(int i = 0; i <= 255; i++){
		cout <<"code = "<< i <<"   "<< char(i)<<endl;
	}
	return 0;
}
