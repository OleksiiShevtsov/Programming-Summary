#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;
/*	CLIENT -> SERVER: */

HANDLE eventClient = INVALID_HANDLE_VALUE;
HANDLE eventServer = INVALID_HANDLE_VALUE;
vector<int> data;
bool getData = false;
bool isDataReady = false;

DWORD WINAPI ThreadClient(LPVOID param) {

	SetEvent(eventClient);
	DWORD value_1 = WaitForSingleObject(eventServer, INFINITE);
	
	cout << data[0] << endl;
	cout << "EXIT ThreadClient" << endl;
	
	return 0;
}

DWORD WINAPI ThreadServer(LPVOID param) {
	
	DWORD value_2 = WaitForSingleObject(eventClient, INFINITE);
		
	data.push_back(100);
	
	SetEvent(eventServer);
	cout << "EXIT ThreadServer" << endl;
	
	return 0;
}

//CLIENT -----> SERVER
int main() {

	eventClient = CreateEventA(0, FALSE, FALSE, "eventClient");
	eventServer = CreateEventA(0, FALSE, FALSE, "eventServer");
	HANDLE threadClient = CreateThread(0, 0, ThreadClient, 0, 0, 0);
	HANDLE threadServer = CreateThread(0, 0, ThreadServer, 0, 0, 0);
	
	Sleep(1000);

	cout << "EXIT main" << endl;

	return 0;
}
