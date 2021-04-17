#include <iostream>
using namespace std;

class Point;//прототип класса

class Point2{
	private:
		int Data = 0;
	friend void Change(Point& value, Point2& value2);
};
class Point{
	public:
		Point(){
			x = 0;
			y = 0;
		}
		void Print(){
			cout <<"x = "<< x <<endl;
			cout <<"y = "<< y <<endl;
		}
	private:
		int x;
		int y;
		
	//прототип дружественной функции
	//может работать с закрытыми пол€ми
	//не вли€ют модификаторы доступа
	friend void Change(Point& value, Point2& value2);
};

//реализаци€ дружественной функции
//может быть дружественна€ дл€ нескольких классов
void Change(Point& value, Point2& value2){
	
	value.x = 10;
	value.y = 10;
	value2.Data = 10;
	cout <<"Data = "<< value2.Data <<endl;
	
	//this в друж. функции не работает
}

int main(){
	Point2 B;
	Point A;
	A.Print();
	//вывод дружественной функции
	Change(A, B);
	A.Print();
	
	return 0;	
}
