#include <iostream>
using namespace std;

void f2(){
	cout <<"f2"<<endl;
}

void f1(){
	f2();
	cout <<"f1"<<endl;
}

void f(){
	f1();
	cout <<"f"<<endl;
}

int main(){
	f();
	return 0;	
}
