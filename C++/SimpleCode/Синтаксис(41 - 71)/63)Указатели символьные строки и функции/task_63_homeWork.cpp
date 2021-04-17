#include <iostream>
#include <string> 
#include <cstring>

using namespace std;

int strlenAlex(const char* str);
	
int main(){
	
	char string[] = "Alex";
	cout << strlenAlex(string);
	
	return 0;	
}

int strlenAlex(const char* str){
	int i = 0;
	while(str[i] != '\0')
		i++;

	return i;
}
