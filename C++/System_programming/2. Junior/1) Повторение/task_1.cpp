#include <iostream>

using namespace std;

class A{
	public:
		int i1;
		char c1;
		char c2;
		char c3;
		char c4;
		char c5;
		
		~A(){
			throw 0;//незя
		}
};

int main(){
	
	cout << sizeof(A) << endl;
	
	return 0;
}
