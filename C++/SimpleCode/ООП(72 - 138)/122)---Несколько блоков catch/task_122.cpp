#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Foo(int value){
	if(value < 0){
		//��������� ����������
		//� ������� throw
				
		throw exception();
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
	catch(const exception ex){
		cout << ex.what() << endl;
	}
	
	return 0;
}
