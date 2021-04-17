// Демонстрирует возврат указателя
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// возвращает указатель на строковый элемент
string* ptrToElement(vector<string>* const pVec, int i);
int main(){
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	// отображает строковый элемент. на который направлен возвращенный указатель
	cout <<"Sending the object pointed to by returned pointed to cout:\n";
	cout <<*(ptrToElement(&inventory, 0))<<"\n\n";
	// присваивает один указатель другому - малоэатратная операция
	cout <<"Assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout <<"Sending the object pointed to by new pointed to cout:\n";
	cout <<*pStr<<"\n\n";
	// копирует строковый объект - затратная операция присваивания
	cout <<"Assigning object pointed to by pointer to cout a string object.\n";
	string str = *(ptrToElement(&inventory, 2));
	cout <<"Sending the new string object to cout:\n";
	cout <<str<<"\n\n";
	// изменение строкового объекта посредством возвращенного указателя
	cout <<"Altering an object through a returned pointer.\n";
	*pStr = "Healing Poting";
	cout <<"Sending the altered object to cout:\n";
	cout <<inventory[1]<<endl;
	return 0;
}
string* ptrToElement(vector<string>* const pVec, int i){
	// возвращает адрес строкового объекта. расположенного на позиции i
	// в том векторе. на который направлен указатель pVec
	return &((*pVec)[i]);
}
