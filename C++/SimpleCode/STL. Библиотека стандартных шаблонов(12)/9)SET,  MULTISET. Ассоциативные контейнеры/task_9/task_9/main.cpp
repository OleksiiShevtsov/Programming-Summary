#include <iostream>
#include <string>
#include <set>

//set, multiset - �������� ������
//set - ������ ���������� ��������
//multiset - ������ ����������� ��������
//set, multiset - ������ �������� ��������

using namespace std;

int main() {

	set<int> mySet;
	mySet.insert(10);
	mySet.insert(30);
	mySet.insert(20);
	mySet.insert(40);

	//���� �� ��������(���������� ��������)
	auto it = mySet.find(10);

	//������� �� ��������
	auto it = mySet.erase(10);

	//������� � ������������� ����
	for (auto &item : mySet) {
		cout << item << endl;
	}

	multiset<int> myMultiset;
	myMultiset.insert(20);
	myMultiset.insert(20);

	int exit; cin >> exit;
	return 0;
}