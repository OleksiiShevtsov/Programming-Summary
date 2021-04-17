#include <iostream>
#include <windows.h>

using namespace std;

/*	критическая секция: */

LONG count = 0;
CRITICAL_SECTION criticalSection;

DWORD WINAPI ThreadStart(LPVOID param) {

	EnterCriticalSection(&criticalSection);
	++count;
	LeaveCriticalSection(&criticalSection);
	
	return 0;
}

int main() {
	
	InitializeCriticalSection(&criticalSection);
	
	for(int i = 0; i < 100; i++){
		HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	}
	
	Sleep(5000);
	
	DeleteCriticalSection(&criticalSection);
	
	cout << count << endl;

	return 0;
}
