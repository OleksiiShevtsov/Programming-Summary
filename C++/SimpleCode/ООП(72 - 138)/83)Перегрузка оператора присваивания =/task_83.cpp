#include <iostream>
using namespace std;

class MyClass{
		int Size;
		char num;
	public:
		
		int* data;
		
		MyClass(int size, const char num){//�����������
			this -> num = num;
			this -> Size = size;
			this -> data = new int[size];
			for(int i = 0; i < size; i++){
				
			}
			cout << num <<" the constructor: "<< this << endl;
		}
		
		MyClass(const MyClass &other){//����������� �����������
			this -> Size = other.Size;
			this -> data = new int[other.Size];
			for(int i = 0; i < other.Size; i++){
				this -> data[i] = other.data[i];
			}
			cout << this -> num <<" the copy constructor: "<< this << endl;
		}
		
		//����� ������� ������ ��� ����������� 
		//����� ����� ������ ��� ���� �����
		MyClass& operator = (const MyClass &other){//�������� ������������
			cout << this -> num <<" the operator =: "<< this << endl;
			this -> Size = other.Size;
			delete[] this -> data;
			this -> data = new int[other.Size];
			for(int i = 0; i < other.Size; i++){
				this -> data[i] = other.data[i];
			}
			return *this;
		}
		
		~MyClass(){//����������
			cout << this -> num <<" the destructor: "<< this << endl;
			delete[] data;
		}
};

int main(){	
	
	//my = my2 - ���� ����� - my1.operator = (my2); 
	//my1.operator = (my2) - ������ ����������!
	//MyClass � = �;- ������������ - MyClass �(�);
	MyClass my1(3, '1');
	MyClass my2(4, '2');
	MyClass my3(5, '3');
	cout <<"text 1"<< endl; 
	my2 = my3;
	cout <<"text 2"<< endl; 
	my1 = my2;
	cout <<"text 3"<< endl; 
	
	return 0;	
}
