#include <iostream>
using namespace std;

void Foo(int* px, int* py, int* pz){
	*px = (*px) + 2;
	*py = (*py) + 4;
	*pz = (*pz) + 6;
}
//при передаче через указатели значение можно изменить в вложенной области видимости
//при передечи через значение переменная копируется и не изменяется во внешней области видимости 
int main(){
	
	int x = 0, y = 1, z = 2;
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	cout <<"y = "<<z<<endl;
	
	cout <<"\nFoo()\n\n";
	Foo(&x, &y, &z);
	
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	cout <<"y = "<<z<<endl;
	
	return 0;	
}
