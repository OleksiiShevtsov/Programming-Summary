#include <iostream>
using namespace std;

class Point {
	
	public:
		
		static int point;
		
		Point(int x, int y){
			this->x = x;
			this->y = y;
			
			point++;
			print();
		}
		
		void print(){
			cout <<"point-"<< point <<": ";
			cout <<"x - "<< x <<", y - "<< y << endl << endl;
		}
		
	private:
		int x;
		int y;
};

//����������� ����� ����������������
//��� ������ ��� ����� �������:
int Point::point = 0;

int main(){
	
	Point A(11, 21);
	Point B(12, 22);
	Point C(13, 23);
	
	//��������� �������� � ����������� ����������
	//�� ����� ��������� ������
	cout <<"amount of points: "<< Point::point << endl;
	return 0;
}
