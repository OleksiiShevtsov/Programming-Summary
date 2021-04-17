#include <iostream>
#include <string>
using namespace std;

//вариант когда могут быть проблемы
class Character{
	public:
		Character(){
			cout <<"Character constructor"<< endl;
		}
		
		//не сдваиваеться при 
		//виртуальном наследованием
		int HP;
};

//Виртуальное наследование
//классы ссылаються на один виртуальный класс
class Orc : public virtual Character{
	public:
		Orc(){
			cout <<"Orc constructor"<< endl;
		}
};

//Виртуальное наследование
//классы ссылаються на один виртуальный класс
class Warrior : public virtual Character{
	public:
		Warrior(){
			cout <<"Warrior constructor"<< endl;
		}
};

class OrcWarrior: public Orc, public Warrior{
	public:
		OrcWarrior(){
			cout <<"OrcWarrior constructor"<< endl;
		}
};

int main(){

	OrcWarrior orcWarrior;

	cout << endl;

	return 0;
}
