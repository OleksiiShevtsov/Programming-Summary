#include <iostream>
#include <string> 

using namespace std;

void FillArray(int* const array, const int size);
void ShowArray(int* const array, const int size);
void push_back(int* &array, int &size, const int value, const int position);
void pop_back(int* &array, int &size, const int position);
	
int main(){
	int size, position;
	cout <<"enter size count: ";
	cin >> size;
	
	int* array = new int[size];
	
	FillArray(array, size);
	
	ShowArray(array, size);
	
	cout <<"enter position on push_back: ";
	cin >> position;
	push_back(array, size, 10, position - 1);//ƒобавление 
	
	ShowArray(array, size);
	
	cout <<"enter position on pop_back: ";
	cin >> position;
	pop_back(array, size, position - 1);//”даление
	
	ShowArray(array, size);
	
	delete[] array;
	return 0;	
}

void FillArray(int* const array ,const int size){
	for(int i = 0; i < size; i++){
		array[i] = i + 1;	
	}
}

void ShowArray(int* const array ,const int size){
	cout << array <<":"<< endl;
	for(int i = 0; i < size; i++){
		cout << i + 1 << ") - "<<"\t"<< array[i] <<"\t"<< array + i << endl;	
	}
	cout << endl;
}
void push_back(int* &array, int &size, const int value, const int position){
	
	int *newArray = new int[size + 1];//1. создание нового масива
	
	for(int i = 0; i < size + 1; i++){//2. копирование 
		if(i == position){//добовление нового Їлемента в в≥бранную позицию
	
			newArray[i] = value;
			int j = i;
			for(int i = position; i < size + 1; i++){//копирование остальных €чеек
				j++;
				newArray[j] = array[i];
			}
			break;
		}
		newArray[i] = array[i];//копирование до добавление €чейки
	}
	
	size = size + 1;
	delete[] array;
	array = newArray;//возврат ссылки на массив
}

void pop_back(int* &array, int &size, const int position){
	
	int *newArray = new int[size - 1];
	
	for(int i = 0; i < size; i++){
			if(i == position){
			for(int i = position; i < size + 1; i++){
				newArray[i] = array[i + 1];
			}
			break;
		}
		newArray[i] = array[i];
	}
	
	size = size - 1;
	delete[] array;
	array = newArray;//возврат ссылки на массив
}
