include <iostream>
using namespace std;

class CoffeeGrinder{//������ � ���������� (������������)
	public:
		void Start(){
			if(ChekVoltage()/*bool - ������ ������� �� �����*/){
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
