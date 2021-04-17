#include <iostream>
#include <vector>
using namespace std;

void AddVectorInt(const vector<int> myVector);

int main(){
	
	vector<int> myVector(6, 1);
	//не работает в  DevС++ 
	//myVector = {n1, n2, ..., nm};
	
	myVector[1] = 20;
	AddVectorInt(myVector);	
	myVector.pop_back();
	myVector.pop_back();
	AddVectorInt(myVector);	
	
	//capacity() - вместимость вектора
	cout <<"capacity: "<< myVector.capacity() << endl;
	cout <<"amount of elements: "<< myVector.size() << endl << endl;
	
	//reserve() - выделяет место в векторе 
	myVector.reserve(10);
	cout <<"capacity: "<< myVector.capacity() << endl;
	cout <<"amount of elements: "<< myVector.size() << endl << endl;
	
	//myVector.shrink_to_fit() - убирает лишнии єлементы; 
	//не работает в  DevС++
	
	//empty() - есть ли єлементі в векторе
	cout <<"empyt: "<< myVector.empty() << endl;
	
	//resize() - добовляет определенное
	//количество єлементов и каким параметром
	myVector.resize(10, 34);
	AddVectorInt(myVector);	
	
	
	
	return 0;
}

void AddVectorInt(const vector<int> myVector){
	cout <<"amount of elements: "<< myVector.size() << endl;
	for(int i = 0; i < myVector.size(); i++){
		cout <<"myVector["<< i <<"] = "<< myVector[i] << endl;
	} 
	cout << endl;
}
