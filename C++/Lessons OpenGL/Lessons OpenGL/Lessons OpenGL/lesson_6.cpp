#include <glut.h>
#include <cmath>
#include <iostream>
#include <string>
#include <stdlib.h>//��� ����������� ����� � ������

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

	glutSwapBuffers();//����� ����������: ��� GLUT_DOUBLE
}



void Timer(int value) { //�� ��������� ����� 0
	Draw(); //��� glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Initialize() {

	glClearColor(0.0, 0.06, 0.0, 0.0);//���������

	glMatrixMode(GL_PROJECTION);//???
	glLoadIdentity();//�����
	//glOrtho(-width / 2, width / 2, -height / 2, height / 2, -z / 2, z / 2);
	glOrtho(0, height, width, 0, -20, 20);

	glMatrixMode(GL_MODELVIEW);//����������� ��������� ������
}
//�������� ����
void MouseMove(int ax, int ay) {
	glutSetWindowTitle("MouseMove called");
	x = ax;
	y = ay;
}
//������� ������� � ����������(�����, ���/���, ...)
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
//������� ������� � ����������(�����, ���/���, ...)
void MousePressedMove(int ax, int ay) {
	glutSetWindowTitle("MousePressedMove called");

}

int main(int argc, char **argv) {

	//�����������
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_06");

	//�����������
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	//����������� ����
	glutMotionFunc(MousePressedMove);//����� � ��������
	glutPassiveMotionFunc(MouseMove);//�������� ��� �������
	glutMouseFunc(MousePressed);//����� � ��������

	Initialize();
	glutMainLoop();

	return 0;
}