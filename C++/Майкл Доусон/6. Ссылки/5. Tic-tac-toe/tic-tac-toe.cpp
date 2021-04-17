// Компьютер играет в "Крестики-нолики" против пользователя
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// глобальные константы
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';
// прототипы функций
void instruktions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(int move, const vector<char>& board);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);
// функция main
int main(){
	int move;
	const int NUM_SQUARES = 9;
	vector<char> board(NUM_SQUARES, EMPTY);//9 элементов, все равные EMPTY
	instruktions();
	char human = humanPiece();
	char computer = opponent(human);
	char turn = X;
	displayBoard(board);
	while(winner(board) == NO_ONE){
		if(turn == human){
			move = humanMove(board, human);
			board[move] = human;
		}
		else{
			move = computerMove(board, computer);
			board[move] = computer;
		}
		displayBoard(board);
		turn = opponent(turn);
	}
	announceWinner(winner(board), computer, human);
	return 0;
}
/*Функция instructions() Эта функция выводит на экран 
правила игры и позволяет компьютеру немного похвастаться*/
void instruktions(){
	cout <<"Welcome to the ultimate man-machine showdow/; Tic-Tac-Toe.\n";
	cout <<"--where human brain is pit against silicon processor\n\n";
	cout <<"Make your move known by entering a number, 0 - 8. The number\n";
	cout <<"corresponds to the desired board position. as illustrated:\n\n";
	cout <<" 0 | 1 | 2\n";
	cout <<" ---------\n";
	cout <<" 3 | 4 | 5\n";
	cout <<" ---------\n";
	cout <<" 6 | 7 | 8\n";
	cout <<"Prepare yourself, human. The battle is about to begin.\n\n";
}
/*Функция askYesNo() задает пользователю вопрос, 
на который можно ответить <<да>> или <<нет>>.*/
char askYesNo(string question){
	char responce;
	do{
		cout <<question<<" (y/n) ";
		cin >>responce;
	}while(responce != 'y' && responce != 'n');
	return responce;
}
/*Функция askNumber() запрашивает у пользователя число из 
определенного диапазона и продолжает задавать этот вопрос,*/
int askNumber(string question, int high, int low){
	int number;
	do{
		cout <<question<<" ("<<low<<" - "<<high<<"): ";
		cin >>number;
	}while(number > high || number < low);
	return number;
}
/*Функция humanPiece() спрашивает пользователя, хочет ли он пойти первым, и в зависимости 
от сделанного выбора возвращает ту фигуру, которой будет ходить пользователь. первые 'X':*/
char humanPiece(){
	char go_first = askYesNo("Do you require the first move?");
	if(go_first == 'y'){
		cout <<"\nThe take the first move. You will need it.\n";
		return X;
	}
	else{
		cout <<"\nYour bravery will be your undoing...I will go first.\n";
		return O;
	}
}
/*Функция opponent() узнает фигуру пользователя (Х или О) и на основании этой информации
возвращает фигуру, которой будет ходить соперник-компьютер (Х или О):*/
char opponent(char piece){
	if(piece == X){
		return O;
	}else{
		return X;
	}
}
//Функция displayBoard() отображает переданное ей игровое поле.
void displayBoard(const vector<char>& board){
	cout <<"\n\t"<<board[0]<<" | "<<board[1]<<" | "<<board[2];
	cout <<"\n\t"<<"---------";
	cout <<"\n\t"<<board[3]<<" | "<<board[4]<<" | "<<board[5];
	cout <<"\n\t"<<"---------";
	cout <<"\n\t"<<board[6]<<" | "<<board[7]<<" | "<<board[8];
	cout <<"\n\t";
}
/*Функция winner() получает игровое поле и возвращает победителя. Она может
иметь один из четырех вариантов значения.*/
char winner(const vector<char>& board){
	// все возможные выигрышные ряды
	const int WINNING_ROWS[8][3] = {{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{0, 3, 6},
		{1, 4, 7},
		{2, 5, 8},
		{0, 4, 8},
		{2, 4, 6}};
	// если в одном из выигрышных рядов уже присутствуют три одинаковых значения
	// (причем они не равны ЕМРТУ). то победитель определился
	const int TOTAL_ROWS = 8;
	for(int row = 0; row < TOTAL_ROWS; ++row){
		if((board[WINNING_ROWS[row][0]] != EMPTY)&&
		(board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]])&&
		(board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]])){
			return board[WINNING_ROWS[row][0]];
		}
	}
	// поскольку победитель не определился. проверяем. не наступила ли ничья
	// (остались ли на поле пустые клетки)
	if(count(board.begin(),board.end(),EMPTY) == 0){return TIE;}
	// Поскольку победитель не определился. но и ничья еще не наступила.
	// игра продолжается
	return NO_ONE;
}
/*Функция isLegal() получает игровое поле и сделанный ход. Она возвращает true, 
если ход сделан по правилам, и false - если не по правилам.*/
inline bool isLegal(int move,const vector<char>& board){
	return (board[move] == EMPTY);
}
/*Функция humanMove() получает игровое поле и ту фигуру, которой ходит пользователь. Она
возвращает номер той клетки, в которую пользователь хочет поставить свой символ.*/
int humanMove(const vector<char>& board, char human){
	int move = askNumber("Where will you move?", (board.size() - 1));
	while(!isLegal(move ,board)){
		cout <<"\nThat square is alredy occupied, foolise human.\n";
		move = askNumber("Where will you move?", (board.size() - 1));	
	}
	cout <<"Fine...\n";
	return move;
}
/*Функция computerMove()
Функция получает игровое поле и ту фигуру, которой ходит компьютер. Она возвращает
ход компьютера.*//*Реализация небольшого искусственного интеллекта*/
int computerMove(vector<char> board, char computer){
	unsigned int move;
	bool found = false;
	// (этап 1)если компьютер может выиграть следующим ходом. то он делает этот ход	
	while(!found && move < board.size()){
		if(isLegal(move, board)){
			board[move] = computer;
			found = winner(board) == computer;
			board[move] = EMPTY;
		}
		if(!found){
			++move;
		}
	}
	// (этап 2)иначе. если человек может победить следующим ходом. блокировать этот ход
	if(!found){
		move = 0;
		char human = opponent(computer);
		while(!found && move < board.size()){
			if(isLegal(move, board)){
				board[move] = human;
				found = winner(board) == human;
				board[move] = EMPTY;	
			}
			if(!found){
				++move;
			}
		}	
	}
	// (этап 3)иначе занять следующим ходом оптимальную свободную клетку
	if(!found){
		move = 0;
		unsigned int i = 0;
		const int BEST_MOVES[] = {4,0,2,6,8,1,3,5,7};
		// выбрать оптимальную свободную клетку
		while(!found && move < board.size()){
			move = BEST_MOVES[i];
			if(isLegal(move, board)){
				found = true;	
			}
			++i;
		}	
	}
	cout <<"I shall take square number "<<move<<endl;
	return move;	
}
//Функция announceWinner() получает победителя игры
void announceWinner(char winner, char computer, char human){
	if(winner == computer){
		cout <<winner<<"'s won!\n";
		cout <<"As I predicted, human. I am triumphant once more -- proof\n";
		cout <<"that computers are superior to humans in all regards.\n";
	}else if(winner == human){
		cout <<winner<<"'s won!\n";
		cout <<"No, no! It cannot be! Somehow you triked me, human.\n";
		cout <<"But never again! I. the computer. so swear it!\n";
	}else{
		cout <<"It's a tie.\n";
		cout <<"You were most lucky, human, and somehow managed to tie me.\n";
		cout <<"Celerate...for this is best you will ever achive.\n";
	}
}
