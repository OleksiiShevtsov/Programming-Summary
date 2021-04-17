#include <iostream>
using namespace std;
int& rfunkX(int x);
int funkX(int& x);
int main(){
	int x = 10, z;
	cout <<x<<"\n\n";
	int& rx = x;
	x = rfunkX(x);
	cout <<x<<endl;//передает значение
	x = funkX(x);
	cout <<x<<endl;//передает ссылку
	return 0;
}
int& rfunkX(int x){
	x = x + 2;
	return x;	
}
int funkX(int& x){
	x = x + 2;
	return x;	
}
