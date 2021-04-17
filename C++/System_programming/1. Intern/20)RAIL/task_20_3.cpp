#include <iostream>
#include <string>
using namespace std;

//RAIL
class Base{
	public:
		int GetVal(){
			return m_val;
		}
		virtual ~Base(){}
		
	private:
		int m_val = 100;
};

class Derived : virtual public Base{
	public:
		string GetName(){
			return m_name;
		}
	private:
		string m_name = "name";
};

int main() {

	Derived* base = new Derived;
	
	base->GetVal();
	base->GetName();
	
	return 0;
}
