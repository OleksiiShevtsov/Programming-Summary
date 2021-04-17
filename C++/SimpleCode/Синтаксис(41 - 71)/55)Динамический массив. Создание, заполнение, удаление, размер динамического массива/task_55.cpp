#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int size;
	cout << "enter array size: ";
	cin >> size;
	int* array = new int[size];
	
	for(int i = 0; i < size; i++){
		array[i] = i;//array[i] == *(array + i)
	}
	
	for(int i = 0; i < size; i++){
		cout << i << ") " << array + i << " - " << array[i] << endl;
	}
	
	delete []array;
	array = NULL;
	
	return 0;	
}
