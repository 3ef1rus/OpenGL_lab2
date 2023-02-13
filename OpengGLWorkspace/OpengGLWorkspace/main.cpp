//#define GLEW_STATIC
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
#include <GL/freeglut.h>
#include <iostream>


//const GLchar* vertexShaderSource[] = { "#version 330 core\nlayout(location = 0) in vec3 position; void main(){	gl_Position = vec4(position.x, position.y, position.z, 1.0);}" };
//const GLchar* fragmentShaderSource[] = {"#version 330 core\nout vec4 color; void main(){color = vec4(1.0f, 0.5f, 0.2f, 1.0f);}"};
//
//void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
//{
//	// ����� ������������ �������� ESC, �� ������������� �������� WindowShouldClose � true, 
//	// � ���������� ����� ����� ���������
//	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
//		glfwSetWindowShouldClose(window, GL_TRUE);
//}
//
//
//GLFWwindow* init() {
//
//	//������������� GLFW
//	glfwInit();
//	//��������� GLFW
//	//�������� ����������� ��������� ������ OpenGL. 
//	//�������� 
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	//��������
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	//��������� �������� ��� �������� ��������� ��������
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	//���������� ����������� ��������� ������� ����
//	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
//
//	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
//	if (window == nullptr)
//	{
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return window;
//	}
//	glfwMakeContextCurrent(window);
//
//
//
//	int width, height;
//	glfwGetFramebufferSize(window, &width, &height);
//
//	glViewport(0, 0, width, height);
//
//	glfwSetKeyCallback(window, key_callback);
//
//	return window;
//
//}
//
//int main2()
//{
//
//	GLFWwindow* window = init();
//	if (window == nullptr) {
//		return -1;
//	}
//
//	glewExperimental = GL_TRUE;
//	if (glewInit() != GLEW_OK)
//	{
//		std::cout << "Failed to initialize GLEW" << std::endl;
//		return -1;
//	}
//
//	GLfloat vertices[] = {
//		-0.5f, -0.5f, 0.0f,
//		 0.5f, -0.5f, 0.0f,
//		 0.0f,  0.5f, 0.0f
//	};
//
//	GLuint vbo;
//	glGenBuffers(1, &vbo);
//	glBindBuffer(GL_ARRAY_BUFFER, vbo);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	
//	//GLuint vertexShader;
//	//vertexShader = glCreateShader(GL_VERTEX_SHADER);
//	//glShaderSource(vertexShader, 1, vertexShaderSource, NULL);
//	//glCompileShader(vertexShader);
//
//	//GLint isCompiled;
//	//GLchar inflog[512];
//	//glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &isCompiled);
//
//	//if (isCompiled == GL_FALSE) {
//	//	glGetShaderInfoLog(vertexShader, 512, NULL, inflog);
//	//	std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << inflog << std::endl;
//
//	//	glDeleteShader(vertexShader);
//	//	return -1;
//	//}
//
//	//GLuint fragmentShader;
//	//fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//	//glShaderSource(fragmentShader, 2, fragmentShaderSource, NULL);
//	//glCompileShader(fragmentShader);
//
//	//glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &isCompiled);
//
//	//if (isCompiled == GL_FALSE) {
//	//	glGetShaderInfoLog(fragmentShader, 512, NULL, inflog);
//	//	std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << inflog << std::endl;
//
//	//	glDeleteShader(vertexShader);
//	//	return -1;
//	//}
//
//	while (!glfwWindowShouldClose(window))
//	{
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		//glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwPollEvents();
//		glfwSwapBuffers(window);
//	}
//
//	glfwTerminate();
//	return 0;
//}
//
//#include <gl/glut.h>

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
	////glBegin(GL_POLYGON);
	////glColor3f(1, 0, 0);

	/*glVertex3f(0.2, 0.2, 0.0);
	glVertex3f(0.2, 0.4, 0.0);
	glVertex3f(0.9, 0.4, 0.0);
	glVertex3f(0.9, 0.2, 0.0);*/
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
}


