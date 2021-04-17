#include <iostream>
using namespace std;

int main(){
	 
	int x = 10;
	
	int* px = &x;
	
	cout <<"px = "<<px<<endl;
	cout <<"*px = "<<*px<<endl;
	cout <<"&x = "<<&x<<endl;
	cout <<"x = "<<x<<endl;
	cout <<endl;
	
	int* px2 = &x;
	cout <<"px = "<<px<<endl;
	cout <<"px2 = "<<px2<<endl;
	cout <<endl;
	
	*px2 = 2;
	cout <<"x = "<<x<<endl;
	cout <<"*px = "<<*px<<endl;
	
	return 0;	
}
