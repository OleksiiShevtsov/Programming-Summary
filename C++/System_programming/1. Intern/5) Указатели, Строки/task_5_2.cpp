#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	char str[] = "HelloAlex";
	
	cout << str << endl;

	for(int i = 0; i < sizeof(str); i++){
		
		char* curSymbolPtr = str + i;
		char curSymbol = *curSymbolPtr;
		
		if(curSymbol >= 0x61 && curSymbol <= 0x7a){
			*curSymbolPtr = curSymbol - 32;
			//*curSymbolPtr = curSymbol - 0x20;
		}
		
		//*(str + i) = *(str + i) - 0x20;
		
	}
	cout << str << endl;
	
	return 0;
}
