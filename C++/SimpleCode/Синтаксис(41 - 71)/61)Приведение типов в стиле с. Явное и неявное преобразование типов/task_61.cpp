#include <iostream>
#include <string>//��� ����� (�����)
#include <cstring>//c ������

using namespace std;

int main(){
	//�������������� ����� � �
	
	double d = 33.33;
	cout <<"d = "<< d << endl;
	
	//����� ��������������
	cout << d <<" -> int: "<< (int)d << endl;//�������������� double � int
	cout << d <<" -> bool: "<< (bool)d << endl;//�������������� double � bool
	cout << d <<" -> char: "<< char(d) << endl;//�������������� double � char
	
	//�� ����� ��������������
	int i = d;
	cout <<"\ni = "<< i << endl;
	
	//���������� 33.33 -> 33
	//������.
	int x = 10; double y = 2.2;
	cout << x/y << endl;//��������� ����� double
	
	cout << (int)(x/y) << endl;//����� � int
	
	return 0;
}
