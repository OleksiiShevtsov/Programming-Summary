#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char str[] = "Alexius";
	char key[] = "ujgt34mz90nr1h5l";
	
	cout <<"str: "<< str << endl;
	//криптование
	for (int i = 0; i < sizeof(str) - 1; i++){

		if(i != 0){
			*(str + i) = *(str+i) ^ *(str + i - 1);
		}
        for(int j = 0; j < sizeof(key) - 1; j++){
        	*(str + i) = *(str + i) ^ *(key + j);
        }
    }
    str[sizeof(str) - 1] = '\0';
	cout <<"crypting: "<< str << endl;
	//декриптование
	for (int i = sizeof(str) - 2; i >= 0; i--){

        for(int j = 0; j < sizeof(key) - 1; j++){
        	*(str + i) = *(str + i) ^ *(key + j);
        }
        
        if(i != 0){
			*(str + i) = *(str+i) ^ *(str + i - 1);
		}
    }
    cout <<"decrypting: "<< str << endl;
	
	return 0;
}
