#include <iostream>
using namespace std;

int main(){
	 
	const int SIZE = 4;
	int arr[SIZE] = {2, 4, 6, 8};
	
	for(int i = 0; i < SIZE; i++){
		cout << arr[i]<<endl;
	}
	cout << endl;
	
	int *pArr = arr;

	cout <<"arr =  "<<arr<<endl;
	cout <<"pArr = "<<pArr<<endl;
	cout <<"*arr =  "<<*arr<<endl;
	cout <<"*pArr = "<<*pArr<<endl;
	cout << endl;
	
	for(int i = 0; i < SIZE; i++){
		cout << pArr + i << endl;
	}
	cout << endl;
	//арифметика указаелей
	cout <<"arr + 1 =  "<< arr + 1 <<endl;
	cout <<"*(arr + 1) =  "<< *(arr + 1) << endl;
	return 0;	
}
