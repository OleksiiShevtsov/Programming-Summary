#include <iostream>
//��� ������ � ��������
#include <thread>
//��� ������ �� ��������
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

	//����� ������ ������ 
	thread th1(DoWork);
	thread th2(DoWork);
	//th1.detach() - ����� ������ ���������������� ��������� �����
	//th2.detach();
	

	//get_id() - ������������ ������
	//cout << this_thread::get_id() << endl;

	for (int i = 0; i < 10; i++) {
		cout << "ID - " << this_thread::get_id() << "\tMain" << " - " << i << endl;
		//����� ������ �� ��� �������
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	//�������� ����� ����������� � ����
	//��������� ������ ������ th
	th1.join();
	th2.join();

	return 0;
}
