// Демонстрирует работу с итераторами
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){                                                   
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	vector<string>::iterator myIterator;//объявление итератора для вектора mylterator
	vector<string>::const_iterator iter;
	cout <<"Your items:\n";
	for(iter = inventory.begin(); iter != inventory.end(); ++iter)/*перебер содержимого вектора*/{
		cout <<*iter<<endl;
	}
	cout <<"\nYou trade your sword for  battle axe.";
	myIterator = inventory.begin();//присвоение
	*myIterator = "battle axe";//замена
	cout <<"\nYour items:\n";
	for(iter = inventory.begin(/*возвращает итератор, указывающий на первый элемент 
	контейнера.*/); iter != inventory.end(); ++iter){
		cout <<*iter<<endl;
	}
	cout <<"\nThe item name '"<<*myIterator<<"' has ";
	cout <<(*myIterator).size(/*вывод кол. символов*/)<<" letters in it.\n";
	cout <<"\nThe item name '"<<*myIterator<<"' has ";
	cout <<myIterator->size(/*вывод кол. символов*/)<<" letters in it.\n";
	cout <<"\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(),"crossbow");//добавление элемента перед елементом итератора
	cout <<"\nYour items:\n";
	for(iter = inventory.begin(); iter != inventory.end(/*возвращает итератор, следующий за последним
	элементом в контейнере*/); ++iter){
		cout <<*iter<<endl;
	}
	cout <<"\nYour armor is destroyed in а fierce battle.";
	inventory.erase((inventory.begin() + 2));//удаляет элемент на который указывает итератор
	cout <<"\nYour items:\n";
	for(iter = inventory.begin(); iter != inventory.end(); ++iter){
		cout <<*iter<<endl;
	}
	return 0;
}                   
