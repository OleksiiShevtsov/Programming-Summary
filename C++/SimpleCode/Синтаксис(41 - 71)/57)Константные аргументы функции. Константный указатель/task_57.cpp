#include <iostream>
#include <string>
using namespace std;

void FillArray(int* const array ,const int size){
	for(int i = 0; i < size; i++){
		array[i] = i + 1;	
	}
}

void ShowArray(int* const array ,const int size){
	for(int i = 0; i < size; i++){
		cout << i + 1 << ") - "<<"\t"<< array[i] <<"\t"<< array + i << endl;	
	}
	cout << endl;
}

int main(){
	
	int size;
	cout <<"enter size count: ";
	cin >> size;
	
	int* array = new int[size];
	
	FillArray(array, size);
	ShowArray(array, size);
	
	return 0;	
}
