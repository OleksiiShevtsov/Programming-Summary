#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;
/*	Semaphore: * CLIENT -----> SERVER */

HANDLE semaphore = INVALID_HANDLE_VALUE;
LONG volatile dataId = NULL;
const int maxId = 20;
vector<int> data;

void GenerateRandoms() {
	
	data.resize(maxId + 1);
    for (int i = 1; i <= 4; ++i) {
        data[i] = (i * 10);
    }
}

int getRand(int i){
	return data[i];
}

DWORD WINAPI ThreadClient(LPVOID param) {	
	
	WaitForSingleObject(semaphore, INFINITE);
	
	int clientDataId = dataId;
	int clientDataRand = getRand(clientDataId);

	cout << "Client: " << clientDataId << ", data: " << clientDataRand << endl;
	
	return 0;
}

DWORD WINAPI ThreadServer(LPVOID param) {
	
	LONG prevVal = 0;
	GenerateRandoms();
	ReleaseSemaphore(semaphore, 4, &prevVal);
	
	for(int i = 0; i < maxId - 4; i++){
		
		int clientDataId = InterlockedIncrement(&dataId);
		if(dataId == 4){
			
			GenerateRandoms();
			dataId = 0;
			ReleaseSemaphore(semaphore, 4, &prevVal);
		}	
	}
	
	cout << "EXIT ThreadServer" << endl;
	
	return 0;
}

int main() {
	
	semaphore = CreateSemaphore(0, 0, 10, "semaphore");
	CreateThread(0, 0, ThreadServer, 0, 0, 0);

	for(int i = 0; i < maxId; i++){
		CreateThread(0, 0, ThreadClient, 0, 0, 0);
	}
	
	Sleep(20000);

	cout << "EXIT main" << endl;

	return 0;
}
