#include <iostream>
#include <string>
using namespace std;

int main(){

	int rows, cols;
	cout <<"enter ruws count: ";
	cin >> rows;
	cout <<"enter cols count: ";
	cin >> cols;
	
	//СОЗДАНИЕ///////////////////////////////////////////
	int** array = new int*[rows];//реализация масива который содержит указатели
	for(int i = 0; i < rows; i++){
		array[i] = new int[cols];
	}
	
	//ЗАПОНЕНИЕ//////////////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			array[i][j] = j + 1;
		}
	}
	
	//ВЫВОД///////////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout <<"array["<<i<<"]["<<j<<"] = "<< array[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	//ВЫВОД АДРЕСОВ////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		cout << array + i <<"["<< i <<"]"<< endl;
		for(int j = 0; j < cols; j++){
			cout << array[i] + j << endl;
		}
		cout << endl;
	}
	
	//УДАЛЕНИЕ///////////////////////////////////////////////
	//удаление вложенных масивов
	for(int i = 0; i < rows; i++){
		delete []array[i];
	}
	//(если удалить главный массив с указат. то будет утечка памяти к вложенным масивам)
	delete [] array;
	
	return 0;	
}
