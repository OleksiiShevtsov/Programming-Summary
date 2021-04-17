#include <iostream>
#include <windows.h>

using namespace std;

/*	критическая секция: */



DWORD WINAPI ThreadStart(LPVOID param) {

	
	return 0;
}

int main() {

	HANDLE thread = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	MyWaitForSingleObject(thread, INFINITY);//функция ожидания

	return 0;
}
