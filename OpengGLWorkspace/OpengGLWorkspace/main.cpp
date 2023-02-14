//#define GLEW_STATIC
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
#include <GL/freeglut.h>
#include <iostream>
#include <iostream>
#include <vector>
#include <cmath>
#include <windows.h>

HDC hDC;

void lineBres2(int x1, int y1, int x2, int y2)
{
	COLORREF RED = RGB(0, 255, 0);
	const int deltaX = abs(x2 - x1);
	const int deltaY = abs(y2 - y1);
	const int signX = x1 < x2 ? 1 : -1;
	const int signY = y1 < y2 ? 1 : -1;
	int error = deltaX - deltaY;
	SetPixel(hDC, x2, y2, RED);

	while (x1 != x2 || y1 != y2)
	{
		SetPixel(hDC, x1, y1, RED);
		int error2 = error * 2;
		if (error2 > -deltaY)
		{
			error -= deltaY;
			x1 += signX;
		}
		if (error2 < deltaX)
		{
			error += deltaX;
			y1 += signY;
		}
	}
}
/*
void Display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 1);
//yea
	glVertex3f(0.2, 0.4, 0.0);
	glVertex3f(0.6, 0.4, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	glVertex3f(0.2, 0.8, 0.0);
	glVertex3f(0.6, 0.8, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	
	glEnd();

	glFlush();
}

void Initialize() {
	glClearColor(0.8, 1.0, 0.6, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1, 0, 1);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 200);
	glutCreateWindow("lab1");
	glutDisplayFunc(Display);
	Initialize();
	glutMainLoop();
	return 0;
}*/
int main()
{
	hDC = GetWindowDC(GetConsoleWindow());


	int d = 20;
	lineBres2(50 + d, 60, 200 + d, 60);
	lineBres2(50 + d, 60, 200 + d, 210);
	lineBres2(50 + d, 60, 50 + d, 210);

	std::cin.get();
}

