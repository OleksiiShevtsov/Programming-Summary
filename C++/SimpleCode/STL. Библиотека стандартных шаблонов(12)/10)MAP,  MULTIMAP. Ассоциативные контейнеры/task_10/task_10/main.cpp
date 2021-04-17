#include <iostream>
#include <string>
//���������� map
#include <map>

//map, multimap - �������� ������
//map ������ ������ ���������� �����
//multimap ����� ������� ���������� ��������

using namespace std;
int main() {

	//���������� ����
	pair<int, string> p(22, "Alex");
	cout << p.first << endl;
	cout << p.second << endl;

	//���������� map
	map<int, string> myMap;

	//��������� � ��������� (��������)
	myMap.insert(p);
	myMap.insert(make_pair(32, "LeBron"));
	myMap.insert(pair<int, string>(55, "Jordan"));
	//��������� � ��������� (����� �����(�������� �����))
	myMap.emplace(64, "Chan");
	
	//�������� �� ������� �� �����(��������� �������� �� ���� �����)
	//���� �� ����� �� ��������� end();
	auto it = myMap.find(34);

	cout << myMap[34] << endl;

	//���������� multimap
	multimap<int, string> myMultimap;
	myMultimap.emplace(22, "F");
	myMultimap.emplace(22, "G");

	return 0;
}