#include <iostream>
using namespace std;

class Point{
	public:
		//перегрузка с конструктором по умалчанию (полиморфизм)
		Point(){
			x = 0;
			y = 0;
		}
		
		Point(int valueX, int valueY){	
			x = valueX;
			y = valueY;
		}
		
		Point(int valueX, bool boolean){
			x = valueX;
			if(boolean){
				y = 1;	
			}
			else{
				y = 0;
			}
		}
		
		void Print(){
			cout <<"\nx = "<< x <<"\ty = "<< y << endl;
		}
		int GetY(){
			return y;             
 		}
		void SetY(int valueY){
			y = valueY;
		}     
		int GetX(){
			return x;
		}
		void SetX(int valueX){
			x = valueX;
		}
	private:
		int x;
		int y;
};

int main(){	

	Point O1(10, 10);
	O1.Print();
	
	Point O2;
	O2.Print();
	
	Point O3(10, true);
	O3.Print();
	
	return 0;	
}
