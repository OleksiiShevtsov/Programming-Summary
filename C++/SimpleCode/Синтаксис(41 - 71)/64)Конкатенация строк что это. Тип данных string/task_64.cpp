#include <iostream>
#include <string>//��� ����� (�����)
#include <cstring>//c ������

using namespace std;

int main(){
	//��������� �
	char resultStr[255] = {};
	
	char str1[255] = "Hello";
	char str2[255] = "World";
	
	cout << str1 << endl;
	
	strcat(str1 ,str2);//�� 2� ����������� � 1�
	strcat(resultStr ,str1);
	
	cout << str1 << endl;
	cout << resultStr << endl;
	//��������� �++ - #include <string>
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
