#include <iostream>
#include <array>
using namespace std;

int main() {

	array<int, 3> arr1 = { 10, 20, 30 };
	array<int, 3> arr2 = { 15, 25, 35 };

	//���������� ���� ������, ���������� ���������
	//������ ���� ����������� ��������� ��������� ���� ��� ������
	bool result = (arr1 > arr2);

	cout << result << endl;

	int x; cin >> x;
	return 0;
}