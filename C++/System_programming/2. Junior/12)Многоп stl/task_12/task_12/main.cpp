/*#include <iostream>
#include <thread>
#include <future>
#include <mutex>
#include <string>
#include <windows.h>

using namespace std;
mutex g_dataLock, g_orgLock;

struct UsreInfo {
	string name;
}g_dataInfo;

struct OrgInfo {
	string name;
}g_orgInfo;

void DoWork() {

	unique_lock<mutex> ul(g_dataLock);

	g_dataInfo.name = "Alex";
	g_orgInfo.name = "Code";

	cout << "DoWork" << endl;

}

int main() {

	auto th = async(DoWork);
	unique_lock<mutex> ul(g_dataLock);

	g_dataInfo.name = "Alex2";
	g_orgInfo.name = "Code2";
	cout << "Main" << endl;

	int exit; cin >> exit; return 0;
}*/