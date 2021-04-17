#include <iostream>
#include <map>
#include <string>
using namespace std;

void f1() {
	for (int i = 0; i < 10000; ++i) {
		if (i == 50) {
			cout << i << endl;
		}
	}
}

void f2() {
	for (int i = 0; i < 1000000; ++i) {
		if (i == 50) {
			cout << i << endl;
		}
	}
}

int main() {

	f1();
	f2();

	return 0;
}