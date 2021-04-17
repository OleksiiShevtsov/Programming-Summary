#include <iostream>
using namespace std;

class Point{
	public:
		int GetY(){//получить информацию
			return y * 2;
		}
		void SetY(int valueY){//устанавливает значение
			y = valueY;
		}
		int GetX(){//получить информацию
			return x;
		}
		void SetX(int valueX){//устанавливает значение
			x = valueX;
		}
		void Print(){
			cout <<"x = "<< GetX() <<"\ty = "<< GetY() << endl;
		}
	private://правило инкапсул€ции
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
