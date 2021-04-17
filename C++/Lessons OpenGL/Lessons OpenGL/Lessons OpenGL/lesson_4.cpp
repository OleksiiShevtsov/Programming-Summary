/*#include <glut.h>
#include <cmath>

float height = 400.0;
float width = 400.0;
float z = 400.0;
const int step = 40;

//пременная угла
float Alpha = 0.0, Beta = 0.0, Gamma = 0.0;

//РАБОТА С КЛАВИАТУРОЙ

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	//сетка
	glPushMatrix();//сохранить исходные данные

	glRotated(Alpha, 1.0, 0.0, 0.0);//вращение на n градусов
	glRotated(Beta, 0.0, 1.0, 0.0);
	glRotated(Gamma, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
		glVertex3f(100, 100, 100);
		glVertex3f(-100, 100, 100);

		glVertex3f(-100, 100, 100);
		glVertex3f(-100, 100, -100);

		glVertex3f(-100, 100, -100);
		glVertex3f(100, 100, -100);

		glVertex3f(100, 100, -100);
		glVertex3f( 100, 100, 100);

		glVertex3f(100, 100, -100);
		glVertex3f(100, -100, -100);

		glVertex3f(100, 100, 100);
		glVertex3f(100, -100, 100);

		glVertex3f(-100, 100, 100);
		glVertex3f(-100, -100, 100);

		glVertex3f(-100, 100, -100);
		glVertex3f(-100, -100, -100);

		glVertex3f(-100, -100, -100);
		glVertex3f(100, -100, -100);

		glVertex3f(100, -100, -100);
		glVertex3f(100, -100, 100);

		glVertex3f(100, -100, 100);
		glVertex3f(-100, -100, 100);

		glVertex3f(-100, -100, 100);
		glVertex3f(-100, -100, -100);
	glEnd();

	glPopMatrix();//сбросить исходные данные

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
		case 'q': ++Beta; break;
		case 'e': --Beta; break;
		case 'w': ++Gamma; break;
		case 's': --Gamma; break;
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