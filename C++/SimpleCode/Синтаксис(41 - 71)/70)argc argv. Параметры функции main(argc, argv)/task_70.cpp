#include<iostream>

using namespace std;
	
	//�������� ���������� ����� ��������� ������
int main(int argc, char* argv[]){
	
	setlocale(0, ""); 
	
	for(int i = 0; i < argc; i++){
		cout <<"argv["<< i <<"] - "<< argv[i] << endl;
	}
	
	int exit;
	cin >> exit; 
	return 0;
}	
