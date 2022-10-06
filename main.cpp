#include <GL/glut.h>
#include <math.h>

void fondo() {
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 109);
	glVertex2d(0, 14);
	glVertex2d(25, 14);
	glVertex2d(25, 0);
	glVertex2d(0, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(23, 32, 109);
	glVertex2d(0, 5);
	glVertex2d(25, 5);
	glColor3ub(255, 255, 255);
	glVertex2d(25, 0);
	glVertex2d(0, 0);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(1, 36, 136);
	glVertex2d(0, 1.25);
	glVertex2d(25, 1.25);
	glVertex2d(25, 0);
	glVertex2d(0, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2d(0, 1.75);
	glVertex2d(25, 1.75);
	glColor3ub(39, 40, 210);
	glVertex2d(25, 1.25);
	glVertex2d(0, 1.25);
	glEnd();
}

void circuloReflejo1() {
	glBegin(GL_POLYGON);
	float radio = 1.9;
	float cx, cy;
	glColor3ub(34, 71, 185);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 12.4, cy + 8.5);
	}
	glEnd();
}

void circuloReflejo2() {
	glBegin(GL_POLYGON);
	float radio = 1.5;
	float cx, cy;
	glColor3ub(65, 110, 203);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 12.4, cy + 8.5);
	}
	glEnd();
}

void circuloReflejo3() {
	glBegin(GL_POLYGON);
	float radio = 1.1;
	float cx, cy;
	glColor3ub(93, 131, 214);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 12.4, cy + 8.5);
	}
	glEnd();
}

void Luna() {
	glBegin(GL_POLYGON);
	float radio = 0.8;
	float cx, cy;
	glColor3ub(240, 237, 236);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 12.4, cy + 8.5);
	}
	glEnd();
}

void Estrellas() {
		glBegin(GL_POINTS);
		glColor3ub(240, 237, 236);
		glVertex2d(4, 8);
		glVertex2d(2, 12);
		glVertex2d(5, 9);
		glVertex2d(3, 6);
		glVertex2d(3, 11);
		glVertex2d(3.6, 8.8);
		glVertex2d(1, 13);
		glVertex2d(1, 8.5);
		glVertex2d(6, 8);
		glVertex2d(6.4, 10.5);
		glVertex2d(8, 9.5);
		glVertex2d(4.75, 12.45);
		glVertex2d(8.3, 12.4);
		glVertex2d(7.1, 12.8);
		glVertex2d(6.8, 7.4);
		glVertex2d(7.6, 5.7);
		glVertex2d(9.1, 8.5);
		glVertex2d(9.6, 10.6);
		glVertex2d(11.3, 12.2);
		glVertex2d(15.1, 12.9);
		glVertex2d(19.2, 12.8);
		glVertex2d(23.3, 12.8);
		glVertex2d(24.4, 9.5);
		glVertex2d(23.2, 7.8);
		glVertex2d(22.5, 9.9);
		glVertex2d(19.5, 10);
		glVertex2d(20.5, 11.1);
		glVertex2d(16.7, 11);
		glVertex2d(13.8, 11.3);
		glVertex2d(17.3, 8.1);
		glVertex2d(14.7, 6.6);
		glVertex2d(16.5, 5.7);
		glVertex2d(21.2, 5.9);
		glVertex2d(20, 8);
		glEnd();
}

void Pared1() {
	glBegin(GL_POLYGON);
	glColor3ub(21, 58, 139);
	glVertex2d(2.45, 1.25);
	glVertex2d(2.45, 2.5);
	glColor3ub(140, 169, 249);
	glVertex2d(6.5, 2.5);
	glVertex2d(6.5, 1.25);

	glEnd();
}

void Techo1() {
	glBegin(GL_POLYGON);
	glColor3ub(140, 169, 249);
	glVertex2d(2, 2.35);
	glVertex2d(3.85, 4.35);
	glColor3ub(77, 115, 240);
	glVertex2d(7.85, 4.35);
	glVertex2d(6.4, 2.35);

	glEnd();
}

void Pared2() {
	glBegin(GL_POLYGON);
	glColor3ub(77, 115, 240);
	glVertex2d(6.5, 1.25);
	glVertex2d(6.5, 2.5);
	glColor3ub(140, 169, 249);
	glVertex2d(7.80, 4.2);
	glVertex2d(8.5, 2.8);
	glVertex2d(8.5, 1.75);
	glVertex2d(6.5,1.25);
	

	glEnd();
}

void Techo2() {
	glBegin(GL_POLYGON);
	glVertex2d(7.8, 4.2);
	glVertex2d(7.85, 4.35);
	glVertex2d(8.65, 2.75);
	glVertex2d(8.5, 2.8);

	glEnd();
}

void Puerta() {
	glBegin(GL_POLYGON);
	glColor3ub(17, 54, 134);
	glVertex2d(7.2, 1.41);
	glVertex2d(7.2, 2.8);
	glVertex2d(8, 2.95);
	glVertex2d(8, 1.61);

	glEnd();
}

void Arbol() {
	glBegin(GL_POLYGON);
	glColor3ub(17, 22, 86);
	glVertex2d(0.2, 0);
	glVertex2d(0.7, 3.1);
	glVertex2d(1, 0);

	glEnd();
}

void Arbol1() {
	glBegin(GL_POLYGON);
	glColor3ub(17, 22, 86);
	glVertex2d(1, 0);
	glVertex2d(1.5, 2.7);
	glVertex2d(2, 0);

	glEnd();
}

void Arbol2() {
	glBegin(GL_POLYGON);
	glColor3ub(17, 22, 86);
	glVertex2d(1, 0);
	glVertex2d(1.5, 2.7);
	glVertex2d(2, 0);

	glEnd();
}

void Arbol3() {
	glBegin(GL_POLYGON);
	glColor3ub(33,50, 122);
	glVertex2d(9, 1.75);
	glVertex2d(9.5, 4.5);
	glVertex2d(10, 1.75);

	glEnd();
}
void Arbol4() {
	glBegin(GL_POLYGON);
	glColor3ub(33, 50, 122);
	glVertex2d(10, 1.75);
	glVertex2d(11, 6.5);
	glVertex2d(12, 1.75);

	glEnd();
}

void Arbol5() {
	glBegin(GL_POLYGON);
	glColor3ub(33, 50, 122);
	glVertex2d(11.5, 1.75);
	glVertex2d(13, 5.5);
	glVertex2d(14, 1.75);

	glEnd();
}
void Arbol6() {
	glBegin(GL_POLYGON);
	glColor3ub(33, 50, 122);
	glVertex2d(13.5, 1.75);
	glVertex2d(14.5, 3.5);
	glVertex2d(15, 1.75);

	glEnd();
}

void Arbol7() {
	glBegin(GL_POLYGON);
	glColor3ub(4, 20, 82);
	glVertex2d(21, 1.25);
	glVertex2d(21.5, 2.5);
	glVertex2d(22, 1.25);

	glEnd();
}

void Arbol8() {
	glBegin(GL_POLYGON);
	glColor3ub(4, 20, 82);
	glVertex2d(21.5, 1.25);
	glVertex2d(22, 3.5);
	glVertex2d(22.5, 1.25);

	glEnd();
}

void Arbol9() {
	glBegin(GL_POLYGON);
	glColor3ub(4, 20, 82);
	glVertex2d(22, 1.25);
	glVertex2d(23, 4.5);
	glVertex2d(24, 1.25);

	glEnd();
}

void Arbol10() {
	glBegin(GL_POLYGON);
	glColor3ub(4, 20, 82);
	glVertex2d(23.5, 1.25);
	glVertex2d(24.5, 6.5);
	glVertex2d(26, 1.25);

	glEnd();
}
void dibujar() {
	glLoadIdentity();
	gluOrtho2D(0, 25, 0, 14);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5);

	fondo();
	circuloReflejo1();
	circuloReflejo2();
	circuloReflejo3();
	Luna();
	Estrellas();
	Pared1();
	Techo1();
	Techo2();
	Pared2();
	Puerta();
	Arbol();
	Arbol1();
	Arbol2();
	Arbol3();
	Arbol4();
	Arbol5();
	Arbol6();
	Arbol7();
	Arbol8();
	Arbol9();
	Arbol10();

	glFlush();
	
	
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ventana");
	glutDisplayFunc(dibujar);
	glutMainLoop();
	return 0;
}