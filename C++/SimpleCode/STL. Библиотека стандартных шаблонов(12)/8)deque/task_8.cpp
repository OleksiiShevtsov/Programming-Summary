#include <iostream>
#include <deque>

//deque - смесь динамического масива и двустароннего списка

using namespace std;
int main(){
	
	//методы такие же как в vector и list
	deque<int> dq;
	dq.push_back(12);
	cout << dq[0] << endl;
	
	return 0;
} 
