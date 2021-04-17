#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Foo(int value){
	if(value < 0){
		//брошенное исключение
		//с помощью throw
				
		throw exception();
	}
	cout <<"value: "<< value << endl;
}

int main(){
	
	int value;
	cin >> value;
	
	try{
		//тут ловим исключение
		Foo(value);	
	}
	//catch должен ловить исключение 
	//того типа данных  который 
	//бросаем в throw
	catch(const exception ex){
		cout << ex.what() << endl;
	}
	
	return 0;
}
