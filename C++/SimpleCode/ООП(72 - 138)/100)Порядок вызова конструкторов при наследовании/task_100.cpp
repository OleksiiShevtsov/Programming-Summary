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

	//сначала идет создание класса C, класс C ждет создание класса B,
	//класс B ждет создание класса A, когда класс A сформировался 
	//идет вызов кострутора A далее конструктор B и конструктор C
	C c;
	
	return 0;
}
