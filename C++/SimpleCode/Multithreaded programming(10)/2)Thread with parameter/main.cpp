#include <iostream>
//для работы с потоками
#include <thread>
//для работы со временем
#include <chrono>

using namespace std;

void DoWork(int x, int y) {
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "============\t" << "DoWork STARTED\t============" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "x + y = " << x + y << "\t id - " << this_thread::get_id << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "============\t" << "DoWork STOPPED\t============" << endl;
}

int main() {

	//параметры передаються через запятую(определенного количества и типов данных)
	thread th(DoWork, 2, 8);
	
	for (int i = 0; i < 10; i++) {
		cout << "id - " << this_thread::get_id << "\tMain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(400));
	}
	
	th.join();

	int exit; cin >> exit; return 0;
}