#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int GetDelimetersCount(const char* str, char delimeter) {
	int c = 0;
	for (int i = 0; str[i]; ++i) {
		if (str[i] == delimeter) {
			++c;
		}
	}
	return c;
}
char** Split(const char* str, char delimeter) {
	int delimetersCount = GetDelimetersCount(str, delimeter);
	const int arraySize = delimetersCount + 2;
	char** arr = new char* [arraySize];
	const int strLen = strlen(str);
	char* resStr = new char[strLen]; // "111\x0222222\x033\x0444444444\x0"
	int prevDelimeter = 0;
	int currentDelimeter = 0;
	for (int i = 0; i < strLen + 1; ++i) {
		if (str[i] == delimeter) {
			resStr[i] = 0;
			arr[currentDelimeter++] = &resStr[prevDelimeter];
			prevDelimeter = i + 1;
		}
		else {
			resStr[i] = str[i];
		}
	}
	arr[currentDelimeter] = &resStr[prevDelimeter];
	arr[arraySize - 1] = 0;
	return arr;
}

int main()
{
	char** arr = Split("1-12-123-1234-12345-", '-');
	for (int i = 0; arr[i]; ++i) {
		std::cout << arr[i] << std::endl;
	}
	
	return 0;
}

