#include <iostream>
using namespace std;

void f(int) {
	cout << "f(int)" << endl;
}
void f(bool) {
	cout << "f(bool)" << endl;
}
void f(void*) {
	cout << "f(void)" << endl;
}

int main() {

	//свой тип указатель!(рекомендация!)
	int *p1 = nullptr;

	//значение целочисленного типа
	int *p2 = 0;
	int *p3 = NULL;

	f(nullptr);
	f(0);
	f(NULL);

	int exit; cin >> exit; return 0;
}