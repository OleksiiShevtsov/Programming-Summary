/*#include <glut.h>
#include <cmath>
#include <iostream>
#include <string>
#include <stdlib.h>//��� ����������� ����� � ������

float height = 400.0;
float width = 400.0;
float z = 400.0;
const int step = 40;

//��������� ����
int Alpha = 0.0;
char buf[5];

//���������

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	Alpha = Alpha % 360;
	//�����
	glPushMatrix();

	glRotated(Alpha, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
		glVertex2f(60, 0);
		glVertex2f(-60, 0);
		glVertex2f(0, 30);
		glVertex2f(0, -30);
	glEnd();

	//glutSetWindowTitle(_itoa(Alpha, buf, 10)); //�� ��������
	std::cout << Alpha << std::endl;

	glPopMatrix();

	glutSwapBuffers();//����� ����������: ��� GLUT_DOUBLE
}
void Timer(int value) { //�� ��������� ����� 0



	Draw(); //��� glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Keyboard(unsigned char key, int x, int y) {//��� ��� ����, ����

	switch (key){
		case 'a': ++Alpha; break;
		case 'd': --Alpha; break;
		default: break;
	}
}

void SKeyboard(int key, int x, int y) {//��� ����. ��������
	//switch (key) {
	//case GLUT_KEY_LEFT: ++Alpha; break;
	//case GLUT_KEY_RIGHT: --Alpha; break;
	//default: break;
	//}
}

void Initialize() {
	glClearColor(0.0, 0.06, 0.0, 0.0);//���������

	glMatrixMode(GL_PROJECTION);//???
	glLoadIdentity();//�����
	glOrtho(-width / 2, width / 2, -height / 2, height / 2, -z / 2, z / 2);

	glMatrixMode(GL_MODELVIEW);//����������� ��������� ������

}

int main(int argc, char **argv) {

	//�����������
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_05");

	//�����������
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	glutKeyboardFunc(Keyboard);//��� ��� ����, ����
	glutSpecialFunc(SKeyboard);//��� ����. ��������

	Initialize();
	glutMainLoop();

	return 0;
}*/