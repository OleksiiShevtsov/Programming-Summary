#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber;
	int tries = 1;
	int guess, guess2;
	bool ok = false;
	cout <<"\tWelcom to Guess My Number 100\n\n";
	cout <<"Enter a secret Number: ";
	cin >> secretNumber;
	guess = rand() % 100 + 1;
	guess2 = 100;
	do{
		cout <<"Enter a guess: "<<guess;
		++tries;
		if(guess > secretNumber){
			guess2 = guess;
			guess = rand() % guess;
			cout <<" Too high!\n\n";
		}
		else if(guess < secretNumber){
			guess = (rand() % (guess2 - guess)) + guess + 1;
			cout << " Too low!\n\n";
		}
		else{
			cout <<"**win, guess = "<<guess;
			cout <<"\nThat's it! You got it in "<<tries<<" guesse!\n";
			ok = true;
			break;
		}
	}while(guess != secretNumber);
	if(ok == false){
		cout <<"win, guess = "<<guess;
		cout <<"\nThat's it! You got it in "<<tries<<" guesse!\n";
	}
	return 0;
}
