#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//C-cast
//static_cast
//reinterpert_cast


int main(){
	
	int a = 10;
	unsigned int b = 20;
	
	//static_cast
	
	 if(static_cast<unsigned int>(a) < b){
	 	cout <<"true!"<< endl;
	 }
	 
	 char c = 0;
	 void* v = c;
	 c = static_cast<char*>(v);
	 
	 //reinterpert_cast
	 
	 
	
	return 0;
}
