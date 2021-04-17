#include <iostream>
using namespace std;

//уникальный генератор ид класса

class Point {
	
	public:
		
		static int point;
		
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
		
	private:
		int x;
		int y;
		int id;
};

int Point::point = 0;

int main(){
	
	Point A(11, 21);
	Point B(12, 22);
	Point C(13, 23);
	
	cout << endl;
	
	cout << A.GetId() << endl;
	cout << B.GetId() << endl;
	cout << C.GetId() << endl;
	
	cout <<"\namount of points: "<< Point::point << endl;
	
	return 0;
}
