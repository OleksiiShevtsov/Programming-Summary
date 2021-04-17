#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;
char text();
string test(string the_word, char guess, int i, string soFar);
int main(){
	//ѕодготовка
	const int MAX_WRONG = 8; //максимально допустимое количество ошибок
	vector<string> words; //подборка слов дл€ загадывани€
	words.push_back("GUESS");
	words.push_back("HUNGMAN");
	words.push_back("DIFFICULT");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0]; //слово дл€ отгадывани€
	int wrong = 0;//количество ошибочных вариантов
	string soFar(THE_WORD.size(), '-');//часть слова, открыта€ на данный момент
	string used = " ";//уже отгаданные буквы
	cout <<"Welcome to Hangman. Good luck!\n";
	//основной цикл
	while((wrong < MAX_WRONG)&&(soFar != THE_WORD)){
		cout <<"\n\nYou have "<<(MAX_WRONG - wrong);
		cout <<" incorrect guesses left.\n";
		cout <<"\nYou've used the following letters: \n"<<used<<endl;
		cout <<"\nSo far. the word is:\n"<<soFar<<endl;
		//ѕолучение вариантов от пользовател€
		char guess;
		cout <<"\n\nEnter your gues: ";
		guess = text();
		while(used.find(guess) != string::npos){
			cout <<"\nYou've alredy guessed "<<guess<<endl;
			cout <<"Enter your guess: ";
			guess = text();
		}
		used += guess;
		if(THE_WORD.find(guess) != string::npos){
			cout <<"Thet's right! "<<guess<<" is in the word.\n";
			//обновить переменную soFar. включив в нее новую угаданную букву
			for(int i = 0; i < THE_WORD.length(); ++i){
				soFar = test(THE_WORD, guess, i, soFar);
			}
		}
		else{
			cout <<"Sorry. "<<guess<<" isn't in the word.\n";
			++wrong;
		}
	}
	//конец
	if(wrong == MAX_WRONG){
		cout <<"\nYou've been hanged!";
	}
	else{
		cout <<"\nYou guessed it!";
	}
	cout <<"\nThe word was "<<THE_WORD<<endl;
	return 0;
}
char text(){
	char guess;
	cin >>guess;
	guess = toupper(guess);
	return guess;
}
string test(string the_word, char guess, int i, string soFar){
	if(the_word[i] == guess){
		soFar[i] = guess;
	}
	return soFar;
}
