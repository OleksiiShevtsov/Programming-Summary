#include <iostream>
#include "f_class_ship.cpp"int score = 0;
#include "data_input.cpp"
using namespace std;
int main(){
	StarShip ship_1, ship_2;
	int armor = 0, health = 0, damage = 0;
	string name = "";
	
	cout <<"Star ship 1:\n";
	name = add(name);
	armor= add(armor);
	health = add(health);
	damage = add(damage);
	
	ship_1.SetTotalName(name);
	ship_1.SetTotalArmor(armor);
	ship_1.SetTotalHealth(health);
	ship_1.SetTotalDamage(damage);
	
	cout <<"\nStar ship 2:\n";
	name = add(name);
	armor= add(armor);
	health = add(health);
	damage = add(damage);
	
	ship_2.SetTotalName(name);
	ship_2.SetTotalArmor(armor);
	ship_2.SetTotalHealth(health);
	ship_2.SetTotalDamage(damage);
	
	ship_1.characteristics();
	ship_2.characteristics();
	
	return 0;
}
