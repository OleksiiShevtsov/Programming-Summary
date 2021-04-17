#include <iostream>
#include <array>

//array - статический массив
using namespace std;

int main() {

	array<int, 3> arr = {10, 20, 30};

	//at() - контрлирует выход за границы
	//at(a) == arr[a];
	//cout << arr.at(11) << endl;

	//доступ к первому єлементу
	cout << arr.front() << endl;

	//доступ к последниму єлементу
	cout << arr.back() << endl;

	//заполняет масив значением
	arr.fill(40);

	for(int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	int exit; 
	cin >> exit;
	return 0;
}