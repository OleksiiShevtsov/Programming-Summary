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
class Nums{
	public:
		void Add(Num num);
		void GetNum();
	private:
		static int i;
		Num *arrey_num = new Num[10];
};
int Nums::i = 0;
void Nums::Add(Num num){
	arrey_num[i] = num;
	i++;
}
void Nums::GetNum(){
	for(int j = 0; j <= i; j++){
		cout <<arrey_num[j].GetName()<<endl;
	}
}
int main(){
	Nums nums;
	
	nums.Add(Num("num1"));
	nums.Add(Num("num2"));
	nums.Add(Num("num3"));
	nums.GetNum();
	return 0;
}
