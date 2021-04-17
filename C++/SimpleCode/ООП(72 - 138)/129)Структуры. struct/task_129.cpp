#include <iostream>
#include <string>
using namespace std;

struct AlexStruct1{
	//по умолчанию все поля public
	int a = 10;
};

class AlexClass1{
	public:
		int a = 20;
};

struct AlexStruct2 :/*public*/AlexStruct1{
};

class AlexClass2 :public/*private*/AlexClass1{
	public:
};
int main(){

	AlexStruct1 as1;
	AlexClass1 ac1;
	as1.a;
	ac1.a;
	
	AlexStruct2 as2;
	AlexClass2 ac2;
	as2.a;
	ac2.a;

	return 0;
}
