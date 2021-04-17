#include <iostream>
using namespace std;

class Point;

class Conclusion{
	public:
		//����� Conclusion ������ ���� ���� ������ Point
		void Print(Point& pPoint);
	private:
};

class Point{
	public:
		Point(int x, int y){
			this->x = x;
			this->y = y;
		}
	private:
		int x = 0;
		int y = 0;
		
	//������������� ������� ������ Conclusion
	friend void Conclusion::Print(Point& pPoint);
};

int main(){
	Point A(13, 14);
	Conclusion cons;
	cons.Print(A);
	return 0;	
}

//���������� ������ ����� main()
void Conclusion::Print(Point& pPoint){
	//��� ���� ��� �������� ������
	//� �������� ����� ������ Point
	//����� ��� ������� �������
	//������������� � ������ Point
	cout <<"x = "<< pPoint.x << endl;
	cout <<"y = "<< pPoint.y << endl;
}
