#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"(con A)"<< endl;
		}
		//чисто виртуаьный деструктор
		virtual ~A() = 0;
};

//нужно реализовать виртуальный деструктор
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
	
	//выдиление памяти типа А из поля B
	A *b = new B;
	//удаление
	delete b;
	
	cout << endl;
	return 0;
}
