#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Foo(int value){
	if(value < 0){
		//��������� ����������
		//� ������� throw
		throw "error!!!";
		
		//throw exception("error") - ������������� �����;
	}
	
	cout <<"value: "<< value << endl;
}

int main(){
	
	int value;
	cin >> value;
	
	try{
		//��� ����� ����������
		Foo(value);	
	}
	//catch ������ ������ ���������� 
	//���� ���� ������  ������� 
	//������� � throw
	catch(const char* error){
		cout << error << endl;
	}
	
	return 0;
}
