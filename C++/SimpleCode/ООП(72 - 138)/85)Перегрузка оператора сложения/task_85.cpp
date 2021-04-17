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
       	
       	//���������� ���������
		bool operator==(const Point& other){
			cout <<"operator== : "<< this << endl;
			return (this -> x == other.x && this -> y == other.y);	
		}
		
		//���������� �� ���������
		bool operator!=(const Point& other){
			cout <<"operator!= : "<< this << endl;
			return !(this -> x == other.x && this -> y == other.y);	
		}
		
		//���������� ��������
		Point operator+(const Point& other){
			cout <<"operator+ : "<< this << endl;
			Point temp;
			temp.x = this-> x + other.x;
			temp.y = this-> y + other.y;
			return temp;
		}
		
		Print(){
			cout << this <<": x = "<< x <<": y = "<< y << endl;
		}	
};

int main(){
	
	Point A(6, 6);
	Point B(4, 4);
	A.Print();
	B.Print();
	//�� ����� ���������� ����������� ��������� �� ������������ ������������ ������
	Point C = A + B;
	C.Print();

	
	return 0;
}
