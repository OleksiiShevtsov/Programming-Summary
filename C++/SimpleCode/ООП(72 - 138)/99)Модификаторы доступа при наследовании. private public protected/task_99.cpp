#include <iostream>
#include <string>
using namespace std;

class A{
	
	//�������� ����� (�, B, main)
	public:
		string msgOne = "one";
	
	//�������� ������ � �
	private:
		string msgTwo = "two";
		
	//�������� ������ � � � B
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
