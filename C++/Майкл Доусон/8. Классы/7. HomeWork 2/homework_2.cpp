// ????????? ???????? 3.0
// ????????? ?????? ? ??????????? ???????
#include <iostream>
using namespace std;
class Critter{
	public:
		Critter(int hunger = 0, int boredom = 0);
		void Tolk(); // ????????? ????????
		void Eat(int food = 4); // ???????
		void Play(int fun = 4); // ??????
	private:
		int m_Hunger; // ?????
		int m_Boredom; // ?????
		int GetMood() const; // ??????????
		int Eating(); // ????? ??????
		int Playing(); // ????? ?????
		void PassTime(int time = 1); // ??? ???????(?????????? ?????????)
};
Critter::Critter(int hunger, int boreddom): // ???????? ?? ?????????
	m_Hunger(hunger),
	m_Boredom(boreddom){}
inline int Critter::GetMood() const{
	return (m_Hunger + m_Boredom);
}
inline int Critter::Eating(){
	return m_Hunger;
}
inline int Critter::Playing(){
	return m_Boredom;
}
void Critter::PassTime(int time){
	m_Hunger++;
	m_Boredom++;
}
void Critter::Tolk(){
	cout <<"I'm a critter and i feel ";
	int food = Eating();
	int fun = Playing();
	int mood = GetMood();
	cout <<"\nmood: ";
	if(mood > 15){
		cout <<"mad.\n";
	}else if(mood > 10){
		cout <<"frustrated.\n";
	}else if(mood > 5){
		cout <<"okay.\n";
	}else{
		cout <<"happy.\n";
	}
	cout <<"fun: ";
	if(fun > 8){
		cout <<"bored.\n";
	}else if(fun > 5){
		cout <<"sadly.\n";
	}else if(fun > 3){
		cout <<"fine.\n";
	}else{
		cout <<"cheerful.\n";
	}
	cout <<"food: ";
	if(food > 8){
		cout <<"hungry, feed me.\n";
	}else if(food > 5){
		cout <<"grumbles the belly.\n";
	}else if(food > 3){
		cout <<"fine.\n";
	}else{
		cout <<"full.\n";
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
		cout <<"3 - Play with your critter\n";
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
