// Имитирует заботу о виртуальном питомце
#include <iostream>
using namespace std;
class Critter{
	public:
		Critter(int hunger = 0, int boredom = 0);
		void Tolk(); // состояние тамагочи
		void Eat(int food = 4); // кормить
		void Play(int fun = 4); // играть
	private:
		int m_Hunger; // голод
		int m_Boredom; // скука
		int GetMood() const;// настроение
		void PassTime(int time = 1); // ход времени(снижаються параметры)
};
Critter::Critter(int hunger, int boreddom)://значение по умолчанию
	m_Hunger(hunger),
	m_Boredom(boreddom){}
inline int Critter::GetMood() const{
	return (m_Hunger + m_Boredom);
}
void Critter::PassTime(int time){
	m_Hunger++;
	m_Boredom++;
}
void Critter::Tolk(){
	cout <<"I'm a critter and i feel ";
	int mood = GetMood();
	if(mood > 15){
		cout <<"mad.\n";
	}else if(mood > 10){
		cout <<"frustrated.\n";
	}else if(mood > 5){
		cout <<"okay.\n";
	}else{
		cout <<"happy.\n";
	}
	PassTime();
}
void Critter::Eat(int food){
	cout <<"Brruppp.\n";
	m_Hunger -= food;
	if(m_Hunger < 0){
		m_Hunger = 0;
	}
	PassTime();
}
void Critter::Play(int fun){
	cout <<"Wheee!\n";
	m_Boredom -= fun;
	if(m_Boredom < 0){
		m_Boredom = 0;
	}
	PassTime();
}
int main(){
	Critter crit;
	crit.Tolk();
	int choice;
	do{
		cout <<"\nCritter Caretaker\n\n";
		cout <<"0 - Quit\n";
		cout <<"1 - Listen to your critter\n";
		cout <<"2 - Feed your critter\n";
		cout <<"3 - Play with your critter\n\n";
		cout <<"Choice: ";
		cin >>choice;
		switch (choice){
			case 0: cout <<"Good-bye.\n"; break;
			case 1: crit.Tolk(); break;
			case 2: crit.Eat(); break;
			case 3: crit.Play(); break;
			default: cout <<"\nSorry. but "<<choice<<" isn't a vald choice.\n";
		}
	}while(choice != 0);
	return 0;
}
