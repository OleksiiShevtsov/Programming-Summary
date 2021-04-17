#include <iostream>
#include <windows.h>

using namespace std;

/*	������������ �������������: 
	���������� �������������: */

//InterlockedIncrement(&count);//������������� (������������ �������)

LONG count = 0;
volatile LONG isFree = TRUE;

//���������� �������������(�������)
DWORD WINAPI ThreadStart(void* param) {
	
	while(!InterlockedExchange(&isFree, FALSE) != TRUE){}
	++count;//��������
	isFree = TRUE;
	
	return 0;
}

int main() {
	
	HANDLE thread1 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	HANDLE thread2 = CreateThread(0, 0, ThreadStart, 0, 0, 0);
	
	Sleep(500);
	
	cout << count << endl;

	return 0;
}
