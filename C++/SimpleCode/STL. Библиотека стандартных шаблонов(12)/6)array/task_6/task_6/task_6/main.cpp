#include <iostream>
#include <array>

//array - ����������� ������
using namespace std;

int main() {

	array<int, 3> arr = {10, 20, 30};

	//at() - ����������� ����� �� �������
	//at(a) == arr[a];
	//cout << arr.at(11) << endl;

	//������ � ������� ��������
	cout << arr.front() << endl;

	//������ � ���������� ��������
	cout << arr.back() << endl;

	//��������� ����� ���������
	arr.fill(40);

	for(int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	int exit; 
	cin >> exit;
	return 0;
}