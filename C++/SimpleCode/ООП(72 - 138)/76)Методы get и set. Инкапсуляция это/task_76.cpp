#include <iostream>
using namespace std;

class Point{
	public:
		int GetY(){//�������� ����������
			return y * 2;
		}
		void SetY(int valueY){//������������� ��������
			y = valueY;
		}
		int GetX(){//�������� ����������
			return x;
		}
		void SetX(int valueX){//������������� ��������
			x = valueX;
		}
		void Print(){
			cout <<"x = "<< GetX() <<"\ty = "<< GetY() << endl;
		}
	private://������� ������������
		int x;
		int y;
};

int main(){	

	Point O;
	O.SetX(10);
	O.SetY(10);
	O.Print();

	return 0;	
}
