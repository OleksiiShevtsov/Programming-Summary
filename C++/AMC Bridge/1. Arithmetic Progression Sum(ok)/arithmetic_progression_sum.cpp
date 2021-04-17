#include <iostream>
using namespace std;

int main(){
	
	int a;
	int difference;
	int n;
	int Sum = 0;
	cin >> a >> difference >> n;
	
	for(int i = 0; i < n; i++){
		Sum = Sum + a;
		a = a + difference;
	}
	cout << Sum;
	

	
	return 0;
}
