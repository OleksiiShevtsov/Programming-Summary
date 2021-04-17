#include <iostream>

using std::cout;
using std::endl;

int main(){
	
	int arr[] = {6,5,3,1,8,7,2,4};
	int temp;
	bool o;
	
	for(int i = 0; ; i++){
		
		o = false;
		
		for(int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++){
			
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				
				o = true;
			}
		}
		
		cout << "iter: " << i << endl;
		
		if(o == false){
			break;
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < sizeof(arr) / sizeof(int); i++){
		cout << arr[i] << endl;	
	}
	
	return 0;
}
