#include <iostream>
using namespace std;

int glob; //���� - �������� �� ��������� 0

void f(int glob){
	glob++;
}
int main(){	
	f(1);
	cout <<"glob: "<< glob << endl;
	//����� - �������� �� ��������� �����
	int y = 10; 
	cout <<"y: "<< y << endl;
	return 0;	
}
