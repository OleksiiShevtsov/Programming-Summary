#include <iostream>
using namespace std;

class MyClass{
	
	int* data;//�����. ������(������ ��� ��������)
	
	public:
		MyClass(int size){
			data = new int[size];//�����. �����
			for(int i = 0; i < size; i++){
				data[i] = i;
			}
			cout <<"size: "<< size <<" - the constructor called"<< endl;
		}
		~MyClass(){//����������(�� �� ��������� ����������!, � ������ ����� ���� ���� ����������)
			//��� ��� ������� ������
			cout <<"data: "<< data <<" - called destructor"<< endl;
			delete[] data;
		}
};

int main(){	
	
	{
		MyClass my1(1);
		MyClass my2(2);
	}//���������� ����������� � ����� �������� ������� ���������
	
	cout <<"\ntext\n"<< endl;
	
	return 0;	
}
