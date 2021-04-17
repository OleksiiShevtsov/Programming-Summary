#include <iostream>
using namespace std;

class Point{
	public:
		Point(){		
			x = 0;
			y = 0;
			/*константный указатель на самого себя*/
			cout << this/*вызывает адрес обекта*/<<" - this(constructor)"<< endl;
		}
		Point(int valueX, int valueY){			
			x = valueX;
			y = valueY;
		}
		void Print(){
			cout <<"\nx = "<< x <<"\ty = "<< y << endl;
		}
		void SetY(int y){
			y = y;
		}
		void SetX(int x){
			this->x = x;//через this - можно обращатся к всем єлементам класса, внутри класса
		}
		int GetY(){
			return y;             
 		}     
		int GetX(){
			return x;
		}
	private:
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
