#include <iostream>
using namespace std;

template <typename T>

void foo(T& rx, T& ry){
	T temp = ry;
	ry = rx;
	rx = temp;
}

int main(){
	
	int x = 2, y = 4;
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	
	cout<<"\nFoo\n\n";
	foo(x, y);
	
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	
	return 0;
}
