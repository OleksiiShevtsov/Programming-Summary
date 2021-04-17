#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		A(){
			msg = "NULL";
		}
		A(string msg){
			this->msg = msg;
		}
		void PrintMsg(){
			cout << msg << endl;
		}
	private:
		string msg;
};

class B : public A{
	public:
		//через : вызываем конкретнй конструктор 
		//по умолчанию вот так - :A()
		B(string msg):A(msg){
		}
};

int main(){
	
	B b("text");
	b.PrintMsg();
	
	return 0;
}
