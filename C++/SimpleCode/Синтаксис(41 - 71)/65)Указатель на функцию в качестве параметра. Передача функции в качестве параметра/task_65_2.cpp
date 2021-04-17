#include <iostream>
#include <string>
#include <cstring>

using namespace std;

//практический пример указателя на функцию

string GetDataFromBD(){//функция 1
	return "Data From BD";}


string GetDataFromWebServer(){//функция 2
	return "Data From WebServer";}


void ShowInfo(string (*func)()){//параметр єто указатель на функцию
	cout << func() << endl;
}

int main(){
	
	ShowInfo(GetDataFromWebServer);//передаем в качестве аргусента ту функцию какую нужно!
	ShowInfo(GetDataFromBD);
	
	return 0;
}
