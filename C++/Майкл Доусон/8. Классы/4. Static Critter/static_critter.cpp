// ƒемонстрирует работу со статическими членами данных и функци€ми-членами
#include <iostream>
using namespace std;
class Critter{
	public:
		static int s_Total; // объ€вление статической переменной-члена
		// ќбщее количество существующих объектов Critter
		Critter(int hunger = 0);
		static int GetTotal(); //прототип статической функции-члена
	private:
		int m_Hunger;
};
int Critter::s_Total = 0;// инициализаци€ статической переменной-члена(глобальна€?)
Critter::Critter(int hunger):
m_Hunger(hunger)
{
	cout <<"A critter has been born!"<<endl;
	++s_Total;		
}
int Critter::GetTotal(){// определение статической функции-члена
	return s_Total;
}

int main(){
	cout <<"The total number of critter is: ";
	cout <<Critter::s_Total<<"\n\n";
	Critter crit1, crit2, crit3;
	cout <<"\nThe total number of critter is: ";
	cout <<Critter::GetTotal()<<"\n";
	return 0;
}
