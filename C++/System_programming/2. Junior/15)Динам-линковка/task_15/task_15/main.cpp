#include <iostream>
#include <windows.h>
using namespace std;

int(*AddFn)(int a, int b);

int main(){
	
	HMODULE dllH = LoadLibraryW(L"Dll_task_14");
	//cout << (const char*)dllH << endl;

	AddFn = reinterpret_cast<int(*)(int a, int b)> (GetProcAddress(dllH, "Add"));
	cout << AddFn(10, 20) << endl;

	FreeLibrary(dllH);

	cout << "Hello world!" << endl;
	int exit; cin >> exit;
	return 0;
}