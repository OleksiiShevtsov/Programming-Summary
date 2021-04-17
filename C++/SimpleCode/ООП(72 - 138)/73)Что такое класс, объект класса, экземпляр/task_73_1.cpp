#include <iostream>
#include <string>

using namespace std;

class Human{
	public:
		//свойства
		int age;
		int growth;
		string name;
};

int main(){
	
	Human firstHuman;//Їкземпл€р класса Їто обьект
	
	firstHuman.age = 21;
	firstHuman.growth = 186;
	firstHuman.name = "Alex";
	
	cout <<"age: "<< firstHuman.age << endl;
	cout <<"growth: "<< firstHuman.growth << endl;
	cout <<"name: "<< firstHuman.name << endl;
	
	Human secondHuman;
	
	secondHuman.age = 56;
	secondHuman.growth = 176;
	secondHuman.name = "Jim";
	
	cout <<"\nage: "<< secondHuman.age << endl;
	cout <<"growth: "<< secondHuman.growth << endl;
	cout <<"name: "<< secondHuman.name << endl;
	
	return 0;
}
