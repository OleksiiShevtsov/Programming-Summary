#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:
		Point(){//конструктор по умолчанию
			x = 0;
			y = 0;
			cout <<"default constructor: "<< this << endl;
		}
		Point(int x, int y){//конмструктор
			this -> x = x;
			this -> y = y;
			cout <<"constructor: "<< this << endl;
		}
       	
       	//перегрузка равенства
		bool operator==(const Point& other){
			cout <<"operator== : "<< this << endl;
			return (this -> x == other.x && this -> y == other.y);	
		}
		
		//перегрузка не равенства
		bool operator!=(const Point& other){
			cout <<"operator!= : "<< this << endl;
			return !(this -> x == other.x && this -> y == other.y);	
		}
		
		//перегрузка сложения
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
	//не нужен конструтар копирования поскольку не используется динамическая память
	Point C = A + B;
	C.Print();

	
	return 0;
}
