#include <iostream>
using namespace std;


void foo(int x){//по значению
	x++;
}

void foor(int& rx){//по ссылке !!!
	rx++;
}

void foop(int* px){//по указателю 
	*px = *px + 1;
}

int main(){

	int x = 10;
	cout <<"x = "<<x<<endl;
	
	foo(x);	
	cout <<"foo: x = "<<x<<endl;
	
	foor(x);						//!!!
	cout <<"foor: x = "<<x<<endl;
	
	foop(&x);
	cout <<"foop: x = "<<x<<endl;
	
	return 0;	
}
