#include <iostream>
#include <string>
using namespace std;

//���������
class IBicycle{
	public:
		//��������� - ���������� ��������������
		//������������ � ��������
		
		//� ���������� ��� ������ ����������
		void virtual TwistTheWheel() = 0;
		void virtual Ride() = 0;
};

class SportBicycle : public IBicycle{
	public:
		void TwistTheWheel() override{
			cout <<"The method TwistTheWheel() in SportBicycle"<< endl;
		}
		void Ride() override{
			cout <<"The method Ride() in SportBicycle"<< endl;
		}
};

class SimpleBicycle : public IBicycle{
	public:
		void TwistTheWheel() override{
			cout <<"The method TwistTheWheel() in SimpleBicycle"<< endl;
		}
		void Ride() override{
			cout <<"The method Ride() in SimpleBicycle"<< endl;
		}
};

class Humen{
	public:
		void RideOn(IBicycle &bicycle){
			cout <<"\ntwist the wheel"<< endl;
			bicycle.TwistTheWheel();
			cout << endl <<"we're going"<< endl;
			bicycle.Ride();
		}
};

int main(){

	SportBicycle sportBicycle;
	SimpleBicycle simpleBicycle;
	
	
	Humen humen;
	humen.RideOn(simpleBicycle);
	humen.RideOn(sportBicycle);
	
	return 0;
}
