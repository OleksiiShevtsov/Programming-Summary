/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

struct Person{
	string name;
	int age;
	string position;
};

tuple<string, int> GetWorkerById(int id) {
	return { "Alex", 24 };
}

int main() {

	//контейнер с разнми данными
	tuple t = { 10, "Hello" , false};
	auto k = get<0>(t);

	//деструктуризация
	auto[a, b, c] = t;
	cout << a << b << c << endl;

	Person person{ "Alex", 24, "Junior" };
	auto[d, v, h] = person;

	//с функциями
	auto[g, j] = GetWorkerById(10);

	int exit; cout << "exit: ";  cin >> exit;
	return 0;
}*/