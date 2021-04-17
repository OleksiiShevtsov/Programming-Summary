#include <iostream>
#include <string>
using namespace std;

class Car{
	public:
		void Drive(){
			cout <<"I'm going"<< endl;
		} 
};

class Airplain{
	public:
		void Fly(){
			cout <<"I'm flying"<< endl;
		}
};

//множественное наследование
class FlyingCar : public Car, public Airplain{
};

int main(){
	
	FlyingCar flyingCar;
	flyingCar.Drive();
	flyingCar.Fly();
	
	Car *pcar = &flyingCar;
	Airplain *pairplain = &flyingCar;
	
	cout << pcar << endl;
	cout << pairplain << endl;
	
	return 0;
}
