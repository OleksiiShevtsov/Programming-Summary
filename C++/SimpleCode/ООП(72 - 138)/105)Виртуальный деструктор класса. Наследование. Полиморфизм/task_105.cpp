#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"(con A) dynamic memory allocated"<< endl;
		}
		//нужно определять вмртуальным 
		//когда идет выдиление динамической памяти
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
	
	//выдиление памяти типа А из поля B
	A *b = new B;
	//удаление
	delete b;
	
	cout <<"text"<< endl;
	return 0;
}
