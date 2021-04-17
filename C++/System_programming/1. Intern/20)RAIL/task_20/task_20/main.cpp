#include <iostream>
using namespace std;

//раскрутка стека
class A {
	public:
		A() {
			cout << "A" << endl;
		}
		~A() {
			cout << "~A" << endl;
		}
};

class B {
	public:
		B() {
			cout << "B" << endl;
		}
		~B() {
			cout << "~B" << endl;
		}
};

void foo1() {
	A a;
	throw runtime_error("Err");
}
void foo2() {
	B b;
	foo1();
}

int main() {

	try {
		foo2();
	}
	catch(const exception& ex){
		cout << ex.what();
	}

	int exit; cin >> exit;
	return 0;
}