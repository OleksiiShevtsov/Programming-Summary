#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {

	HANDLE hFile = 0;
	char DataBuffer[] = "text";
	DWORD dwBytesToWrite = (DWORD)strlen(DataBuffer);
	DWORD dwBytesWritten = 0;
	BOOL bErrorFlag = FALSE;

	hFile = CreateFileA("E:\\programming\\C++\\System programming\\Junior\\3)GIT_2\\task_3\\task_3.txt",
		GENERIC_WRITE | GENERIC_READ,
		0,
		NULL,
		CREATE_NEW,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	bErrorFlag = WriteFile(
		hFile,
		DataBuffer,
		dwBytesToWrite,
		&dwBytesWritten,
		NULL);

	CloseHandle(hFile);

	return 0;
}