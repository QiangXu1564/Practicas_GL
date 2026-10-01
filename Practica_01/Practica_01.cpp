/***************************************************
*	Primer_Proyecto.cpp
*
*	Codigo ejemplo inicial para practicas con OpenGL
*	y GLUT para ETSINF/UPV
*
*	@author	R.Vivo' <rvivo@upv.es>
*
***************************************************/
#define PROYECTO "Primer programa en OpenGL"

#include <iostream>	
#include <codebase.h>
using namespace cb;


// Funcion de atencion al evento de dibujo
void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	gluLookAt(0, 0, 0, -1, -1, -1, 0, 1, 0); //Posicion de la camara, punto de mira y vector up

	ejes();

	glColor3f(1, 0, 0); //Tres floats para el color rojo
	glutSolidTeapot(0.49);

	glColor3fv(cb::BLANCO); //Tres floats para el color blanco en vector
	glutWireTeapot(0.5);
	glFlush();
}

// Funcion de atencion al redimensionamiento
void reshape(GLint w, GLint h)
{
}

int main(int argc, char** argv)
{
	// Inicializaciones
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);

	// Crear ventana
	glutCreateWindow(PROYECTO);

	// Registrar callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);

	// Bucle de atencion a eventos
	glutMainLoop();
}
