#include <iostream>
#include <string>
using namespace std;

class Gun{
	public:
		virtual void Shoot(){
			cout <<"\aBANG!"<< endl;
		}
};

class SubmachineGun : public Gun{
	public:
		//override ���������� ��� �������
		//�� �������������� ��� ��������,
		//override �� �����������
		void Shoot() override{
			cout <<"\abang \abang \abang"<< endl;
		}
};

class Player{
	public:
		void Shoot(Gun *gun){
			gun->Shoot();	
		}
};

int main(){
	
	SubmachineGun submachineGun;
	//������� ����� ����� ��������� �� 
	//�� ����������� �����
	Gun* gun = &submachineGun;
	gun->Shoot();
	
	cout << endl;
	//������
	Player player;
	player.Shoot(&submachineGun);
	
	return 0;
}
