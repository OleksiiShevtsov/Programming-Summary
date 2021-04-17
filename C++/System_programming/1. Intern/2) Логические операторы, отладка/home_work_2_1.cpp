#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	
	string First_name, Last_name, Position; 
	int Age, Daily_wage;
	
	cout << "Enter First name: "; 
	cin >> First_name;
	cout << "Enter Last name: "; 
	cin >> Last_name;
	cout << "Enter Age: ";
	cin >> Age;
	cout << "Enter Position: ";
	cin >> Position;	
	cout << "Enter Daily wage: "; 
	cin >> Daily_wage;
	
	cout << endl;
	
	cout << "Name: " << First_name << " " << Last_name << endl;
	cout << "Age: " << Age << endl;

	if(Age > 55){
		cout << "Term Until Retirement: retired" << endl;
	}
	else{
		cout << "Term Until Retirement: " << 55 - Age << endl;
	}
	
	cout << "AnnualSalary: " << Daily_wage * 250 * 0.8 << endl;
	cout << "Position: " << Position << endl;
	
	return 0;
}
