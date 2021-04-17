#include "class_ship.cpp"
void StarShip::SetTotalName(string name_add){
	name = name_add;
}
void StarShip::SetTotalArmor(int armor_add){
	armor = armor_add;
}
void StarShip::SetTotalHealth(int health_add){
	health = health_add;
}
void StarShip::SetTotalDamage(int damage_add){
	damage = damage_add;
}
string StarShip::GetTotalName(){
	return name;
}
int StarShip::GetTotalArmor(){
	return armor;
}
int StarShip::GetTotalHealth(){
	return health;
}
int StarShip::GetTotalDamage(){
	return damage;
}
void StarShip::characteristics(){
	cout <<"\nStar ship name '"<<GetTotalName()<<"'\n";
	cout <<"Star ship armor ("<<GetTotalArmor()<<")\n";
	cout <<"Star ship health "<<GetTotalHealth()<<"XP\n";
	cout <<"Star ship damage <"<<GetTotalDamage()<<">\n\n";
}
