#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"(con A)"<< endl;
		}
		//����� ���������� ����������
		virtual ~A() = 0;
};

//����� ����������� ����������� ����������
A::~A(){cout <<"(de A)"<< endl;}

class B : public A{
	public:
		B(){
			cout <<"(con B)"<< endl;
		}
		~B() override{
			cout <<"(de B)"<< endl;
		}
};

int main(){
	
	//��������� ������ ���� � �� ���� B
	A *b = new B;
	//��������
	delete b;
	
	cout << endl;
	return 0;
}
