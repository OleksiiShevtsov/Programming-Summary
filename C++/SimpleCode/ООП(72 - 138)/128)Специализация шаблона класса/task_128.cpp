#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Printer{
	public:
		void Print(T value){
			cout << value << endl;
		}
};

//Специальный шаблон (исключение)
template <>
class Printer<string>{
	//все предыдущие методы стираються
	public:
		void Print(string value){
				cout << value <<"!!!"<< endl;
			}
};

int main(){

	Printer<string> p1;
	p1.Print("Hello World");
	
	Printer<int> p2;
	p2.Print(100);
	
	return 0;
}
