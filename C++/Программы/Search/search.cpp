#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	//масивы
	const int namDataBase = 10;
	string dataBase[namDataBase] = {"Alex","Bernard","Carlos",
							"Faith","Eric","David","Gordon",
							"Hunter","Bruce","Bartholomew "};
	string name;
	cout <<"Enter your name: ";
	cin >>name;
	
	for(int i = 0; i < namDataBase; i++){
		if(name == dataBase[i]){
			cout <<"'"<<dataBase[i]<<"' under the number: "<<i + 1;
			break;
		}
		if(i == (namDataBase - 1)){
			cout <<"Sorry, there is no such name in the list";
		}
		if(name == "exit")break;
	}
	//вектора
	vector <string> dataBaseVec;
	vector <string>::const_iterator nameIter;
	
	for(int i = 0; i < namDataBase; i++){
		dataBaseVec.push_back(dataBase[i]);
	}
	
	do{
		//???
		cout <<"Enter your name: ";
		cin >>name;
		if(name == "exit")break;
		nameIter = find(dataBaseVec.begin(), dataBaseVec.end(), name);
		cout <<*nameIter<<endl;
	}while(true);
	
	cout <<dataBaseVec.capacity();
	return 0;
} 
