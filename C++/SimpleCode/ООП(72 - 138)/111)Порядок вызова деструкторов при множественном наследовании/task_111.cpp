#include <iostream>
#include <string>
using namespace std;

class Car{
	public:
		Car(){
			cout <<"Car constructor"<< endl;
		}
		~Car(){
			cout <<"Car destructor"<< endl;
		}
		void Drive(){
			cout <<"I'm going"<< endl;
		} 
};

class Airplain{
	public:
		Airplain(){
			cout <<"Airplain constructor"<< endl;
		}
		~Airplain(){
			cout <<"Airplain destructor"<< endl;
		}
		void Fly(){
			cout <<"I'm flying"<< endl;
		}
};

//множественное наследование
class FlyingCar : public Car, public Airplain{
	public:
		FlyingCar(){
			cout <<"FlyingCar constructor"<< endl;
		}
		~FlyingCar(){
			cout <<"FlyingCar destructor"<< endl;
		}
};

int main(){
	
	FlyingCar flyingCar;
	
	cout << endl;
	
	return 0;
}
