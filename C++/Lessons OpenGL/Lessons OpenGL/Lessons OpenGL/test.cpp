/*#include <iostream>
#include <glut.h>
#include <cmath>

float height = 400.0;
float width = 400.0;
const int step = 40;

//��������� ����
float Alpha = 0.0, z = 0.0;

//������ � �����������

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	//�����
	glPushMatrix();//��������� �������� ������

	glRotated(Alpha, 0.0, 0.0, 1.0);//�������� �� n ��������
	
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);

	//glTranslatef(40.0, 40.0, 0.0);

	glVertex2f(-10, 10);
	glVertex2f(10, -10);
	//glVertex2f((0 + z * cos(Alpha*3.14 / 360)), (z * sin(Alpha * 3.14 / 360) - 1));

	glEnd();
	glPopMatrix();//�������� �������� ������
	glutSwapBuffers();//����� ����������: ��� GLUT_DOUBLE
}
void Timer(int value) { //�� ��������� ����� 0



	Draw(); //��� glutPostRedisplay()
	glutTimerFunc(50, Timer, 0);
}

void Keyboard(unsigned char key, int x, int y) {//��� ��� ����, ����

	switch (key) {
	case 'a': ++Alpha; break;
	case 'd': --Alpha; break;
	case 'w': ++z; break;
	case 's': --z; break;
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
	glOrtho(-width / 2, width / 2, -height / 2, height / 2, 0, 0);

	glMatrixMode(GL_MODELVIEW);//����������� ��������� ������

}

int main(int argc, char **argv) {

	//�����������
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(height, width);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("lesson_04");

	//�����������
	glutDisplayFunc(Draw);
	glutTimerFunc(50, Timer, 0);

	glutKeyboardFunc(Keyboard);//��� ��� ����, ����
	glutSpecialFunc(SKeyboard);//��� ����. ��������

	Initialize();
	glutMainLoop();

	return 0;
}*/