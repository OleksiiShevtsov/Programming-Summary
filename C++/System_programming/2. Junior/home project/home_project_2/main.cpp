#include <iostream>
using namespace std;

const int symbolsSize = 5;
char symbols[symbolsSize] {'a', 'b', 'c', 'd', 'e'};
int depth = 2;
string key = "";

string symbol(string str, int i){
	string inStr;
	string resStr;
	for(int j = 0; j < symbolsSize; j++){
		inStr = static_cast<char>(symbols[j]);			
	}
	if(i <= depth){
		symbol(str, i);	
	}
	
	resStr = str + inStr;
	
	cout << resStr << endl;

	return "";
}

int main(){
	
	string str;
	
	for(int i = 1; i <= depth; i++){		
		for(int j = 0; j < symbolsSize; j++){
			str = static_cast<char>(symbols[j]);
			if(i <= depth){
				symbol(str, i);
			}
			cout << str << endl;
		}	
	}
	
	return 0;
}
