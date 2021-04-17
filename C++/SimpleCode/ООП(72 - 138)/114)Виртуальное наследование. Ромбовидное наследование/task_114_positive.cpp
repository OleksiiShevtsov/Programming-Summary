#include <iostream>
#include <string>
using namespace std;

//вариант когда все нормально
class Component{
	public:
		Component(string companyName){
			cout <<"part designer"<< endl;
			this->companyName = companyName;
		}	
		string companyName;
		
		~Component(){
			cout <<"destruktor"<< endl;
		}
};

class GPU : public Component{
	public:
		GPU(string companyName): Component(companyName){
			cout <<"GPU Designer"<< endl;
		}
};

class Memory : public Component{
	public:
		Memory(string companyName): Component(companyName){
			cout <<"Memory Designer"<< endl;
		}
};

class GraphicCard : public GPU, public Memory{
	public:
		GraphicCard(string GPUCompanyName, string MemoryCompanyName): 
			Memory(MemoryCompanyName), 
			GPU(GPUCompanyName){
			cout <<"graphic designer"<< endl;
		}
};

int main(){

	GraphicCard graphicCard("AMD", "Samsung ");

	cout << endl;

	return 0;
}
