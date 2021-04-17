#include <iostream>
using namespace std;

int glob; //глоб - значение по умолчанию 0

void f(int glob){
	glob++;
}
int main(){	
	f(1);
	cout <<"glob: "<< glob << endl;
	//локал - значение по умолчанию мусор
	int y = 10; 
	cout <<"y: "<< y << endl;
	return 0;	
}
