/*#include <glut.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);//��������� 
	
	//����� 
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POINTS);
		glVertex2f(0.0, 0.0);
	glEnd();
	
	glFlush();//����� ����������
}

void Initialize() {
	glClearColor(0.2, 0.0, 0.0, 0.0);//���
	
	glMatrixMode(GL_PROJECTION);//������� ��������
	glLoadIdentity();//�����
	glOrtho(-250.0 ,250.0 ,-250.0 ,250.0 ,-10.0 ,10.0);//3� �������
}

int main(int argc, char **argv) {

	//�����������
	glutInit(&argc, argv);//���������� �������������
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//�������(����. ��������)
	glutInitWindowSize(500, 500);//������� �������
	glutInitWindowPosition(100, 100);//�������
	glutCreateWindow("lesson_01");//����
	
	//�����������
	glutDisplayFunc(Draw);//���������
	Initialize();
	glutMainLoop();//������� ����
		
	return 0;
}*/