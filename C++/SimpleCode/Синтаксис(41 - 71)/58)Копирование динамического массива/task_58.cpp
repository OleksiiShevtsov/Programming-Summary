#include <iostream>
#include <string> 
#include <cstdlib>

using namespace std;

void FillArrat(int* const array ,const int size);
void ShowArrat(int* const array ,const int size);

int main(){
	int size;
	cout <<"enter size count: ";
	cin >> size;
	
	int* array1 = new int[size];
	int* array2 = new int[size];
	FillArrat(array1, size);
	FillArrat(array2, size);
	ShowArrat(array1, size);
	ShowArrat(array2, size);
		
	///КОПИРОВАНИЕ 2М В 1М//////////////////////////////////////////
	
	delete[] array1;//1 удаление М1
	
	array1 = new int[size];//2 выдиление нового места 
	
	for(int i = 0; i < size; i++){//3 копирование 
		array1[i] = array2[i];
	}
	ShowArrat(array1, size);
	ShowArrat(array2, size);
	
	delete[] array1;
	delete[] array2;
	return 0;	
}

void FillArrat(int* const array ,const int size){
	for(int i = 0; i < size; i++){
		array[i] = rand() % 10;	
	}
}

void ShowArrat(int* const array ,const int size){
	cout << array <<":"<< endl;
	for(int i = 0; i < size; i++){
		cout << i + 1 << ") - "<<"\t"<< array[i] <<"\t"<< array + i << endl;	
	}
	cout << endl;
}
