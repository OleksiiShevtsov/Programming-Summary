#include <iostream>
#include <string>

//���������� ��� ������ � �������
#include <fstream>
using namespace std;

int main(){
	
	//��� ������
	ifstream fin;
	
	fin.open("task_116.txt");
	
	if(fin.is_open()){cout <<"file is open"<< endl;}
	else{cout <<"the file did not open"<< endl;}
	
	//�� ��������� 
	char ch;
	while(fin.get(ch)){
		cout << ch;
	}
	
	//����� �������
	string str;
	while(!fin.eof(/*�������� �� ���������� � �����*/)){

		str = "";//�������� ������ ������(�� ���������� ������)
		
		fin >> str;
		cout << str << endl;
	}
	
	//��������� �� �������
	getline(fin, str);
	cout << str << endl;
	
	fin.close();
	
	return 0;
}
