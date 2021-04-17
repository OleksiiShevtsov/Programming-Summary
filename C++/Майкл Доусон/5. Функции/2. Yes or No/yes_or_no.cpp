// Демонстрирует работу с возвращаемыми значениями и параметрами
#include <iostream>
#include <string>
using namespace std;
char askYesNo1();
char askYesNo2(string question);
int main(){
	char answer1 = askYesNo1();
	cout <<"Thanks for answering: "<<answer1<<"\n\n";
	char answer2 = askYesNo2("Do you wish to save your game?");
	cout <<"Thanks for answering: "<<answer2<<"\n\n";
	return 0;
}
char askYesNo1(){
	char responsel1;
	do{
		cout <<"Please enter 'y' or 'n': ";
		cin >>responsel1;
	}while(responsel1 != 'y' && responsel1 != 'n');
	return responsel1;
}
char askYesNo2(string question){
	char responsel2;
	do{
		cout <<question<<" (y/n): ";
		cin >>responsel2;
	}while(responsel2 != 'y' && responsel2 != 'n');
	return responsel2;
}
