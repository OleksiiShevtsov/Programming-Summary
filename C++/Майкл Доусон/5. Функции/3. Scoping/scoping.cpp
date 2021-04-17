// Демонстрирует работу с областями видимости
#include <iostream>
#include <string>
using namespace std;
void func();
int main(){
	int var = 5;//локальная переменная в функции main()
	cout <<"In main() var is: "<<var<<"\n\n";
	func();
	cout <<"Back in main() var is: "<<var<<"\n\n";
	{
		cout <<"In main() in a new score var is: "<<var<<"\n\n";
		cout <<"Creating new var in new score var is: "<<var<<"\n\n";
		int var = 10; // переменная в новой области видимости
					  // скрывает другую переменную. называемую var
		cout <<"In main() in a new score var is "<<var<<"\n\n";
	}
	cout <<"At end of main() var created in new scope no longer exists.\n";
	cout <<"At end of main() var is: "<<var<<"\n";
	return 0;
}
void func(){
	int var = -5;//локальная переменная в функции func()
	cout <<"In func() var is: "<<var<<"\n\n";
}

