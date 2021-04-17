#include <iostream>
#include <string>

//библеотека для работы с файлами
#include <fstream>
using namespace std;

int main(){
	
	//Для чтения
	ifstream fin;
	
	fin.open("task_116.txt");
	
	if(fin.is_open()){cout <<"file is open"<< endl;}
	else{cout <<"the file did not open"<< endl;}
	
	//по символьно 
	char ch;
	while(fin.get(ch)){
		cout << ch;
	}
	
	//через строчку
	string str;
	while(!fin.eof(/*проверка на содержание в файле*/)){

		str = "";//затераем старые данные(от повторного вывода)
		
		fin >> str;
		cout << str << endl;
	}
	
	//считывает по строчно
	getline(fin, str);
	cout << str << endl;
	
	fin.close();
	
	return 0;
}
