/*#include <iostream>
#include <map>
#include <string>
using namespace std;

class Base {
public:
	virtual void f() = 0;
};
class Derived : public Base {
	void f()override {//��������

	}
};

int main() {

	//������
	auto uniquePtr1 = unique_ptr<int>(new int);
	auto sharedPtr1 = shared_ptr<int>(new int);

	//������, ������������ ���
	auto uniquePtr2 = make_unique<int>();
	auto sharedPtr2 = make_shared<int>();

	int exit; cin >> exit;
	return 0;
}*/