#include <iostream>
#include <string>
using namespace std;

class Point{
	public:
		Point(){
			x = y = z = 0;
		}
		Point(int x, int y, int z){
			this->x = x;
			this->y = y;
			this->z = z;	
		}
	private:
		int x;
		int y;
		int z;
};

//���������� �����(���������� ��� ������)
//����� ��������� template ����� ����� �������
//��� ����� �������
template<typename T1, typename T2>
class MyAlex{
	public:
		MyAlex(T1 value_1, T2 value_2){
			this->value_1 = value_1;
			this->value_2 = value_2;
		}
		void DataTypeSize(){
			cout <<"value 1: "<< sizeof(value_1) << endl;
			cout <<"value 2: "<< sizeof(value_2) << endl;
		}
	private:
		//���������� ��� ������
		T1 value_1;
		T2 value_2;
};

int main(){

	Point a;
	int b;
	
	//��������� � ����� ���� ������ ��������
	MyAlex<Point, int> alex(a, b);
	alex.DataTypeSize();
	
	return 0;
}
