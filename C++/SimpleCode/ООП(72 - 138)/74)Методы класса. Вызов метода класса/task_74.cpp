#include <iostream>
using namespace std;

class Human{
	public:
		int age;
		int growth;
		string name;
		
		void Print(){
			cout <<"age: "<< age << endl;
			cout <<"growth: "<< growth << endl;
			cout <<"name: "<< name <<"\n\n";	
		}
};

int main(){	

	Human firstHuman;
	firstHuman.age = 21;
	firstHuman.growth = 186;
	firstHuman.name = "Alex";
	firstHuman.Print();
	
	Human secondHuman;
	secondHuman.Print();
	
	return 0;	
}
