#include <iostream>
using namespace std;

int main(){
	
	int* px = new int;
	cout << px << endl;
	cout << *px << endl;
	*px = 10;
	cout << *px << endl;
	
	delete px;
	
	//������ ��������� 
	
	//px = NULL;//������� ��������� (px = 0; - ���� �����)
	
	if (px != NULL){//��������
		cout << *px << endl;
	}
	
	//nullptr
	//px = nullptr; (�� �������� � Dev-C++)!!!(����� ������������ nullptr)
	
	//���� ����� delete ��������� ��������� �� ���������� ������ ������!!!
	
	return 0;	
}
