#include<iostream>

#define DEBUG 1 //���� �������������� #define DEBUG �� 
			  //�� ��� ��� ������ #ifdef �� ����� ��������������

using namespace std;

int main(){
	
#ifdef DEBUG //��� �� ������ ������
	cout <<"start of cycle"<< endl;
#endif  //�����
	
	for(int i = 0; i < 4; i++){
		cout << i << endl;
	}
	
#ifdef DEBUG //#ifndef - �������� ��������
	cout <<"end of cycle"<< endl;
#else //#elif - �������������� �������
	cout <<"DEBUG //"<< endl;
#endif
	cout << endl;
	
#if DEBUG == 1
	cout << "DEBUG = 1" << endl;
#endif
	
	return 0;
}
