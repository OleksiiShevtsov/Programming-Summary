#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:
		Point(){//����������� �� ���������
			x = 0;
			y = 0;
			cout <<"default constructor: "<< this << endl;
		}
		Point(int x, int y){//������������
			this -> x = x;
			this -> y = y;
			cout <<"constructor: "<< this << endl;
		}
		
		//���������� ����������(����������)
		Point& operator++(){
			cout <<"pref-operator++ : "<< this << endl;
			this->x++;
			this-> y += 1;
			return *this;
		}
		
		//���������� ����������(�����������)
		Point& operator++(int value/*�� ����������*/){
			cout <<"post-operator++ : "<< this << endl;
			//��������. ����������� ��� �������� ������ ��������
			Point temp(*this);
			this->x++;
			this-> y += 1;
			return *this;
		}
		
		
		Print(){
			cout << this <<": x = "<< x <<": y = "<< y << endl;
		}	
};

int main(){
	
	Point A(1, 1);
	A.Print();
	++A;//(����������)
	A++;//(�����������)����� ����� ������ ��������� ����������
	A.Print();
	
	//�� ����� ���������� ����������� ��������� �� ������������ ������������ ������

	return 0;
}
