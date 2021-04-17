#include <iostream>
#include <string>
#include <fstream>

//� ������ ������ ��� ������ ���. ��������
#include <Windows.h>
using namespace std;

int main(){
	
	//��� ������ � ��� ������
	fstream fs;
	//(in - ���������, out - ����������, app - ����������)
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
		
		//������
		if(value == 1){
			//��� ������ ���. �������� SetConsoleCP(1251)
			//SetConsoleCP(866);
			cin >> msg;
			fs << msg <<"\n";
			
			//���������� ��������� 866
			//SetConsoleCP(866);
		}
		
		//������
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
