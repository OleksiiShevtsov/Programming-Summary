#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//������� ����� auto ����������
	//���� ����� ��� ������ � ����������
	//�� ����� ����� �� ����������������
	
	//�� �������� � Dev C++
	
	//auto i = 10;
	//auto d = 10.50;
	//auto s = "string";
	
	vector<int> myVector;
	myVector.push_back(10);
	
	/*�����������*/vector<int>::iterator iter1 = myVector.begin();
	/*�����������*/auto iter2 = myVector.begin();
	
	return 0;
}
