#include <iostream>
using namespace std;

int main(){
	
	int* px = new int; //��������� ������� � ����������� ������ (������������ ������)
	cout << px << endl; //�����
	cout << *px << endl;//������
	
	*px = 10; // ���������� ����������
	cout << *px << endl;
	
	delete px; //������ ����. ������ �� ����� ������ (C#, Java - ������ ������ ����)
	
	return 0;	
}
