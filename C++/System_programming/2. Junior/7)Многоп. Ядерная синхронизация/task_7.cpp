#include <iostream>
#include <windows.h>

using namespace std;

/*	����������� ������: */



DWORD WINAPI ThreadStart(LPVOID param) {

	
	return 0;
}

int main() {

	HANDLE thread = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	MyWaitForSingleObject(thread, INFINITY);//������� ��������

	return 0;
}
