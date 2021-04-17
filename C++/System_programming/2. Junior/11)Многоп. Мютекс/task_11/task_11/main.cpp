#include <iostream>
#include <thread>
#include <future>

using namespace std;

int DoWork(int value) {
	value = value * 10;
	return value;
}

int main() {

	thread th(DoWork, 1);
	th.join();

	//2 способ создания потока
	auto thread = async(DoWork, 2);
	int res = thread.get();
	cout << res << endl;

	//статус
	future_status status = thread.wait_for(chrono::seconds(5));
	cout << (int)status << endl;


	int exit; cin >> exit; return 0;
}