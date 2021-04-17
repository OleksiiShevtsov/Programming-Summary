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
	//приведение все что лежит в {} скобках
	//если сможет преобразовать
	//у него преймущество!
	B(initializer_list<double> il) {
		cout << "B3" << endl;}
};

int main() {

	//унифицированный способ инициализации
	vector<int> v{ 1, 2, 4, 5 };

	{
		double x = 1, y = 2, z = 3;
		int sum(x + y + z);
	}
	{
		A a1(10);
		//-конструктор кпу не будет вызван
		//-синтаксис обьявления функции
		//без реализации
		A a2();
		//конструктор кпу будет вызван
		A a3; A a4{};
	}

	B b1(10, 'i');
	B b2{ 20, 'i' };
	B b3(30, 3.0);
	B b4{ 40, 4.0 };
	B b0{ };// кпу

	//конструктор с пустым списком
	//инициализации
	B b6({ });

	//вызов конструтор с 2 параметра
	vector <int> v1(10, 20);
	//вызов конструтор список иниуиализации,
	//создаст 2 элемента
	vector <int> v1{ 10, 20 };

	int exit; cin >> exit; return 0;
}