/*#include <glut.h>

float height = 200.0;
float width = 400.0;
float z = 20.0;
const int step = 40;

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);

	//�����
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	for (int i = -height / 2; i <= height / 2; i = i + step) {
		glVertex2f(-height / 2, i);
		glVertex2f(height / 2, i);
	}
	for (int j = -width / 2; j <= width / 2; j = j + step) {
		glVertex2f(j, -width / 2);
		//glVertex2f(j, width / 2);
	}
	glEnd();

	glFlush();//����� ����������
}

void Initialize() {
	glClearColor(0.0, 0.06, 0.0, 0.0);//���������

	glMatrixMode(GL_PROJECTION);//
	glLoadIdentity();//�����
	glOrtho(-width /2, width /2, -height/2, height/2, -z/2, z/2);

	glMatrixMode(GL_MODELVIEW);//����������� ��������� ������
	//glTranslatef(40.0, 40.0, 0.0);//����� ������
	//glScalef(0.9, 0.9, 1.0);//������
	//glRotatef(15, 0.0, 0.0, 1.0);
}

int main(int argc, char **argv) {

	//�����������
	glutInit(&argc, argv);//���������� �������������
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//�������(����. ��������)
	glutInitWindowSize(width, height);//������� �������
	glutInitWindowPosition(100, 100);//�������

	glutCreateWindow("lesson_02");//����

	//�����������
	glutDisplayFunc(Draw);//���������
	Initialize();
	glutMainLoop();

	return 0;
}*/