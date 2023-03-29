#include <gl/glut.h>
void DibujarTorti() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);//pie derecho trasero1
	glColor3f(0.71, 0.74, 0.34);
	glVertex2i(190,50);
	glVertex2i(100,50);
	glVertex2i(180,80);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho trasero2
	glColor3f(0.52, 0.61, 0.26);
	glVertex2i(180, 80);
	glVertex2i(100, 50);
	glVertex2i(90, 70.5);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho trasero3
	glColor3f(0.55, 0.63, 0.29);
	glVertex2i(120, 120);
	glVertex2i(90, 70.5);
	glVertex2i(90, 125);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho trasero4
	glColor3f(0.35, 0.42, 0.18);
	glVertex2i(180, 80);
	glVertex2i(150, 115);
	glVertex2i(170, 110);
	glEnd();
	glBegin(GL_POLYGON);//pie derecho trasero5
	glColor3f(0.62, 0.68, 0.31);
	glVertex2i(180,80);
	glVertex2i(90, 70.5);
	glVertex2i(120, 120);
	glVertex2i(150, 115);
	glEnd();
	glBegin(GL_TRIANGLES);//pie izquierdo trasero6
	glColor3f(0.37, 0.44, 0.20);
	glVertex2i(93, 65);
	glVertex2i(45, 65);
	glVertex2i(90, 80);
	glVertex2i(76, 70);
	glEnd();
	glBegin(GL_POLYGON);//pie izquierdo trasero7
	glColor3f(0.47, 0.55, 0.26);
	glVertex2i(90, 80);
	glVertex2i(45, 65);
	glVertex2i(20, 85);
	glVertex2i(90,86);
	glEnd();
	glBegin(GL_TRIANGLES);//pie izquierdo trasero8
	glColor3f(0.37, 0.44, 0.20);
	glVertex2i(90, 86);
	glVertex2i(20, 85);
	glVertex2i(90, 115);
	glEnd();
	glBegin(GL_POLYGON);//pie izquierdo trasero9
	glColor3f(0.21, 0.26, 0.13);
	glVertex2i(90, 115);
	glVertex2i(20, 85);
	glVertex2i(50, 130);
	glVertex2i(90, 125);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON10
	glColor3f(0.17, 0.22, 0.13);
	glVertex2i(170, 110);
	glVertex2i(40, 130);
	glVertex2i(75, 150);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON11
	glColor3f(0.20, 0.28, 0.15);
	glVertex2i(40, 130);
	glVertex2i(15, 230);
	glVertex2i(75, 150);
	glEnd();
	glBegin(GL_TRIANGLES);//Cola12
	glColor3f(0.25, 0.33, 0.15);
	glVertex2i(37, 145);
	glVertex2i(20, 144);
	glVertex2i(28, 180);
	glEnd();
	glBegin(GL_POLYGON);//Cola13
	glColor3f(0.50, 0.57, 0.24);
	glVertex2i(20, 144);
	glVertex2i(0, 143);
	glVertex2i(26, 188);
	glVertex2i(28, 180);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON14
	glColor3f(0.18, 0.30, 0.17);
	glVertex2i(170, 110);
	glVertex2i(75, 150);
	glVertex2i(225, 170);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON15
	glColor3f(0.18, 0.39, 0.26);
	glVertex2i(225, 170);
	glVertex2i(75, 150);
	glVertex2i(180, 220);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON16
	glColor3f(0.18, 0.33, 0.23);
	glVertex2i(75, 150);
	glVertex2i(15, 230);
	glVertex2i(180, 220);
	glEnd();
	glBegin(GL_POLYGON);//PARTE DE CAPARAZON17
	glColor3f(0.24, 0.33, 0.21);
	glVertex2i(220, 100);
	glVertex2i(173, 100);
	glVertex2i(170, 110);
	glVertex2i(190, 123);
	glEnd();
	glBegin(GL_POLYGON);//PARTE DE CAPARAZON18
	glColor3f(0.19, 0.28, 0.20);
	glVertex2i(220, 100);
	glVertex2i(190, 123);
	glVertex2i(220, 145);
	glVertex2i(235, 138);
	glEnd();
	glBegin(GL_POLYGON);//PARTE DE CAPARAZON19
	glColor3f(0.21, 0.26, 0.16);
	glVertex2i(220, 100);
	glVertex2i(235, 138);
	glVertex2i(265, 120);
	glVertex2i(263, 110);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON20
	glColor3f(0.25, 0.31, 0.17);
	glVertex2i(265, 120);
	glVertex2i(220, 145);
	glVertex2i(276, 180);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON21
	glColor3f(0.14, 0.26, 0.14);
	glVertex2i(300, 190);
	glVertex2i(170, 110);
	glVertex2i(225, 170);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON22
	glColor3f(0.19, 0.31, 0.19);
	glVertex2i(300, 190);
	glVertex2i(225, 170);
	glVertex2i(317, 270);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON23
	glColor3f(0.21, 0.41, 0.27);
	glVertex2i(225, 170);
	glVertex2i(180, 220);
	glVertex2i(317, 270);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON24
	glColor3f(0.47, 0.71, 0.44);
	glVertex2i(317, 270);
	glVertex2i(180, 220);
	glVertex2i(210, 320);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON25
	glColor3f(0.59, 0.80, 0.51);
	glVertex2i(210, 320);
	glVertex2i(180, 220);
	glVertex2i(90, 295);
	glEnd();
	glBegin(GL_TRIANGLES);//PARTE DE CAPARAZON26
	glColor3f(0.30, 0.50, 0.31);
	glVertex2i(180, 220);
	glVertex2i(90, 295);
	glVertex2i(15, 230);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero27
	glColor3f(0.68, 0.73, 0.34);
	glVertex2i(320, 50);
	glVertex2i(265, 50);
	glVertex2i(310, 90);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero28
	glColor3f(0.50, 0.59, 0.25);
	glVertex2i(310, 90);
	glVertex2i(265, 50);
	glVertex2i(255, 90);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero29
	glColor3f(0.57, 0.64, 0.38);
	glVertex2i(310, 90);
	glVertex2i(255, 90);
	glVertex2i(265, 120);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero30
	glColor3f(0.50, 0.59, 0.26);
	glVertex2i(310, 90);
	glVertex2i(265, 120);
	glVertex2i(275, 177);
	glEnd();
	glBegin(GL_POLYGON);//pie derecho delantero31
	glColor3f(0.66, 0.70, 0.38);
	glVertex2i(340, 90);
	glVertex2i(316, 65);
	glVertex2i(317, 60);
	glVertex2i(360, 60);
	glEnd();
	glBegin(GL_POLYGON);//pie derecho delantero32
	glColor3f(0.33, 0.42, 0.20);
	glVertex2i(310, 90);
	glVertex2i(325, 140);
	glVertex2i(340, 90);
	glVertex2i(316, 65);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero33
	glColor3f(0.46, 0.54, 0.23);
	glVertex2i(285, 150);
	glVertex2i(330, 150);
	glVertex2i(310, 90);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero34
	glColor3f(0.68, 0.73, 0.34);
	glVertex2i(286, 150);
	glVertex2i(310, 170);
	glVertex2i(330, 150);
	glEnd();
	glBegin(GL_TRIANGLES);//pie derecho delantero35
	glColor3f(0.74, 0.77, 0.34);
	glVertex2i(286, 150);
	glVertex2i(275, 175);
	glVertex2i(310, 170);
	glEnd();
	glBegin(GL_POLYGON);//CUELLO36abajo
	glColor3f(0.24, 0.33, 0.15);
	glVertex2i(275, 175);
	glVertex2i(310, 170);
	glVertex2i(320, 160);
	glVertex2i(300, 190);
	glVertex2i(320, 190);
	glEnd();
	glBegin(GL_POLYGON);//CUELLO36arriba
	glColor3f(0.30, 0.35, 0.19);
	glVertex2i(320, 160);
	glVertex2i(300, 190);
	glVertex2i(330, 275);
	glVertex2i(320, 190);
	glEnd(); 
	glBegin(GL_TRIANGLES);//CUELLO36UEVO
	glColor3f(0.30, 0.35, 0.19);
	glVertex2i(330, 275);
	glVertex2i(312, 250);
	glVertex2i(300, 190);
	glEnd();
	glBegin(GL_POLYGON);//CUELLO37
	glColor3f(0.32, 0.41, 0.19);
	glVertex2i(320, 160);
	glVertex2i(330, 150);
	glVertex2i(370, 220);
	glVertex2i(320, 190);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO38
	glColor3f(0.38, 0.48, 0.21);
	glVertex2i(370, 220);
	glVertex2i(320, 190);
	glVertex2i(330, 275);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO39
	glColor3f(0.48, 0.56, 0.26);
	glVertex2i(370, 220);
	glVertex2i(330, 275);
	glVertex2i(370, 323);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO40
	glColor3f(0.38, 0.48, 0.21);
	glVertex2i(370, 323);
	glVertex2i(330, 275);
	glVertex2i(350, 350);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO41
	glColor3f(0.48, 0.57, 0.24);
	glVertex2i(350, 350);
	glVertex2i(330, 275);
	glVertex2i(320,400);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO42
	glColor3f(0.32, 0.40, 0.19);
	glVertex2i(370, 323);
	glVertex2i(350, 350);
	glVertex2i(435, 367);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO43
	glColor3f(0.54, 0.62, 0.28);
	glVertex2i(435, 367);
	glVertex2i(350, 350);
	glVertex2i(373, 404);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO44
	glColor3f(0.71, 0.75, 0.36);
	glVertex2i(373, 404);
	glVertex2i(350, 350);
	glVertex2i(320, 400);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO45
	glColor3f(0.58, 0.67, 0.31);
	glVertex2i(373, 404);
	glVertex2i(320, 400);
	glVertex2i(345, 430);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO46
	glColor3f(0.69, 0.76, 0.39);
	glVertex2i(435, 367);
	glVertex2i(373, 404);
	glVertex2i(435, 415);
	glEnd();
	glBegin(GL_TRIANGLES);//CUELLO47
	glColor3f(0.68, 0.73, 0.39);
	glVertex2i(373, 404);
	glVertex2i(345, 430);
	glVertex2i(435, 415);
	glEnd();
	glFlush();
}

void IniciarConfiguracion() {
	glClearColor(0.96, 1.00, 0.82, 0);
	glColor3f(0.96, 1.00, 0.82);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Tortugueshion");
	glutDisplayFunc(DibujarTorti);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}