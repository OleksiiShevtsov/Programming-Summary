// ƒемонстрирует передачу константных указателей дл€ изменени€ переменных-аргументов
#include <iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);
int main(){
	int myScore = 150;
	int yourScore = 1500;
	cout <<"Original values\n";
	cout <<"myScore: "<<myScore<<"\n";
	cout <<"yourScore: "<<yourScore<<"\n\n";
	cout <<"Calling badScore()\n";
	badSwap(myScore, yourScore);
	cout <<"myScore: "<<myScore<<"\n";
	cout <<"yourScore: "<<yourScore<<"\n\n";
	cout <<"Calling goodScore()\n";
	goodSwap(&myScore, &yourScore);
	cout <<"myScore: "<<myScore<<"\n";
	cout <<"yourScore: "<<yourScore<<"\n\n";
	return 0;
}
void badSwap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}
void goodSwap(int* const pX, int* const pY){
	// —охран€ем в temp значение. на которое указывает р’
	int temp = *pX;
	// сохран€ем значение, на которое указывал р”.
	// по адресу, на который указывает р’
	*pX = *pY;
	// сохран€ем значение, на которое изначально указывал р’.
	// по адресу. на который указывает р”
	*pY = temp;
}
