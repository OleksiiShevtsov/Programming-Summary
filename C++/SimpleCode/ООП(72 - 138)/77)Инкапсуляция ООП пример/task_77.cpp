include <iostream>
using namespace std;

class CoffeeGrinder{//пример с кофемолкой (инкапсуляция)
	public:
		void Start(){
			if(ChekVoltage()/*bool - значит условие не нужно*/){
				cout <<"start!"<< endl;
			}
			else {
				cout <<"no!"<< endl;
			}
		}
	private:
		bool ChekVoltage(){
			return true;
		}
};

int main(){	
	CoffeeGrinder a;
	a.Start();


	return 0;	
}
