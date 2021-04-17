#include <iostream>
#include <string>
using namespace std;

//RAIL
class Base {
public:
	int GetVal() {
		return m_val;
	}
	virtual ~Base() {}

private:
	int m_val = 100;
};

class Derived : public Base {
public:
	string GetName() {
		return m_name;
	}
private:
	string m_name = "name";
};

void foo(Base* base) {
	cout << base->GetVal() << endl;
}

void bar(Derived* derived) {
	cout << derived->GetName() << endl;
}

int main() {

	Base* base = new Base;

	foo(base);

	try {
		Derived& derived = dynamic_cast<Derived&>(*base);
		bar(&derived);
	}
	catch (const bad_cast& ex) {
		cerr << "Erorr!" << endl;
	}

	delete base;

	int exit; cin >> exit;
	return 0;
}