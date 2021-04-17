#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int value = 260; //bin - 0001 0000 0100
	bool startCount = false;
	int count;
	
	for(int i = 0; i < 32; i++){
		value = value >> 1;
		if(value & 1){
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
