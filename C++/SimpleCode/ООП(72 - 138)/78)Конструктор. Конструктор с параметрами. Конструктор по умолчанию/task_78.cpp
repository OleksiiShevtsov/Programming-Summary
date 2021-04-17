#include <iostream>
using namespace std;

class Point{
	public:
		//����������� ��������� � - public: (�� �������������!)
		//���� �� ��������� ����������� �� ���������� ������� ��� �� ���������
		Point(int valueX, int valueY){//�����������
			x = valueX;
			y = valueY;
		}
		
		int GetY(){
			return y;             
 		}
		void SetY(int valueY){ 
			y = valueY;
		}     
		int GetX(){
			return x;
		}
		void SetX(int valueX){
			x = valueX;
		}
		void Print(){
			cout <<"\nx = "<< x <<"\ty = "<< y << endl;
		}
	private:
		int x;
		int y;
};

int main(){	

	Point O1(10, 10);//����������� ���������� ������ ��� �������� �������
	O1.Print();
	
	Point O2(20, 20);
	O2.Print();
	
	return 0;	
}
