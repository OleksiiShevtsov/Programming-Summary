#include <iostream>
#include <string>

using namespace std;

class Human{
	public:
		//��������
		int age;
		int growth;
		string name;
};

int main(){
	
	Human firstHuman;//��������� ������ ��� ������
	
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
