#include <iostream>
#include <windows.h>

using namespace std;

/*	Event: */

HANDLE event = INVALID_HANDLE_VALUE;

DWORD WINAPI ThreadStart(LPVOID param) {

	WaitForSingleObject(event, INFINITE);//ожидание события
	cout << "EXIT Thread" << endl;
	return 0;
}

int main() {

	event = CreateEventA(0, FALSE, FALSE, "MyEvent");//событие
	HANDLE thread = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	
	Sleep(10000);

	cout << "EXIT main" << endl;

	return 0;
}
