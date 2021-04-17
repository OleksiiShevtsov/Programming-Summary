#include <iostream>
using namespace std;

int main(){
	
	int* px = new int; //выделение области в оперативной памяти (динамическая память)
	cout << px << endl; //адрес
	cout << *px << endl;//муссор
	
	*px = 10; // присваение переменной
	cout << *px << endl;
	
	delete px; //чистка опер. памяти по этому адресу (C#, Java - чистят памить сами)
	
	return 0;	
}
