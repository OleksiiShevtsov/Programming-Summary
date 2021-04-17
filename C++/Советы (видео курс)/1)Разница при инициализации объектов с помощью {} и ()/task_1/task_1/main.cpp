#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	A(int x) {
		cout << "A2" << endl;}
	A() {
		cout << "A1" << endl;}
};

class  B{
public:
	B() {
		cout << "B0" << endl;}
	B(int i, char ch) {
		cout << "B1" << endl;}
	B(int i, double ch) {
		cout << "B2" << endl;}
	//���������� ��� ��� ����� � {} �������
	//���� ������ �������������
	//� ���� ������������!
	B(initializer_list<double> il) {
		cout << "B3" << endl;}
};

int main() {

	//��������������� ������ �������������
	vector<int> v{ 1, 2, 4, 5 };

	{
		double x = 1, y = 2, z = 3;
		int sum(x + y + z);
	}
	{
		A a1(10);
		//-����������� ��� �� ����� ������
		//-��������� ���������� �������
		//��� ����������
		A a2();
		//����������� ��� ����� ������
		A a3; A a4{};
	}

	B b1(10, 'i');
	B b2{ 20, 'i' };
	B b3(30, 3.0);
	B b4{ 40, 4.0 };
	B b0{ };// ���

	//����������� � ������ �������
	//�������������
	B b6({ });

	//����� ���������� � 2 ���������
	vector <int> v1(10, 20);
	//����� ���������� ������ �������������,
	//������� 2 ��������
	vector <int> v1{ 10, 20 };

	int exit; cin >> exit; return 0;
}