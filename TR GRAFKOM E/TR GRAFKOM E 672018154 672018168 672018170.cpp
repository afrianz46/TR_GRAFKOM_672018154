#include <windows.h>
#include <glut.h>
#include <math.h>
#include <stdlib.h>

                                
                             // Tekan tombol "W" 8x untuk melihat HASIL RUMAH FULL.......!!! 

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
int is_depth;

bool mouseDown = false;

void CodinganRumah() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);
	glPushMatrix();

	
/////////////////////////////////////////////////////////////////////   GEDUNG KIRI   ////////////////////////////////////////////////////////
   
   //
   glBegin(GL_QUADS);// DEPAN KIRI
	glColor3ub(128,0,0);
	glVertex3f( -20.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f, 8.0f, 1.0f);
    glVertex3f( -20.0f, 8.0f, 1.0f);
	
	glColor3ub(128,0,0);// BELAKANG
	glVertex3f( -25.0f,  3.0f, -10.0f);
    glVertex3f( -3.0f,  3.0f, -10.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);
    glVertex3f( -25.0f, 8.0f, -10.0f);

	glColor3ub(128,0,0);// ATAS
	glVertex3f( -20.0f,  8.0f, 1.0f);
    glVertex3f( -3.0f,  8.0f, 1.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);
    glVertex3f( -20.0f, 8.0f, -10.0f);

	glColor3ub(128,0,0);// BAWAH
	glVertex3f( -20.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f, 3.0f, -10.0f);
    glVertex3f( -20.0f, 3.0f, -10.0f);

	glColor3f(0,0,0);// KANAN
	glVertex3f( -3.0f,  3.0f, 1.0f);
    glVertex3f( -3.0f,  8.0f, 1.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);
    glVertex3f( -3.0f, 3.0f, -10.0f);
	
	glColor3ub(0,0,0);// KIRI
	glVertex3f( -25.0f,  3.0f, -2.0f);
    glVertex3f( -25.0f,  8.0f, -2.0f);
    glVertex3f( -25.0f, 8.0f, -10.0f);
    glVertex3f( -25.0f, 3.0f, -10.0f);
	
	glColor3f(1,0,0);// KIRI DEPAN
	glVertex3f( -20.0f, 8.0f, 1.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, 1.0f);

	glColor3f(0,0,0);// KIRI DEPAN
	glVertex3f( -25.0f, 8.0f, -2.0f);
	glVertex3f( -25.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);

	glColor3f(1,0,1);// ATAS DEPAN
	glVertex3f( -25.0f, 8.0f, -2.0f);
	glVertex3f( -25.0f, 8.0f, -10.0f);
	glVertex3f( -20.0f, 8.0f, -10.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);

	glColor3f(1,0,1);// BAWAH
	glVertex3f( -25.0f, 3.0f, -2.0f);
	glVertex3f( -25.0f, 3.0f, -10.0f);
	glVertex3f( -20.0f, 3.0f, -10.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	
	glEnd();
	
	///////////////////////////////////////////////////   GEDUNG KANAN    /////////////////////////////////////////////////////////////////////////////////////////////////////
   //
   glBegin(GL_QUADS);// DEPAN 
	glColor3ub(128,0,0);
	glVertex3f(  3.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f, 8.0f, 1.0f);
    glVertex3f(  3.0f, 8.0f, 1.0f);
	
	glColor3ub(128,0,0);// BELAKANG
	glVertex3f( 3.0f,  3.0f, -10.0f);
    glVertex3f( 20.0f,  3.0f, -10.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 3.0f, 8.0f, -10.0f);

	glColor3ub(128,0,0);// ATAS
	glVertex3f( 3.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 3.0f, 8.0f, -10.0f);

	glColor3ub(128,0,0);// BAWAH
	glVertex3f(  3.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f, 3.0f, -10.0f);
    glVertex3f(  3.0f, 3.0f, -10.0f);

	glColor3f(1,1,1);// KANAN
	glVertex3f( 20.0f,  3.0f, 1.0f);
    glVertex3f( 20.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 20.0f, 3.0f, -10.0f);
	
	glColor3f(0,0,0);// KIRI
	glVertex3f( 3.0f,  3.0f, 1.0f);
    glVertex3f( 3.0f,  8.0f, 1.0f);
    glVertex3f( 3.0f, 8.0f, -10.0f);
    glVertex3f( 3.0f, 3.0f, -10.0f);
	glEnd();

	////////////////////////////////////////////////////////////////////    GEDUNG TENGAH       ////////////////////////////////////////////////////
	
	glBegin(GL_QUADS);// DEPAN 
	glColor3f(1,0,1);
	glVertex3f(  -3.0f,  4.0f, 1.0f);
    glVertex3f(   3.0f,  4.0f, 1.0f);
    glVertex3f(   3.0f, 8.0f, 1.0f);
    glVertex3f(  -3.0f, 8.0f, 1.0f);
	
	glColor3f(1,0,1);// BELAKANG
	glVertex3f( -3.0f,  4.0f, -10.0f);
    glVertex3f(  3.0f,  4.0f, -10.0f);
    glVertex3f(  3.0f, 8.0f, -10.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);

	glColor3f(1,0,1);// ATAS
	glVertex3f( -3.0f,  8.0f, 1.0f);
    glVertex3f(  3.0f,  8.0f, 1.0f);
    glVertex3f(  3.0f, 8.0f, -10.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);

	glColor3f(1,0,1);// BAWAH
	glVertex3f(  -3.0f,  4.0f, 1.0f);
    glVertex3f(   3.0f,  4.0f, 1.0f);
    glVertex3f(   3.0f, 4.0f, -10.0f);
    glVertex3f(  -3.0f, 4.0f, -10.0f);

	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}

void idle(){
	if(!mouseDown){
	    xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}
 
void mouseMotion(int x, int y){
	if (mouseDown){
		yrot = x - xdiff;
		xrot = y + ydiff;
		
	} glutPostRedisplay();
}


void FungsiKeyboard(unsigned char key, int x, int y) {
	switch (key) {
		//gerak ke kiri
		case 'A':
		case 'a':
		glTranslatef(-1.0, 0.0, 0.0);
		break;

		//gerak ke kanan
		case 'D':
		case 'd':
		glTranslatef(1.0, 0.0, 0.0);
		break;

		//gerak ke depan
		case 'S':
		case 's':
		glTranslatef(0.0, 0.0, 1.0);
		break;

		//gerak ke belakang
		case 'W':
		case 'w':
		glTranslatef(0.0, 0.0, -1.0);
		break;

		//gerak ke atas
		case 'Q':
		case 'q':
		glTranslatef(0.0, 1.0, 0.0);
		break;

		//gerak ke bawah
		case 'Z':
		case 'z':
		glTranslatef(0.0, -1.0, 0.0);
		break;

		//rotate ke kiri
		case 'Y':
		case 'y':
		glRotatef(1.0, 0.0, -5.0, 0.0);
		break;

		//rotate ke kanan
		case 'I':
		case 'i':
		glRotatef(1.0, 0.0, 5.0, 0.0);
		break;

		//rotate ke samping kanan
		case 'K':
		case 'k':
		glRotatef(1.0, 0.0, 0.0, -5.0);
		break;

		//rotate ke samping kiri
		case 'H':
		case 'h':
		glRotatef(1.0, 0.0, 0.0, 5.0);
		break;

		//rotate ke atas
		case 'U':
		case 'u':
		glRotatef(1.0, -5.0, 0.0, 0.0);
		break;

		//rotate ke bawah
		case 'J':
		case 'j':
		glRotatef(1.0, 5.0, 0.0, 0.0);
		break;

		case '5':
			if (is_depth){
			is_depth = 0;
			glDisable (GL_DEPTH_TEST);
			}else
			{
			is_depth = 1;
			glDisable (GL_DEPTH_TEST);
			}
        CodinganRumah();
		break;

		//exit
		case 27:
		exit(0);
	}
	CodinganRumah();
}

void SudutPandang(int width, int height) {
	if (height == 0) height = 1;
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0f, aspect, 0.1f, 100.0f);
}

void inisialisasi() {
	glClearColor(0.5 , 1 , 1 , 1);
	glClearDepth(1.0f);
	glEnable(GL_LIGHTING);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	is_depth = 1;
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("TR-GRAFKOM");
	glutDisplayFunc(CodinganRumah);
	glutReshapeFunc(SudutPandang);
	glutKeyboardFunc(FungsiKeyboard);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	inisialisasi();
	glutMainLoop();
	return 0;
}