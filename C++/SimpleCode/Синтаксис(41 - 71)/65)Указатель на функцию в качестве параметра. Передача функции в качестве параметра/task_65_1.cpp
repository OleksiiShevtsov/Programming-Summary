#include <iostream>
#include <string>
#include <cstring>

using namespace std;
//тип функции (*имя функции)(спецификация параметров)

void func1(){
	cout <<"void func 1: "<< endl;}

void func3(){
	cout <<"void func 3: "<< endl;}

int func2(int a){
	return a * 10;}
	
int main(){
	
	void (*function1)();//синтаксис указатель на функцию 
	function1 = func1;//присваивание(соблюдаем сигнатуру параметров!!!)
	function1 + func3;
	
	
	function1();//вывод func1
	
	int (*function2)(int a);
	function2 = func2;
	cout <<"a * 10 = "<< function2(5) << endl;
	
	return 0;
}
