#include <iostream>
#include <string>
using namespace std;

int main(){

	int rows, cols;
	cout <<"enter ruws count: ";
	cin >> rows;
	cout <<"enter cols count: ";
	cin >> cols;
	
	//��������///////////////////////////////////////////
	int** array = new int*[rows];//���������� ������ ������� �������� ���������
	for(int i = 0; i < rows; i++){
		array[i] = new int[cols];
	}
	
	//���������//////////////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			array[i][j] = j + 1;
		}
	}
	
	//�����///////////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout <<"array["<<i<<"]["<<j<<"] = "<< array[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	//����� �������////////////////////////////////////////
	for(int i = 0; i < rows; i++){
		cout << array + i <<"["<< i <<"]"<< endl;
		for(int j = 0; j < cols; j++){
			cout << array[i] + j << endl;
		}
		cout << endl;
	}
	
	//��������///////////////////////////////////////////////
	//�������� ��������� �������
	for(int i = 0; i < rows; i++){
		delete []array[i];
	}
	//(���� ������� ������� ������ � ������. �� ����� ������ ������ � ��������� �������)
	delete [] array;
	
	return 0;	
}
