#include <iostream>
using namespace std;

struct Base /*final - запрет наследования*/{
	Base() {
	}

	//обязательно использывать
	//виртуальный деструктор
	virtual ~Base() {
	}
	char* mpBuffer;
};

struct A : Base
{
	A() {
		mpBuffer = new char[1024];
	}
	~A()
	{
		delete mpBuffer;
		mpBuffer = nullptr;
	}
};


int main() {

	Base *pb;

	for (int i = 0; i < 100000; i++) {
		pb = new A;
		delete pb;
		cout << i << endl;
	}

	int exit; cin >> exit; return 0;
}