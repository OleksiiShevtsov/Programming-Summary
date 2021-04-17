#include <iostream>
using namespace std;

class Point {
	public:
		Point(int x, int y){
			this->x = x;
			this->y = y;
			point++;
			id = point;
			print();
		}
		void print(){
			cout <<"object id ("<< id <<"): ";
			cout <<"x - "<< x <<", y - "<< y << endl;
		}
		int GetId(){
			return id;
		}
		
		//����������� ����� ��� ������
		//� ������������ ������� ������
		static int GetPoint(){
			//����������� ����� �������� � ������ 
			//�� �� � ����������� ������, ������
			//������ � ��� �������� � ��������������
			//������� ������
			return point;
		}
		
		//���� ����� � ����������� ������
		//�������� � �������������� ������� ������
		//�� ����� �� �������� �� ������ ��� ���������
		static void SetPoint(Point& A, int X, int Y){
			A.x = X;
			A.y = Y;
		}
	private:
		int x;
		int y;
		int id;
		
		//����������� ���������� ������ ���� �������� 
		//�� ��������� � ��� ������� �� ��� 
		//����� ���� �������� �� ���������
		static int point;
};

int Point::point = 0;

int main(){
	
	Point A(11, 21);
	Point B(12, 22);
	Point C(13, 23);
	
	cout << endl;
	
	/*cout << A.GetId() << endl;
	cout << B.GetId() << endl;
	cout << C.GetId() << endl;*/
	
	//����� ������ ������
	cout <<"\namount of points: "<< Point::GetPoint() << endl << endl;
	
	//����� ������ ������ � �������������� ������� ������
	Point::SetPoint(A, 1, 1);
	A.print();
	//��� ���
	Point::SetPoint(B, 2, 2);
	B.print();
	
	return 0;
}
