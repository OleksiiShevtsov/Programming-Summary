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
		
		//перегрузка инкремента(префиксная)
		Point& operator++(){
			cout <<"pref-operator++ : "<< this << endl;
			this->x++;
			this-> y += 1;
			return *this;
		}
		
		//перегрузка инкремента(постфиксная)
		Point& operator++(int value/*не используем*/){
			cout <<"post-operator++ : "<< this << endl;
			//конструк. копирования для хранения старых значений
			Point temp(*this);
			this->x++;
			this-> y += 1;
			return *this;
		}
		
		
		Print(){
			cout << this <<": x = "<< x <<": y = "<< y << endl;
		}	
};

int main(){
	
	Point A(1, 1);
	A.Print();
	++A;//(префиксная)
	A++;//(постфиксная)имеет самый низкий приоритет выполнения
	A.Print();
	
	//не нужен конструтар копирования поскольку не используется динамическая память

	return 0;
}
