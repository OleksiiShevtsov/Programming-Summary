/*#include <iostream>
#include <thread>
#include <future>
#include <mutex>
#include <string>
#include <windows.h>

using namespace std;

class Harbor {
	public:
		int Load() {
			unique_lock<mutex> ul(g_dataLock);
			return x++;
		}
	private:
		int x = 10;
		mutex g_dataLock;
};
Harbor harbor;

int ShipFunc() {

	int result = harbor.Load();

	return result;
}

int main() {

	for (int i = 0; i < 10; i++) {
		auto th = async(ShipFunc);
		cout << th.get() << endl;
	}

	int exit; cin >> exit; return 0;
}*/