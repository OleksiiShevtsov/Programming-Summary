#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		virtual void foo(){
			cout <<"foo A"<< endl;
		}
};

class B : A{
	public:
		//override ���������� ��� �������
		//�� �������������� ��� ��������,
		//override �� �����������
		void foo() override{
			cout <<"foo B"<< endl;
		}
};

int main(){
	
	B b;
	b.foo();
	
	return 0;
}
