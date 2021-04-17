#include <iostream>
using namespace std;

class MyClass{
		
		int Size;
	public:
		
		int* data;
		
		MyClass(int size){
			this -> Size = size;
			this -> data = new int[size];
			for(int i = 0; i < size; i++){
				data[i] = i;
			}
			cout <<"the constructor "<< this << endl;
		}
		//��� ��������� ������ ��� ��������� �������� ������ ��������� ����������� �����������
		MyClass(const MyClass &other/*other ��� ������ ��������� ������*/){
			//this -> data = other.data //��� �� ���������
			this -> Size = other.Size;
			this -> data = new int[other.Size];
			for(int i = 0; i < other.Size; i++){
				//����������� ������� ������� �� ������
				this -> data[i] = other.data[i];
			}
			cout <<"the copy constructor "<< this << endl;
		}
		
		~MyClass(){
			cout <<"the destructor "<< this << endl;
			delete[] data;
		}
};
/*MyClass Func2(){
	cout <<"the Func2"<< endl;
	MyClass my(10);
	return my;
}
void Func(MyClass my){//��������� �����
	cout <<"the Func"<< endl;
}*/

int main(){	
	
	MyClass my(1);//����� ������
	MyClass my2(my);//��� ����� �� � ������ �������
	
	return 0;	
}
