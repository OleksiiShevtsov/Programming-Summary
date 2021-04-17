#include <iostream>
#include <windows.h>

using namespace std;

int count = 0;

DWORD WINAPI ThreadStart(void* param) {
	for (int i = 0; i < 100; i++) {
		cout <<"Thread: "<< count++ << endl;
	}
	return 0;
}

int main() {
	
	int x = 0x12345;//1
	
	for(; x < 0; --x){
		cout << x << endl;
	}
	
	HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	HANDLE thread2 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	Sleep(1000);

	return 0;
}
