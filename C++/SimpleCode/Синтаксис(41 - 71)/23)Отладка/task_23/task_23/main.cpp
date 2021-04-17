#include <iostream>
using namespace std;

int Sum(int x, int y) {
	return x + y;
}

int main() {

	int x = 10;
	int y = 20;
	int z;
	int* p = new int(12);
	*p = 3 + 4;

	z = Sum(x, y);

	cout << z << endl;

	system("pause");
	return 0;
}