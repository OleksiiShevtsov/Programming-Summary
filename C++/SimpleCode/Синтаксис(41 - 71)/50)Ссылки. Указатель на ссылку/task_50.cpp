#include <iostream>
using namespace std;

int main(){
	
	int x = 10;
	int* xp = &x;
	int& xr = *xp;
	
	cout <<"x =\t"<<x<<endl;	
	cout <<"xp =\t"<<xp<<endl;
	cout <<"xr =\t"<<xr<<endl;
	//понятие ариф.указателей в ссылках нет
	//с ссылками мы обращаемся напрямую (без адреса как в указателях!)
	cout <<endl;
	
	//присваивание ссылки указателю
	int* pxx = &xr;
	
	cout <<"xr =\t"<<xr<<endl;
	cout <<"&xr =\t"<<&xr<<endl;
	cout <<"pxx =\t"<<pxx<<endl;
	
	return 0;	
}
