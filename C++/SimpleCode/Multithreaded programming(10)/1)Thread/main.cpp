#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int DoWork() {
	for (int i = 0; i < 10; i++) {
		cout << "ID - " << this_thread::get_id() << "\tDoWork" << " - " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	return 0;
}

int main() {

	thread th1(DoWork);

    // may break, when finished main
    //th1.detach();

	for (int i = 0; i < 10; i++) {
		cout << "ID - " << this_thread::get_id() << "\tMain" << " - " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
	}

    // waiting for this thread to end
    th1.join();

	return 0;
}
