/*#include <glut.h>
#include <cmath>
#include <stdlib.h>

float height = 400.0;
float width = 400.0;
float z = 400.0;
const int step = 40;

//��������� ����
float Angle = 0.0, Scale = 1.0;

//��������

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	//�����
	glPushMatrix();//��������� �������� ������

	Scale = 1.0 - abs(sin(3.14*Angle/90.0)/sqrt(3.0)/2);
	glRotated(Angle, 0.0, 0.0, 1.0);//�������� �� n ��������
	glScalef(Scale, Scale, 1.0);

	glBegin(GL_LINES);
	for (int i = -height / 2; i <= height / 2; i = i + step) {
		glVertex2f(-height / 2, i);
		glVertex2f(height / 2, i);
	}
	for (int j = -width / 2; j <= width / 2; j = j + step) {
		glVertex2f(j, -width / 2);
		glVertex2f(j, width / 2);
	}
	glEnd();

	glPopMatrix();//�������� �������� ������

	glutSwapBuffers();//����� ����������: ��� GLUT_DOUBLE
}
void Timer(int value) { //�� ��������� ����� 0

	switch (value)
	{
		case 0: glColor3f(1.0, 0.0, 0.0); break;
		case 1: glColor3f(1.0, 0.0, 1.0); break;
		default: glColor3f(0.0, 1.0, 0.0); break;
	}

	++Angle;

	//1)������: �������� �� n ��������
	//glRotated(1, 0.0, 1.0, 1.0);

	Draw(); //��� glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
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
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);//�������((��� ������(���������, ����������). ��������)
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_03");

	//�����������
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, rand() %2 );//3 ��������� ����������� � ������� Timer 
	Initialize();
	glutMainLoop();

	return 0;
}*/