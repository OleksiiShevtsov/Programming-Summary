#include <iostream>
//для работы с потоками
#include <thread>
//для работы со временем
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

	//класс нового потока 
	thread th1(DoWork);
	thread th2(DoWork);
	//th1.detach() - обрыв потока когдазакончиться основоной поток
	//th2.detach();
	

	//get_id() - идентеикатор потока
	//cout << this_thread::get_id() << endl;

	for (int i = 0; i < 10; i++) {
		cout << "ID - " << this_thread::get_id() << "\tMain" << " - " << i << endl;
		//пауза потока на пол секунды
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	//Основной поток блокируется и ждет
	//окончания работы потока th
	th1.join();
	th2.join();

	return 0;
}
