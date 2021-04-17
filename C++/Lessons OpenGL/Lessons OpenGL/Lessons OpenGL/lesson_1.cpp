/*#include <glut.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);//зарисовка 
	
	//точка 
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POINTS);
		glVertex2f(0.0, 0.0);
	glEnd();
	
	glFlush();//далее выполнение
}

void Initialize() {
	glClearColor(0.2, 0.0, 0.0, 0.0);//фон
	
	glMatrixMode(GL_PROJECTION);//матрица проекции
	glLoadIdentity();//сброс
	glOrtho(-250.0 ,250.0 ,-250.0 ,250.0 ,-10.0 ,10.0);//3д система
}

int main(int argc, char **argv) {

	//Иниализация
	glutInit(&argc, argv);//глобальная инициализация
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//дисплей(стат. картинка)
	glutInitWindowSize(500, 500);//размеры дисплея
	glutInitWindowPosition(100, 100);//позиция
	glutCreateWindow("lesson_01");//окно
	
	//Регистрация
	glutDisplayFunc(Draw);//рисование
	Initialize();
	glutMainLoop();//главный цыкл
		
	return 0;
}*/