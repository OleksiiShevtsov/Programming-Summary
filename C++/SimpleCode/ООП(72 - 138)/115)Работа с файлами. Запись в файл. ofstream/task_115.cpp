#include <iostream>
#include <string>

//библеотека для работы с файлами
#include <fstream>
using namespace std;

int main(){
	
	//string path = "task_115.txt";
	
	//Для записи
	ofstream fout;
	
	//создание и открытие файла(название, добаить данные(без затирания старых данных))
	fout.open("task_115.txt", ofstream::app);
	
	//получилось ли открыть
	cout << fout.is_open() << endl;
	
	//запись в вайл
	fout << "happened";
	
	//запись
	string str;
	cin >> str;
	fout << str;
	
	//закрыть файл(освобождение ресурсов)
	fout.close();
	
	return 0;
}
