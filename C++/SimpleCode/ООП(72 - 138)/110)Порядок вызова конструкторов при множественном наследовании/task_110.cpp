#include <iostream>
#include <string>
using namespace std;

class Car{
	public:
		Car(){
			cout <<"Car constructor"<< endl;
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
};

int main(){
	
	//Сначала создаються конструкторы 
	//базовых класов затем конструктор
	//наследник
	FlyingCar flyingCar;
	
	return 0;
}
