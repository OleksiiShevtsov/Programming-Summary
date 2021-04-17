#include <iostream>
//����������� ������� ������
#include <conio.h>
#include <cstdlib>



using namespace std;

bool gameOver;
const int width = 32;//�����
const int height = 20;//������
int x, y;//���������� ������
int score;//����
int fruitX, fruitY;//���������� ������
enum eDirection {STOP, LEFT, RIGHT, UP, DOWN};
eDirection dir;

//��������� ����������
void Setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 - 1;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

//������ �����
void Drow() {
	system("cls");//������� ����
	for (int i = 0; i < width + 1; i++) { cout << "#"; }
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			
			if (j == 0 || j == width - 1) { cout << "#"; }
			
			//�������� ������ ����������
			if (i == y && j == x) { cout << "0"; }
			else if(i == fruitY && j == fruitX){ cout << "f"; }
			else { cout << " "; }
		
		}
		cout << endl;
	}
	for (int i = 0; i < width + 1; i++) { cout << "#"; }
	cout << endl;
	cout << "SCORE: " << score << endl;
}

//����������� ������� �� ������������
void Input(){
	if(/*������� ������� �������*/_kbhit()) {
		switch (/*������� ���������� �������*/_getch()){
			case 'a':dir = LEFT; break;
			case 'd':dir = RIGHT; break;
			case 'w':dir = UP; break;
			case 's':dir = DOWN; break;
			case 'x':gameOver = true;
		}
	}
}

//������ ����
void Logic() {
	switch (dir){
		case LEFT:x--; break;
		case RIGHT:x++; break;
		case UP:y--; break;
		case DOWN:y++; break;
	}
	if (x < 0 || x > width || y < 0 || y > height) {
		gameOver = true;
	}
	if (x == fruitX && y == fruitY) {
		score++;
		fruitX = rand() % width;
		fruitY = rand() % height;
	}
}

void delay(int t){
	int temp;
	do{
		temp = (rand()%t);
	}while (temp != 0);
}

int main() {

	Setup();
	while (!gameOver){
		Drow();
		Input();
		Logic();
		delay(100000);
	}


	return 0;
}
