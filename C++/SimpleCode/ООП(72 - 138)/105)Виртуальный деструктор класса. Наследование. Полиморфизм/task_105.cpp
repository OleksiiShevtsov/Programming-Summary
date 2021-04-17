#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"(con A) dynamic memory allocated"<< endl;
		}
		//����� ���������� ����������� 
		//����� ���� ��������� ������������ ������
		virtual ~A(){
			cout <<"(de A) dynamic memory freed"<< endl;
		}
};

class B : public A{
	public:
		B(){
			cout <<"(con B) dynamic memory allocated"<< endl;
		}
		~B() override{
			cout <<"(de B) dynamic memory freed"<< endl;
		}
};

int main(){
	
	//��������� ������ ���� � �� ���� B
	A *b = new B;
	//��������
	delete b;
	
	cout <<"text"<< endl;
	return 0;
}
