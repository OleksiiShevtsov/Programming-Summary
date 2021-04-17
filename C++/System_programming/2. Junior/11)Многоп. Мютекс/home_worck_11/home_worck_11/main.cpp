#include <iostream>
#include <thread>
#include <future>
#include <windows.h>

using namespace std;

bool DoWork(int value) {
	
	bool flag = true;
	for (int i = 2; i <= value / 2; i++) {
		if (value % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {

	for (int i = 0; i < 10; i++) {
		auto th = async(DoWork, i);
		Sleep(100);
		cout << i <<". "<< th.get() << endl;
	}

	int exit; cin >> exit; return 0;
}