/*#include <glut.h>
#include <cmath>
#include <iostream>
#include <string>
#include <stdlib.h>//для конвертации числа в строку

float height = 400.0;
float width = 400.0;
float z = 400.0;
const int step = 40;

//пременная угла
int Alpha = 0.0;
char buf[5];

//ЗАГОЛОВОК

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	Alpha = Alpha % 360;
	//сетка
	glPushMatrix();

	glRotated(Alpha, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
		glVertex2f(60, 0);
		glVertex2f(-60, 0);
		glVertex2f(0, 30);
		glVertex2f(0, -30);
	glEnd();

	//glutSetWindowTitle(_itoa(Alpha, buf, 10)); //не работает
	std::cout << Alpha << std::endl;

	glPopMatrix();

	glutSwapBuffers();//далее выполнение: для GLUT_DOUBLE
}
void Timer(int value) { //по умолчанию равен 0



	Draw(); //или glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Keyboard(unsigned char key, int x, int y) {//Для все букв, цыфр

	switch (key){
		case 'a': ++Alpha; break;
		case 'd': --Alpha; break;
		default: break;
	}
}

void SKeyboard(int key, int x, int y) {//Для спец. символов
	//switch (key) {
	//case GLUT_KEY_LEFT: ++Alpha; break;
	//case GLUT_KEY_RIGHT: --Alpha; break;
	//default: break;
	//}
}

void Initialize() {
	glClearColor(0.0, 0.06, 0.0, 0.0);//зарисовка

	glMatrixMode(GL_PROJECTION);//???
	glLoadIdentity();//сброс
	glOrtho(-width / 2, width / 2, -height / 2, height / 2, -z / 2, z / 2);

	glMatrixMode(GL_MODELVIEW);//последующие изменения модели

}

int main(int argc, char **argv) {

	//Иниализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_05");

	//Регистрация
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	glutKeyboardFunc(Keyboard);//Для все букв, цыфр
	glutSpecialFunc(SKeyboard);//Для спец. символов

	Initialize();
	glutMainLoop();

	return 0;
}*/