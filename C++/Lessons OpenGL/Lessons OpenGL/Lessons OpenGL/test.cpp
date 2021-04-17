/*#include <iostream>
#include <glut.h>
#include <cmath>

float height = 400.0;
float width = 400.0;
const int step = 40;

//пременная угла
float Alpha = 0.0, z = 0.0;

//РАБОТА С КЛАВИАТУРОЙ

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	//сетка
	glPushMatrix();//сохранить исходные данные

	glRotated(Alpha, 0.0, 0.0, 1.0);//вращение на n градусов
	
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);

	//glTranslatef(40.0, 40.0, 0.0);

	glVertex2f(-10, 10);
	glVertex2f(10, -10);
	//glVertex2f((0 + z * cos(Alpha*3.14 / 360)), (z * sin(Alpha * 3.14 / 360) - 1));

	glEnd();
	glPopMatrix();//сбросить исходные данные
	glutSwapBuffers();//далее выполнение: для GLUT_DOUBLE
}
void Timer(int value) { //по умолчанию равен 0



	Draw(); //или glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Keyboard(unsigned char key, int x, int y) {//Для все букв, цыфр

	switch (key) {
	case 'a': ++Alpha; break;
	case 'd': --Alpha; break;
	case 'w': ++z; break;
	case 's': --z; break;
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
	glOrtho(-width / 2, width / 2, -height / 2, height / 2, 0, 0);

	glMatrixMode(GL_MODELVIEW);//последующие изменения модели

}

int main(int argc, char **argv) {

	//Иниализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_04");

	//Регистрация
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	glutKeyboardFunc(Keyboard);//Для все букв, цыфр
	glutSpecialFunc(SKeyboard);//Для спец. символов

	Initialize();
	glutMainLoop();

	return 0;
}*/