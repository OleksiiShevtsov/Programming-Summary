#include <iostream>
using namespace std;

class Point{
	//protected://доступно только внутри и при наследовании
	//по умолчанию стоит - private;
	public:
		int x;
		
		void PrintX(){
			cout <<"x = "<< x << endl;
			PrintYZ();
		}
	private:
		int y = 20;
		int z = 25;
		
		void PrintYZ(){
			cout <<"y = "<< y << endl;
			cout <<"z = "<< z << endl;
		}
};

int main(){	

	Point O;
	O.x = 10;
	O.PrintX();

	return 0;	
}
