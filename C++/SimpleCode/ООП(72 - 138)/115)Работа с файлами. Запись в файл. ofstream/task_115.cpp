#include <iostream>
#include <string>

//���������� ��� ������ � �������
#include <fstream>
using namespace std;

int main(){
	
	//string path = "task_115.txt";
	
	//��� ������
	ofstream fout;
	
	//�������� � �������� �����(��������, ������� ������(��� ��������� ������ ������))
	fout.open("task_115.txt", ofstream::app);
	
	//���������� �� �������
	cout << fout.is_open() << endl;
	
	//������ � ����
	fout << "happened";
	
	//������
	string str;
	cin >> str;
	fout << str;
	
	//������� ����(������������ ��������)
	fout.close();
	
	return 0;
}
