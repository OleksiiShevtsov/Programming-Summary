#include <iostream>
using namespace std;

//RAIL
class A;
class B{
	public:
		B(A* a){
			this->pa = a;
		}
		~B(){
			delete pa;
		}
		A* getA(){
			return pa;
		}
	private:
		A* pa;
};

class A {
	public:
		A(const char* funcName) {
			this->m_funcName = funcName;
		}
		~A() {
			cout << "~" << m_funcName << endl;
		}
	private:
		const char* m_funcName;
};

void bar(){
	throw "Err";
}

void foo(){
	B b(new A("a"));
	bar();
	//delete a;
}

int main() {

	try{
		foo();
	}
	catch(const char* str){
		cout << str << endl;
	}

	
	return 0;
}
