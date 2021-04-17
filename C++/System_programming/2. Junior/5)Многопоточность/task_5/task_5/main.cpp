#include <iostream>
#include <windows.h>

using namespace std;

int i;

DWORD WINAPI ThreadStart(void* param) {
	for (int i; i < 100; i++) {
		cout << i << endl;
	}
}

int main() {

	HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	Sleep(10000);

	return 0;
}