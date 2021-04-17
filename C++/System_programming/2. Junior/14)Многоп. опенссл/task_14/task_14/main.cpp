#include <iostream>
#include <string>
#include <future>
#include <mutex>
#include <thread>
#include <windows.h>
#include <condition_variable>

std::mutex m;
std::condition_variable cv;

void wait_coffe()
{
	std::unique_lock<std::mutex> lk(m);
	cv.wait(lk);//засыпаем!!!
	std::cout << "\ncoffe if ready!!!" << std::endl;
}

int main()
{
	//std::thread th(wait_coffe);
	auto fut = std::async(wait_coffe);

	std::cout << "Prepering.";
	for (int i = 0; i < 9; i++) {
		std::cout << ".";
		Sleep(100);
	}
	cv.notify_one();//просыпаемся!!!

	//th.join();
	fut.get();

	int exit; std::cin >> exit;
}