#include <iostream>
using namespace std;

int func(int a){//6 раз вызывается эта функция в стеке 
	
	if(a < 1){return 0;}
	
	a--;
	cout <<"a = "<<a<<endl;
	
	return func(a);	
}

int main(){
	cout <<func(4); 
	return 0;	
}
