#include <iostream>
using namespace std;

class Point{
	public:
		Point();
		~Point();
		void Print();
	private:
		int x;
		int y;
};
Point::Point(){
	x = 0; y = 0;
}
Point::~Point(){
}
void Point::Print(){
	cout <<"x = "<< x << endl;
	cout <<"y = "<< y << endl;
}

int main(){
	Point A;
	A.Print();
	
	return 0;	
}
