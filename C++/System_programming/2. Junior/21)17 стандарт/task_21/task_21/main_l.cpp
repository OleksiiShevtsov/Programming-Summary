/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//����� �������
	int sum = 0;
	//[������ ������� ����������](��������� �����)
	auto l = [&sum] (int num) {
		sum = sum + num;
		cout << "num: " << num << endl;
	};

	vector<int> nums{ 2, 3, 4, 5, 6 };

	for_each(nums.begin(), nums.end(), l);
	cout << "sum: " << sum << endl;


	int exit; cout << "exit: ";  cin >> exit;
	return 0;
}*/