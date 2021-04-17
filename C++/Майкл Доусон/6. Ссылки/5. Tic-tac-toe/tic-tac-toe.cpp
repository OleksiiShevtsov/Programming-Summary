// ��������� ������ � "��������-������" ������ ������������
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// ���������� ���������
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';
// ��������� �������
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
// ������� main
int main(){
	int move;
	const int NUM_SQUARES = 9;
	vector<char> board(NUM_SQUARES, EMPTY);//9 ���������, ��� ������ EMPTY
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
/*������� instructions() ��� ������� ������� �� ����� 
������� ���� � ��������� ���������� ������� ������������*/
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
/*������� askYesNo() ������ ������������ ������, 
�� ������� ����� �������� <<��>> ��� <<���>>.*/
char askYesNo(string question){
	char responce;
	do{
		cout <<question<<" (y/n) ";
		cin >>responce;
	}while(responce != 'y' && responce != 'n');
	return responce;
}
/*������� askNumber() ����������� � ������������ ����� �� 
������������� ��������� � ���������� �������� ���� ������,*/
int askNumber(string question, int high, int low){
	int number;
	do{
		cout <<question<<" ("<<low<<" - "<<high<<"): ";
		cin >>number;
	}while(number > high || number < low);
	return number;
}
/*������� humanPiece() ���������� ������������, ����� �� �� ����� ������, � � ����������� 
�� ���������� ������ ���������� �� ������, ������� ����� ������ ������������. ������ 'X':*/
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
/*������� opponent() ������ ������ ������������ (� ��� �) � �� ��������� ���� ����������
���������� ������, ������� ����� ������ ��������-��������� (� ��� �):*/
char opponent(char piece){
	if(piece == X){
		return O;
	}else{
		return X;
	}
}
//������� displayBoard() ���������� ���������� �� ������� ����.
void displayBoard(const vector<char>& board){
	cout <<"\n\t"<<board[0]<<" | "<<board[1]<<" | "<<board[2];
	cout <<"\n\t"<<"---------";
	cout <<"\n\t"<<board[3]<<" | "<<board[4]<<" | "<<board[5];
	cout <<"\n\t"<<"---------";
	cout <<"\n\t"<<board[6]<<" | "<<board[7]<<" | "<<board[8];
	cout <<"\n\t";
}
/*������� winner() �������� ������� ���� � ���������� ����������. ��� �����
����� ���� �� ������� ��������� ��������.*/
char winner(const vector<char>& board){
	// ��� ��������� ���������� ����
	const int WINNING_ROWS[8][3] = {{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{0, 3, 6},
		{1, 4, 7},
		{2, 5, 8},
		{0, 4, 8},
		{2, 4, 6}};
	// ���� � ����� �� ���������� ����� ��� ������������ ��� ���������� ��������
	// (������ ��� �� ����� �����). �� ���������� �����������
	const int TOTAL_ROWS = 8;
	for(int row = 0; row < TOTAL_ROWS; ++row){
		if((board[WINNING_ROWS[row][0]] != EMPTY)&&
		(board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]])&&
		(board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]])){
			return board[WINNING_ROWS[row][0]];
		}
	}
	// ��������� ���������� �� �����������. ���������. �� ��������� �� �����
	// (�������� �� �� ���� ������ ������)
	if(count(board.begin(),board.end(),EMPTY) == 0){return TIE;}
	// ��������� ���������� �� �����������. �� � ����� ��� �� ���������.
	// ���� ������������
	return NO_ONE;
}
/*������� isLegal() �������� ������� ���� � ��������� ���. ��� ���������� true, 
���� ��� ������ �� ��������, � false - ���� �� �� ��������.*/
inline bool isLegal(int move,const vector<char>& board){
	return (board[move] == EMPTY);
}
/*������� humanMove() �������� ������� ���� � �� ������, ������� ����� ������������. ���
���������� ����� ��� ������, � ������� ������������ ����� ��������� ���� ������.*/
int humanMove(const vector<char>& board, char human){
	int move = askNumber("Where will you move?", (board.size() - 1));
	while(!isLegal(move ,board)){
		cout <<"\nThat square is alredy occupied, foolise human.\n";
		move = askNumber("Where will you move?", (board.size() - 1));	
	}
	cout <<"Fine...\n";
	return move;
}
/*������� computerMove()
������� �������� ������� ���� � �� ������, ������� ����� ���������. ��� ����������
��� ����������.*//*���������� ���������� �������������� ����������*/
int computerMove(vector<char> board, char computer){
	unsigned int move;
	bool found = false;
	// (���� 1)���� ��������� ����� �������� ��������� �����. �� �� ������ ���� ���	
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
	// (���� 2)�����. ���� ������� ����� �������� ��������� �����. ����������� ���� ���
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
	// (���� 3)����� ������ ��������� ����� ����������� ��������� ������
	if(!found){
		move = 0;
		unsigned int i = 0;
		const int BEST_MOVES[] = {4,0,2,6,8,1,3,5,7};
		// ������� ����������� ��������� ������
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
//������� announceWinner() �������� ���������� ����
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
