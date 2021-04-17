#include <iostream>
using namespace std;
int main(){
	if(true){
		cout <<"This is alwas dispayed.\n\n";
	}
	if(false){
		cout <<"This is never dispayed.\n\n";
	}
	int score = 1000;
	if(score){
		cout <<"At least you didn't score zero.\n\n";		
	}
	if(score >= 250){
		cout <<"You scored 250 or more. Decent.\n\n";
	}
	if(score >= 500){
		cout <<"You scored 500 or mare. Nice.\n\n";
		if(score >= 1000){
			cout <<"You scored 1000 or mare. Impressive!\n\n";
		}
	}
	return 0;
}
