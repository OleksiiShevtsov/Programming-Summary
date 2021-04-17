#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {

	HANDLE hFile = 0; //идентификатор
	
	char DataBuffer[] = "text";
	DWORD dwBytesToWrite = (DWORD)strlen(DataBuffer);
	DWORD dwBytesWritten = 0;
	BOOL bErrorFlag = FALSE;

	for(int i = 0; i < 0xffffffff; ++i){
	
		hFile = CreateFileA("E:\\programming\\C++\\System programming\\Junior\\4)APPI\\test.txt",
			GENERIC_WRITE | GENERIC_READ,
			FILE_SHARE_WRITE,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			NULL);
		if(INVALID_HANDLE_VALUE == hFile ){
			cout << i << endl;
			break;
		}
	}

	return 0;
}
