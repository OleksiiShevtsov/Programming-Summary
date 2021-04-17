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
		//override показывает что функция
		//не переопределяет или наоборот,
		//override не обязательна
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
	//базовый класс может ссылаться на 
	//на производный класс
	Gun* gun = &submachineGun;
	gun->Shoot();
	
	cout << endl;
	//пример
	Player player;
	player.Shoot(&submachineGun);
	
	return 0;
}
