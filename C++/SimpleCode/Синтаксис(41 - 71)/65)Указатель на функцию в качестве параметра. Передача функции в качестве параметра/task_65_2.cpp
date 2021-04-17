#include <iostream>
#include <string>
#include <cstring>

using namespace std;

//������������ ������ ��������� �� �������

string GetDataFromBD(){//������� 1
	return "Data From BD";}


string GetDataFromWebServer(){//������� 2
	return "Data From WebServer";}


void ShowInfo(string (*func)()){//�������� ��� ��������� �� �������
	cout << func() << endl;
}

int main(){
	
	ShowInfo(GetDataFromWebServer);//�������� � �������� ��������� �� ������� ����� �����!
	ShowInfo(GetDataFromBD);
	
	return 0;
}
