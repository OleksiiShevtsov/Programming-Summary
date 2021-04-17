#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	//масив данных
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = {
		{"wall","Do you feel you're banging your head again st something?"},
		{"glasses","The se might help you see the answer."},
		{"labored","Going slowly, is it?"},
		{"persistent","Keep at it."},
		{"jumble","It's what the game is all about."},
	};
	//выбор случайного слова и подсказку
	srand(static_cast<unsigned int>(time (0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //слово. которое нужно угадать
	string theHint = WORDS[choice][HINT]; //подсказка для слова
	cout<<WORDS[choice][WORD]<<"******"<<endl;
	cout<<WORDS[choice][HINT]<<"******"<<endl;
	//перемешивание символов в слове
	string jumble = theWord;//перемешанный вариант слова
	int lenght = jumble.size();
	for(int i = 0; i < lenght; ++i){
		int index1 = (rand()%lenght);
		int index2 = (rand()%lenght);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	//приглашение игрока
	cout <<"\t\t\tWelcome to Word Jumble!\n\n";
	cout <<"Unscramble the letter to make a word.\n";
	cout <<"Enter 'hint' for a hint.\n";
	cout <<"Enter 'quit' to quit the game.\n\n";
	cout <<"The jumble is: "<<jumble;
	string guess;
	cout <<"\n\nYour guess: ";
	cin >>guess;
	//начало игры
	while ((guess != theWord) && (guess != "quit")){
		if(guess == "hint"){//вывод подсказки
			cout <<theHint;
		}
		else{
			cout <<"Sorry. that's not it.";
		}
		cout <<"\n\nYour guess: ";
		cin >>guess;
	}
	//прощание
	if(guess == theWord){
		cout <<"\nThat's it! You guessed it!\n";
	}
	cout <<"\nThanks for playing.\n";
	return 0;
}
