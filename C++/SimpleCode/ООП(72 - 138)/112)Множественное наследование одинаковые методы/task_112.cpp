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
		
		//Одинаково названый метод в двух
		//разных классов
		void Motion(){
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
		
		//Одинаково названый метод в двух
		//разных классов
		void Motion(){
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
	
	//приведение типов к классу Car
	((Car)flyingCar).Motion();
	//приведение типов к классу Airplain
	((Airplain)flyingCar).Motion();
	
	//или через пространство имен
	flyingCar.Car::Motion();
	
	cout << endl;
	
	return 0;
}
