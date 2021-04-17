#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>//верхний регистр
using namespace std;
int main(){
	//Подготовка
	const int MAX_WRONG = 8; //максимально допустимое количество ошибок
	vector<string> words; //подборка слов для загадывания
	words.push_back("GUESS");
	words.push_back("HUNGMAN");
	words.push_back("DIFFICULT");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0]; //слово для отгадывания
	int wrong = 0;//количество ошибочных вариантов
	string soFar(THE_WORD.size(), '-');//часть слова, открытая на данный момент
	string used = " ";//уже отгаданные буквы
	cout <<"Welcome to Hangman. Good luck!\n";
	//основной цикл
	while((wrong < MAX_WRONG)&&(soFar != THE_WORD)){
		cout <<"\n\nYou have "<<(MAX_WRONG - wrong);
		cout <<" incorrect guesses left.\n";
		cout <<"\nYou've used the following letters: \n"<<used<<endl;
		cout <<"\nSo far. the word is:\n"<<soFar<<endl;
		//Получение вариантов от пользователя
		char guess;
		cout <<"\n\nEnter your gues: ";
		cin >>guess;
		guess = toupper(guess);//перевод в верхний регистр.
		//так как загаданное слово записано в верхнем регистре
		while(used.find(guess) != string::npos){
			cout <<"\nYou've alredy guessed "<<guess<<endl;
			cout <<"Enter your guess: ";
			cin >>guess;
			guess = toupper(guess);
		}
		used += guess;
		if(THE_WORD.find(guess) != string::npos){
			cout <<"Thet's right! "<<guess<<" is in the word.\n";
			//обновить переменную soFar. включив в нее новую угаданную букву
			for(int i = 0; i < THE_WORD.length(); ++i){
				if(THE_WORD[i] == guess){
					soFar[i] = guess;
				}
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
