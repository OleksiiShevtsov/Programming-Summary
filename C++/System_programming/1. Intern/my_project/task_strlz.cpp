#include <iostream>

using namespace std;

struct A{
	A(int i, const char* str){
		m_i = i;
		m_pc = str;
	}
	int m_i;
	const char* m_pc;
};

int main(){
	
	A a(100, "abc");
	char arr[8];
	*(int*)arr = a.m_i;
	for(int i = sizeof(a.m_i); i < 8; i++){
		arr[i] = a.m_pc[i - sizeof(i)];
	}
	/////////
	
	cout << *(int*)arr << endl;
	for(int i = sizeof(a.m_i); i < 7; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}
