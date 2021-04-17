#include<iostream>

using namespace std;

int main(){
	
	int x;
	cout <<"enter x: ";
	cin >> x;
	
	//условный оператро
	if(x < 10){
		cout <<"less than 10"<< endl;	
	} 
	else if(x > 10){
		cout <<"more than 10"<< endl;
	}
	else{
		cout <<"exactly 10"<< endl;
	}
	
	//тернарный оператор  
	/*условие*/                         /*else*/
	(x<10) ? (cout <<"x < 10"<< endl) : (x>10)?(cout <<"x > 10"<< endl):(cout <<"x = 10"<< endl);
	
	return 0;
}
