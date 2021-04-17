#include <iostream>
using namespace std;

void foor(int& rx, int& ry, int& rz){//по ссылке !!!
	rx = 10;
	ry = 20;
	rz = 30;
}

int main(){
	int x = 0, y = 0, z = 0;
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	cout <<"z = "<<z<<endl;
	
	cout <<"foor"<<endl;
	foor(x, y, z);
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	cout <<"z = "<<z<<endl;
}
