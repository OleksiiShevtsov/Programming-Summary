#include <iostream>
#include <string>
using namespace std;
class Num{
	public:
		Num(const string& name = "");
		string GetName() const;
	private:
		string m_name;
};
Num::Num(const string& name):m_name(name){}
inline string Num::GetName() const{return m_name;}
int main(){
	//создание динамического массива
	//типа Num
	Num *array = new Num[3];
	
	Num num1("num1");
	Num num2("num2");
	Num num3("num3");
	
	array[0] = num1;
	array[1] = num2;
	array[2] = num3;
	
	for(int i = 0; i < 3; ++i){
		cout <<array[i].GetName()<<endl;
	}
	return 0;
}
