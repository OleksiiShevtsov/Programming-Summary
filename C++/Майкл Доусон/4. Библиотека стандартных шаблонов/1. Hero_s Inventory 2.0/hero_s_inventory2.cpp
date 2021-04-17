// Демонстрирует работу с векторами
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> inventory;
	inventory.push_back("sword");//добавляет новый элемент к концу вектора
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout <<"You have "<<inventory.size()<<" items.\n";
	cout <<"\nYou items:\n";
	for(unsigned int i = 0; i < inventory.size(); ++i){
		cout <<inventory[i]<<endl;
	}
	cout <<"\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout <<"\nYour items:\n";
	for(unsigned int i = 0; i < inventory.size(); ++i){
		cout <<inventory[i]<<endl;
	}
	cout <<"\nThe item name '"<<inventory[0]<<"' has ";
	cout <<inventory[0].size()<<" letters in it.\n";
	cout <<"\nYour shield is destroyed in a fierce battle.";
	inventory.pop_back();//удаляет из вектора последний элемент и уменьшает размер вектора на единицу
	cout <<"\nYour items:\n";
	for(unsigned int i = 0; i < inventory.size(); ++i){
		cout <<inventory[i]<<endl;
	} 
	cout <<"\nYou were robbed of all of your possession by a thief.";
	inventory.clear();//удаляет все элементы вектора и устанавливает его значение в 0
	if(inventory.empty()){
		cout <<"\nYou have nothing.\n";
	}
	else{
		cout <<"\nYou have at least one item.\n";
	}
	return 0;
}
