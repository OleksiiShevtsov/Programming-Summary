#include <iostream>
using namespace std;

void foo(int* px, int* py){
	int temp = *py;
	*py = *px;
	*px = temp;
}

int main(){
	
	int x = 2, y = 4;
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	
	cout<<"\nFoo\n\n";
	foo(&x, &y);
	
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	
	return 0;
}
