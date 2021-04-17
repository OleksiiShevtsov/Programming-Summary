#include <glut.h>
#include <cmath>
#include <iostream>
#include <string>
#include <stdlib.h>//для конвертации числа в строку

float height = 400.0;
float width = 400.0;

float x = 0.0;
float y = 0.0;


void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glVertex2f(x - 20, y - 20);
		glVertex2f(x - 20, y + 20);
		glVertex2f(x + 20, y + 20);
		glVertex2f(x + 20, y - 20);
		glVertex2f(x - 20, y - 20);
	glEnd();

	std::cout << "x: " << x << ", y: " << y << std::endl;

	glPopMatrix();

	glutSwapBuffers();//далее выполнение: для GLUT_DOUBLE
}



void Timer(int value) { //по умолчанию равен 0
	Draw(); //или glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Initialize() {

	glClearColor(0.0, 0.06, 0.0, 0.0);//зарисовка

	glMatrixMode(GL_PROJECTION);//???
	glLoadIdentity();//сброс
	//glOrtho(-width / 2, width / 2, -height / 2, height / 2, -z / 2, z / 2);
	glOrtho(0, height, width, 0, -20, 20);

	glMatrixMode(GL_MODELVIEW);//последующие изменения модели
}
//движение мыши
void MouseMove(int ax, int ay) {
	glutSetWindowTitle("MouseMove called");
	x = ax;
	y = ay;
}
//нажатие клавиши и отпускание(копка, наж/отп, ...)
void MousePressed(int button, int state, int x, int y) {
	if (state == GLUT_DOWN) {
		switch (button) {
		case GLUT_LEFT_BUTTON: glutSetWindowTitle("Left B. DOWN"); break;
		case GLUT_RIGHT_BUTTON: glutSetWindowTitle("Right B. DOWN"); break;
		case GLUT_MIDDLE_BUTTON: glutSetWindowTitle("Middle B. DOWN"); break;
		}
	}else{
		switch (button) {
		case GLUT_LEFT_BUTTON: glutSetWindowTitle("Left B. UP"); break;
		case GLUT_RIGHT_BUTTON: glutSetWindowTitle("Right B. UP"); break;
		case GLUT_MIDDLE_BUTTON: glutSetWindowTitle("Middle B. UP"); break;
		}
	}
}
//нажатие клавиши и отпускание(копка, наж/отп, ...)
void MousePressedMove(int ax, int ay) {
	glutSetWindowTitle("MousePressedMove called");

}

int main(int argc, char **argv) {

	//Иниализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_06");

	//Регистрация
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	//Регистрация миши
	glutMotionFunc(MousePressedMove);//нажал и двигаешь
	glutPassiveMotionFunc(MouseMove);//движение без нажатия
	glutMouseFunc(MousePressed);//нажал и отпустил

	Initialize();
	glutMainLoop();

	return 0;
}