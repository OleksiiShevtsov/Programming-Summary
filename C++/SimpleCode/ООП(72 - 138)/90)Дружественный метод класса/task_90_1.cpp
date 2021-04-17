#include <iostream>
using namespace std;

class Point;

class Conclusion{
	public:
		//класс Conclusion должен быть выше класса Point
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
		
	//дружественная функция класса Conclusion
	friend void Conclusion::Print(Point& pPoint);
};

int main(){
	Point A(13, 14);
	Conclusion cons;
	cons.Print(A);
	return 0;	
}

//реализация только после main()
void Conclusion::Print(Point& pPoint){
	//для того что получить доступ
	//к закрытым полям класса Point
	//нужно єту функцию создать
	//дружественную в классе Point
	cout <<"x = "<< pPoint.x << endl;
	cout <<"y = "<< pPoint.y << endl;
}
