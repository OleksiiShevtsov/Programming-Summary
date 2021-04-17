#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//задача 1
	cout << "Z1Z" << endl;
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0])/2;i++){
		int temp = arr[i];
		arr[i] = arr[sizeof(arr)/sizeof(arr[0]) - i - 1];
		arr[sizeof(arr)/sizeof(arr[0]) - i - 1] = temp;
	}
	
	for(int i = 0; i < sizeof(arr)/sizeof(int);i++){
		cout << arr[i] << endl;
	}
	
	//задача 2
	cout << "Z2Z" << endl;
	
	const char* str1 = "Hello ";
	const char* str2 = "world!!!";
	char str3[14];
	string str4;
	
	str4 = static_cast<string>(str1) + static_cast<string>(str2);
	
	for(int i = 0; i < 6; i++){
		str3[i] = str1[i];
	}
	for(int i = 0; i < 8; i++){
		str3[i + 6] = str2[i];
	}
	
	
	string str5 = str1;
	str5 = str5 + str2;
	
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	
	//задача 3
	cout << "Z3Z" << endl;
	
	int arr2[] = {1, 8, 7, 1, 6, 8, 7}; 
	int s = 0;
	for(int i = 0 , k = 0; i < sizeof(arr2)/sizeof(int); i++){
		for(int j = 0; j < sizeof(arr2)/sizeof(int); j++){
			if(arr2[j] > arr2[j + 1]){
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
				k = 1;
				s++;
			}
		}
		if(k == 0){
			break;
		}else{
			k = 0;
		}
	}
	cout <<"\n"<< s << " - s" << endl;
	for(int i = 0; i < sizeof(arr2)/sizeof(arr2[0]);i++){
		cout << arr2[i] << endl;
	}
	
	//задача 3.1 доделать
	cout << "Z3.1Z" << endl;
	
	int arr3[] = {1, 8, 7, 1, 6, 8, 7}; //res = 6
	int num;
	for(int i = 0, k = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++){
		for(int j = 0; j < sizeof(arr3)/sizeof(arr3[0]); j++){
			if(i == j){
				continue;
			}
			else if(arr3[i] == arr3[j]){
				k = 0;
				break;
			}else{
				k = 1;
			}
		}
		if(k == 1){
			num = arr3[i];
			cout <<"\n num: "<< num <<"; i = "<< i <<"\n"<< endl;
			break;
		}
	}
	
	//задача 4 доделать
	cout << "Z4Z" << endl;
	
	int value = 260; //bin - 0001 0000 0100
	int mask = 1;
	bool startCount = false;
	int count;
	
	for(int i = 0; i < 32; i++){
		mask = mask << 1;
		if(value & mask){
			if(startCount == false){
				startCount = true;
			}else{
				break;
			}
		}
		else if(startCount){
			count++;
		}
	}
	
	cout <<"\n"<< count << endl;
	
	return 0;
}
