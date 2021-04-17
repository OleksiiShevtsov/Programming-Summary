#include <iostream>
#include <array>
using namespace std;

int main() {

	array<int, 3> arr1 = { 10, 20, 30 };
	array<int, 3> arr2 = { 15, 25, 35 };

	//одинаковые типы данных, количество єлементов
	//должно быть перегружены операторы сравнения если это классы
	bool result = (arr1 > arr2);

	cout << result << endl;

	int x; cin >> x;
	return 0;
}