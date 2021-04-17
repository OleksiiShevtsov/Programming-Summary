/*#include <iostream>
#include <map>
#include <string>
using namespace std;

struct WorkerInfo{};

//typedef map<string, WorkerInfo> WorkerMap;

//1.аналог typedef
template<typename IdType>
using WorkerMap = map<IdType, WorkerInfo>;

void f(int* ptr) { cout << "ptr" << endl; }
void f(int val) { cout << "val" << endl; }

int main() {

	//WorkerMap<string> workers;

	auto var = { 1 };//int
	//int var = { 1 };//initialize...

	f(nullptr); 
	f(0); 
	f(NULL);


	int exit; cin >> exit;
	return 0;
}*/