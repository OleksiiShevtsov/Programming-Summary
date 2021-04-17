#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	//только дл€ чтени€: const int arrConst[];
	
	int arr[3] = {1, 2, 3};
	arr[0] = 3;
	arr[1] = 2;
	arr[2] = 1;
	
	cout <<"arr[0]: "<< arr[0] << endl;
	
	int arr2[10];
	cout << "sizeof(arr2): " << sizeof(arr2) << endl;
	
	for(int i = 0; i < sizeof(arr2) / sizeof(int); i++){
		arr[i] = i;
		cout << i << endl;
	}
	
	//стек
	cout << "stek"<< endl;
	
	//2хћасивы
	cout << "2xMass"<< endl;
	
	const int x = 2;
	const int y = 2;
	
	int arr3[x][y] = {{1, 2}, {3, 4}};
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << arr3[i][j];
		}
		cout << endl;
	}
	
	//одним масивом
	for(int j = 0; j < x * y; j++){
		cout << arr3[0][j];
	}
	
	//2хћасивы
	cout << "obl vidimost"<< endl;
	
	int z = 3;
	if(z == 3){
		z = 7;
	}
	cout << z << endl;
	
	//
	const int l = 7;
	int temp;
	
	int arr4[l] = {1, 2, 3, 4, 5, 6, 7};

	for(int i = 0; i < l / 2; i++){
		temp = arr4[l - i - 1];
		arr4[l - i - 1] = arr4[i];
		arr4[i] = temp;
	}

	for(int j = 0; j < l; j++){
		cout << arr4[j] << endl;
	}
	
	return 0;
}
