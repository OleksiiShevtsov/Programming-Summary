#include <iostream>
#include <string>
using namespace std;

class Human{
	public:
		Human(string Name){
			this->Name = Name;
			this->age = 0;
			this->Weight = 0;
		}
		//Вызов другого конструктора
		//он работает со своей логикой
		//и с теми членами данных которые 
		//ему передали
		Human(string Name, int age):Human(Name){
			this->age = age;
			this->Weight = 0;
		}
		Human(string Name, int age, int Weight):Human(Name, age){
			this->Weight = Weight;
		}
		void Print(){
			cout <<"Name: "<< Name << endl;
			cout <<"Age: "<< age << endl;
			cout <<"Weight: "<< Weight << endl;
		}
	private:
		string Name;
		int age;
		int Weight;
};

int main(){
	
	Human human("Alex", 21, 70);
	human.Print();
	
	return 0;
}
