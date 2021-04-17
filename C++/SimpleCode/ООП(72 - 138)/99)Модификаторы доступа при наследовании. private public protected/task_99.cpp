#include <iostream>
#include <string>
using namespace std;

class A{
	
	//доступен везде (А, B, main)
	public:
		string msgOne = "one";
	
	//доступен только в А
	private:
		string msgTwo = "two";
		
	//доступен только в А и B
	protected:
		string msgThree = "three";
};

class B : public A{
	public:
		void PrintMsg(){
			cout << msgOne << endl;
		}
};

int main(){
	
	B b;
	b.PrintMsg();
	
	return 0;
}
