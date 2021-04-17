#include <iostream>
#include <string>
#include <fstream>

//в данном случае для записи рус. символов
#include <Windows.h>
using namespace std;

int main(){
	
	//для записи и для чтения
	fstream fs;
	//(in - считывать, out - записывать, app - добавление)
	fs.open("task_118.txt", fstream::in | fstream::out | fstream::app);
	
	if(!fs.is_open()){
		cout <<"the file did not open"<< endl;
	}else{
		string msg;
		int value;
		cout <<"file is open"<< endl;
		cout <<"enter 1 for recording"<< endl;
		cout <<"enter 2 for reading"<< endl;
		cin >> value;
		
		//запись
		if(value == 1){
			//для записи рус. символов SetConsoleCP(1251)
			//SetConsoleCP(866);
			cin >> msg;
			fs << msg <<"\n";
			
			//возвращяем кодировку 866
			//SetConsoleCP(866);
		}
		
		//чтение
		if(value == 2){
			while(!fs.eof()){
				msg  = "";
				fs >> msg;
				cout << msg << endl;
			}
		}
	}
	fs.close();
	
	return 0;
}
