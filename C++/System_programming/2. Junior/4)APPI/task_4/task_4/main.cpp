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

	for (int i = 0; i < INT32_MAX; ++i) {
		cout << i << endl;
		hFile = CreateFileA("E:\\programming\\C++\\System programming\\Junior\\4)APPI\\test.txt",
			GENERIC_WRITE,
			FILE_SHARE_WRITE,
			0,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			NULL);
		if (INVALID_HANDLE_VALUE == hFile) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}