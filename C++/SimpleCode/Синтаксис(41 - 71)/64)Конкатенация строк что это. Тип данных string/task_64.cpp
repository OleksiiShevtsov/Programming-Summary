#include <iostream>
#include <string>//для строк (класс)
#include <cstring>//c строки

using namespace std;

int main(){
	//синтаксис С
	char resultStr[255] = {};
	
	char str1[255] = "Hello";
	char str2[255] = "World";
	
	cout << str1 << endl;
	
	strcat(str1 ,str2);//из 2М добавляется в 1М
	strcat(resultStr ,str1);
	
	cout << str1 << endl;
	cout << resultStr << endl;
	//синтаксис С++ - #include <string>
	string Str1 = "Hello";
	string Str2 = "World";
	string result;
	result = Str1 +" "+ Str2 +" !!!";
	cout << result << endl;
	cout << endl;
	
	string name = "Alex";
	string surname = "Shevtsov";
	string res;
	res = "surname:\t" + surname + "\nname:\t\t" + name;
	cout << res << endl;
	
	return 0;
}
