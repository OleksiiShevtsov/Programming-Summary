#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"constructor A"<< endl;
		}
};

class B : public A{
	public:
		B(){
			cout <<"constructor B"<< endl;	
		}
};

class C : public B{
	public:
		C(){
			cout <<"constructor C"<< endl;	
		}
};

int main(){

	//������� ���� �������� ������ C, ����� C ���� �������� ������ B,
	//����� B ���� �������� ������ A, ����� ����� A ������������� 
	//���� ����� ���������� A ����� ����������� B � ����������� C
	C c;
	
	return 0;
}
