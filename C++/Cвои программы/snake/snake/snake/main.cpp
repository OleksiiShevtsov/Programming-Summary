#include <iostream>
//отслеживает нажатие клавиш
#include <conio.h>

#include <dos.h>
#include <stdio.h>
#include "windows.h"
#include <stdlib.h>


using namespace std;

bool gameOver;
const int width = 38;//длина
const int height = 23;//высота
int x, y;//координаты змейки
int score;//счет
int fruitX, fruitY;//координаты фрукта
int tailX[100], tailY[100];//Координаты хвоста
int nTail;//Ково фруктов
enum eDirection {STOP, LEFT, RIGHT, UP, DOWN};
eDirection dir;

//Настройка параметров
void Setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 - 1;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

//Рисует карту
void Drow() {
	system("cls");//очищает окно
	for (int i = 0; i < width + 1; i++) { cout << "#"; }
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			
			if (j == 0 || j == width - 1) { cout << "#"; }
			
			//проверка каждой координаты
			if (i == y && j == x) { cout << "0"; }
			else if(i == fruitY && j == fruitX){ cout << "f"; }
			else { 
				bool print = false;
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j && tailY[k] == i) {
						print = true;
						cout << "o";
					}
				}
				if (!print){
					cout << " ";
				}
			}
		
		}
		cout << endl;
	}
	for (int i = 0; i < width + 1; i++) { cout << "#"; }
	cout << endl;
	cout << "SCORE: " << score << endl;
}

//Отслеживает нажатие от пользывателя
void Input(){
	if(/*поверка нажатие клавишы*/_kbhit()) {
		switch (/*поверка конкретной клавишы*/_getch()){
			case 75:dir = LEFT; break;
			case 77:dir = RIGHT; break;
			case 72:dir = UP; break;
			case 80:dir = DOWN; break;
			case 'x':gameOver = true;
		}
	}
}

//Логика игры
void Logic() {
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;

	tailX[0] = x;
	tailY[0] = y;

	for (int i = 1; i < nTail; i++) {
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir){
		case LEFT:x--; break;
		case RIGHT:x++; break;
		case UP:y--; break;
		case DOWN:y++; break;
	}
	if (x < 0 || x > width - 2 || y < 0 || y > height) {
		gameOver = true;
	}
	if (x == fruitX && y == fruitY) {
		score++;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}
}

//
int main() {

	Setup();
	while (!gameOver){
		Drow();
		Input();
		Logic();
	}

	return 0;
}