#include <iostream>
#include <string>
using namespace std;

//Агрегация и Композиция - использываение 
//одного класса в другом

//Агрегация - использывание вложенного класса 
//в других местах

//Композиция - использование вложенного класа 
//только для нужд внешнего класса

//*Агрегация - пример*

class Cap/*кепка*/{
	public:
		string GetColor(){
			return color;
		}
	private:
		string color = "red";
};

class Model/*маникен*/{
	public:
		void InspectModelCap(){
			cout <<"cap is "<< cap.GetColor() << endl;
		}
	private:
		Cap cap;
};

class Human/*человек*/{
	public:
		void Think()/*подумать*/{
			brain.Think();
		}
		
		void InspectTheCap(){
			cout <<"my cap is "<< cap.GetColor() << endl;
		}
	private:
		
		//*Композиция - пример*
		
		class Brain/*мозг*/{
			public:
				void Think()/*подумать*/{
					cout <<"I think"<< endl;
				}
		};
	
		Cap cap;
 		Brain brain;
};

int main(){

	//*Композиция - пример*
	Human human;
	//думает не человек а мозг
	//патерн программирование - делегироваине
	human.Think();
	
	//*Агрегация - пример*
	human.InspectTheCap();
	
	cout << endl;
	Model model;
	model.InspectModelCap();
	
	return 0;
}
