#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int sec;

DWORD WINAPI ThreadStart(void* param) {
	for (int i = 0; i < sec; i++) {
		cout << time(NULL) << endl;
		Sleep(5000);
	}
	return 0;
}

int main() {
	
	
	cout <<"Enter second: ";
	cin >> sec;

	HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	Sleep(sec*1000);

	return 0;
}
