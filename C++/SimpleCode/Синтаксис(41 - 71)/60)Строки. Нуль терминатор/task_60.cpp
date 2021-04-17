#include <iostream>
#include <string>//для строк (класс)
#include <cstring>//c строки

using namespace std;

int main(){
	char string[255] = "Hello World!";//компилятор сам добавляет '\0'
	cout << string << endl;
	
	char string2[] = {'H', 'e', 'l', 'l', 'o', '\0'};//можно добавить самому '\0'
	cout << string2 << endl;
	
	cout << strlen(string2) << endl;
	
	return 0;
}
