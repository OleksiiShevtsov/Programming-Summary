#include <iostream>
using namespace std;

template <typename T, typename U>

T Sum(T a, U b){
	return a + b;
}

int main(){
	
	cout <<Sum(5, 10)<<endl;
	cout <<Sum(5.599, 10.901)<<endl;
	cout <<Sum(10, 10.5)<<endl;
	
	return 0;	
}
