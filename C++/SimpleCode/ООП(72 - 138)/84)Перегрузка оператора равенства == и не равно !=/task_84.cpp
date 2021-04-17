#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:
		Point(){//конструктор по умолчанию
			x = 0;
			y = 0;
			cout <<"constructor: "<< endl;
		}
		Point(int x, int y){//конмструктор
			this -> x = x;
			this -> y = y;
			cout <<"constructor: "<< endl;
		}
       
		bool operator==(const Point &other){//перегрузка равенства
			cout <<"operator ==: "<< endl;
			return (this -> x == other.x && this -> y == other.y);	
		}
		
		bool operator!=(const Point &other){//перегрузка не равенства
			cout <<"operator !=: "<< endl;
			return !(this -> x == other.x && this -> y == other.y);	
		}
		
		Print(){
			cout <<"x = "<< x <<"\ny = "<< y << endl;
		}	
};

int main(){
	
	Point A(5, 5);
	Point B(4, 4);
	
	//без перегрузки оператора будет ошибка
	bool result1 = (A==B);
	bool result2 = (A!=B);
	
	result1?cout<<"result1 - true\n":cout<<"result1 - false\n";
	
	result2?cout<<"result2 - true\n":cout<<"result2 - false\n";
	
	return 0;
}
