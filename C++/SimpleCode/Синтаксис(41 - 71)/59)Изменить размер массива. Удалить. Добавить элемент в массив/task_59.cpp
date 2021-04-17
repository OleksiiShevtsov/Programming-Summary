#include <iostream>
#include <string> 
#include <cstdlib>

using namespace std;

void FillArray(int* const array, const int size);
void ShowArray(int* const array, const int size);
//value - значение, int* &array - для обращение к указателю
void push_back(int* &array, int &size, const int value);//добавление последнего єлемента

void pop_back(int* &array, int &size);//удаление последнего єлемента
	
int main(){
	int size;
	cout <<"enter size count: ";
	cin >> size;
	
	int* array = new int[size];
	FillArray(array, size);
	
	ShowArray(array, size);
	
	push_back(array, size, 10);
	
	ShowArray(array, size);
	
	pop_back(array, size);
	
	ShowArray(array, size);
	
	delete[] array;
	return 0;	
}

void FillArray(int* const array ,const int size){
	for(int i = 0; i < size; i++){
		array[i] = rand() % 10;	
	}
}

void ShowArray(int* const array ,const int size){
	cout << array <<":"<< endl;
	for(int i = 0; i < size; i++){
		cout << i + 1 << ") - "<<"\t"<< array[i] <<"\t"<< array + i << endl;	
	}
	cout << endl;
}
void push_back(int* &array, int &size, const int value){
	int *newArray = new int[size + 1];//1. создание нового масива
	for(int i = 0; i < size; i++){//2. копирование 
		newArray[i] = array[i];
	}
	newArray[size++/*сначала присвоится потом + 1*/] = value;
	delete[] array;
	array = newArray;//возврат ссылки на массив
}

void pop_back(int* &array, int &size){
	size--;
	int *newArray = new int[size - 1];
	for(int i = 0; i < size; i++){
		newArray[i] = array[i];
	}
	delete[] array;
	array = newArray;//возврат ссылки на массив
}
