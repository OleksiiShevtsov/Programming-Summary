#include<iostream>

#define DEBUG 1 //если закометировать #define DEBUG то 
			  //то все что внутри #ifdef не будет скомпелировано

using namespace std;

int main(){
	
#ifdef DEBUG //что не должно видеть
	cout <<"start of cycle"<< endl;
#endif  //конец
	
	for(int i = 0; i < 4; i++){
		cout << i << endl;
	}
	
#ifdef DEBUG //#ifndef - работает наоборот
	cout <<"end of cycle"<< endl;
#else //#elif - дополнительное условие
	cout <<"DEBUG //"<< endl;
#endif
	cout << endl;
	
#if DEBUG == 1
	cout << "DEBUG = 1" << endl;
#endif
	
	return 0;
}
