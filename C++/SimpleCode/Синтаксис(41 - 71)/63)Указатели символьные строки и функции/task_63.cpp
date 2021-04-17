#include <iostream>
#include <string>//для строк (класс)
#include <cstring>//c строки

using namespace std;
void foo(char *str);
int main(){
	
	char str[] = "Hello";
	
	char* string = str; //избавление от масива -  char* string[]
	
	cout << string << endl;
	cout << endl;
	
	//масив строк
	char* strArr[] = {"Alex1", "Alex2", "Alex3"};
	for(int i = 0; i < 3; i++){
		cout << strArr[i] << endl;
	}
	
	//передача в функцию
	foo(string);
	foo(strArr[0]);
	return 0;
}
void foo(char *str){
	cout << strlen(str) << endl;
}
