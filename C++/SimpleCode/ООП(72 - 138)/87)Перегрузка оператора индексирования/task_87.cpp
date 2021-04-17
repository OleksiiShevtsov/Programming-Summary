#include <iostream>
using namespace std;

class AlexClass{
	public:
		int& operator[](int index){
			return arr[index];
		}
	private:
		int arr[6]{10, 20, 30, 40, 50, 60};
};

int main(){
	
	AlexClass arrAlex;
	cout << arrAlex[1] << endl; 
	

	return 0;
}
