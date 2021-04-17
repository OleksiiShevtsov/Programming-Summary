#include <iostream>
#include <windows.h>
using namespace std;

class A{
	public:
		A(char a){
			*pAc = a;
			cout <<"constructor A: "<< *pAc <<endl;
		}
		~A(){
			cout <<"destructor A"<< endl;
			delete pAc;
		}
	private:
		char* pAc = new char();
};

class C{
	public:
		C(){
			cout <<"constructor C: "<< *pCc << endl;
		}
		~C(){
			cout <<"destructor C"<< endl;
			delete pCc;
		}
		char* pCc = new char('c');
};

class B : A{
	public:
		B(char b, char a, char c):A(a),pBc(&b){
			this -> c.pCc = &c;
			cout <<"constructor B: "<< *pBc << endl;
		}
		~B(){
			cout <<"destructor B"<< endl;
			delete pBc;
		}
	private:
		char* pBc = new char();
		C c;
};

int main(){
	
	B b('b','a','c');
	
	return 0;
}
