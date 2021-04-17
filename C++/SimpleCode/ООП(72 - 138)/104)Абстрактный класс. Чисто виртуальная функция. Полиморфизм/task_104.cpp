#include <iostream>
#include <string>
using namespace std;

//абстрактный класс
class Weapon{
	public:
		//чисто вертуальная функция
		//определение абстрактного класса
		virtual void Shoot() = 0;
		
		void AddWeapons(){
			cout <<"Weapons"<< endl;
		}
};

class Gun : public Weapon{
	public:
		virtual void Shoot() override{
			cout <<"\aBANG"<< endl;
		}
};

class SubmachineGun : public Gun{
	public:
		void Shoot() override{ 
			cout <<"\abang \abang \abang"<< endl;
		}
};

class Bazooka : public Weapon{
	public:
		void Shoot() override{
			cout <<"\a\aBADABUM"<< endl;
		}
};

class Knife : public Weapon{
	public:
		void Shoot() override{
			cout <<"VJUH"<< endl;
		}
};

class Player{
	public:
		void Shoot(Weapon *weapon){
			weapon->Shoot();	
		}
};

int main(){
	
	Gun gun;
	SubmachineGun submachineGun;
	Bazooka bazooka;
	Knife knife;
	
	Player player;
	player.Shoot(&gun);
	player.Shoot(&submachineGun);
	player.Shoot(&bazooka);
	player.Shoot(&knife);
	
	knife.AddWeapons();
	
	return 0;
}
