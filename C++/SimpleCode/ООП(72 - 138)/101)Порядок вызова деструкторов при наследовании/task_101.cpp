#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			cout <<"constructor A"<< endl;
		}
		~A(){
			cout <<"destructor A"<< endl;	
		}
};

class B : public A{
	public:
		B(){
			cout <<"constructor B"<< endl;	
		}
		~B(){
			cout <<"destructor B"<< endl;	
		}
};

class C : public B{
	public:
		C(){
			cout <<"constructor C"<< endl;	
		}
		~C(){
			cout <<"destructor C"<< endl;	
		}
};

int main(){

	//ѕервый деструктор класса —, 
	//потом деструктор класса B
	//и деструктор класса A
	C c;
	cout << endl;
	
	return 0;
}
