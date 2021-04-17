#include <iostream>
#include <thread>
#include <future>
#include <mutex>
#include <string>
#include <windows.h>
#include <atomic>

using namespace std;

class Harbor {
public:
	int Load() {
		value = idShip++;
		return value;
	}
private:
	int value = 10;
	atomic<int> idShip;
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
}