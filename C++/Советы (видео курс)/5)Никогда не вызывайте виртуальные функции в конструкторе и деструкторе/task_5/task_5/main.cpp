#include <iostream>
using namespace std;

struct Base{
	Base() {
		//�� �������(��� ������ ������!)
		//init();
	}
	~Base() {
		//��������� ��������(��� ������ ������!)
		//init();
	}
	virtual void init() = 0;
};
struct Child : Base {
	void init() override {

	}
};

int main() {

	Base *b = new Child;

	int exit; cin >> exit; return 0;
}