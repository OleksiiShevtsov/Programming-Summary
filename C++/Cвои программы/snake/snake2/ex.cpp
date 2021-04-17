#include <iostream>
//отслеживает нажатие клавиш
#include <cstdlib>

using namespace std;


int main() {

	long int t = 10000000;
	int temp;
	cout << temp << endl;
	do{
		temp = (rand()%t);
	}while (temp != 0);
	
	do{
		temp = (rand()%t);
	}while (temp != 5);
	
	
	do{
		temp = (rand()%t);
	}while (temp != 4);
	
	cout << temp << endl;

	return 0;
}
