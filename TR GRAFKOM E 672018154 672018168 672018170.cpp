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
	glRotatef(xrot, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);
	glLineWidth(2);
	glPushMatrix();

	
/////////////////////////////////////////////////////////////////////   GEDUNG KIRI   ////////////////////////////////////////////////////////
   
   //
   glBegin(GL_QUADS);// DEPAN KIRI
	glColor3f(1,0,0);
	glVertex3f( -20.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f, 8.0f, 1.0f);
    glVertex3f( -20.0f, 8.0f, 1.0f);
	
	glColor3f(1,0,0);// BELAKANG
	glVertex3f( -25.0f,  3.0f, -10.0f);
    glVertex3f( -3.0f,  3.0f, -10.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);
    glVertex3f( -25.0f, 8.0f, -10.0f);

	glColor3f(1,0,0);// ATAS
	glVertex3f( -20.0f,  8.0f, 1.0f);
    glVertex3f( -3.0f,  8.0f, 1.0f);
    glVertex3f( -3.0f, 8.0f, -10.0f);
    glVertex3f( -20.0f, 8.0f, -10.0f);

	glColor3f(1,1,1);// BAWAH
	glVertex3f( -20.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f,  3.0f, 1.0f);
    glVertex3f(  -3.0f, 3.0f, -10.0f);
    glVertex3f( -20.0f, 3.0f, -10.0f);

	glColor3f(0,0,0);// KANAN
	glVertex3f( -3.0f,  3.0f, 1.0f);
    glVertex3f( -3.0f,  4.0f, 1.0f);
    glVertex3f( -3.0f, 4.0f, -10.0f);
    glVertex3f( -3.0f, 3.0f, -10.0f);
	
	glColor3f(0,0,0);// KIRI
	glVertex3f( -25.0f,  3.0f, -2.0f);
    glVertex3f( -25.0f,  8.0f, -2.0f);
    glVertex3f( -25.0f, 8.0f, -10.0f);
    glVertex3f( -25.0f, 3.0f, -10.0f);
	
	glColor3f(1,0,1);// KIRI DEPAN
	glVertex3f( -20.0f, 8.0f, 1.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, 1.0f);

	glColor3f(1,0,1);// KIRI DEPAN
	glVertex3f( -25.0f, 8.0f, -2.0f);
	glVertex3f( -25.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);

	glColor3f(1,0,0);// ATAS DEPAN
	glVertex3f( -25.0f, 8.0f, -2.0f);
	glVertex3f( -25.0f, 8.0f, -10.0f);
	glVertex3f( -20.0f, 8.0f, -10.0f);
	glVertex3f( -20.0f, 8.0f, -2.0f);

	glColor3f(1,1,1);// BAWAH
	glVertex3f( -25.0f, 3.0f, -2.0f);
	glVertex3f( -25.0f, 3.0f, -10.0f);
	glVertex3f( -20.0f, 3.0f, -10.0f);
	glVertex3f( -20.0f, 3.0f, -2.0f);
	
	glEnd();
	
	///////////////////////////////////////////////////   GEDUNG KANAN    /////////////////////////////////////////////////////////////////////////////////////////////////////
   //
   glBegin(GL_QUADS);// DEPAN 
	glColor3f(1,0,0);
	glVertex3f(  3.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f, 8.0f, 1.0f);
    glVertex3f(  3.0f, 8.0f, 1.0f);
	
	glColor3f(1,0,0);// BELAKANG
	glVertex3f( 3.0f,  3.0f, -10.0f);
    glVertex3f( 20.0f,  3.0f, -10.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 3.0f, 8.0f, -10.0f);

	glColor3f(1,0,0);// ATAS
	glVertex3f( 3.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 3.0f, 8.0f, -10.0f);

	glColor3f(1,1,1);// BAWAH
	glVertex3f(  3.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f,  3.0f, 1.0f);
    glVertex3f(  20.0f, 3.0f, -10.0f);
    glVertex3f(  3.0f, 3.0f, -10.0f);

	glColor3f(0,0,0);// KANAN
	glVertex3f( 20.0f,  3.0f, 1.0f);
    glVertex3f( 20.0f,  8.0f, 1.0f);
    glVertex3f( 20.0f, 8.0f, -10.0f);
    glVertex3f( 20.0f, 3.0f, -10.0f);
	
	glColor3f(0,0,0);// KIRI
	glVertex3f( 3.0f,  3.0f, 1.0f);
    glVertex3f( 3.0f,  4.0f, 1.0f);
    glVertex3f( 3.0f, 4.0f, -10.0f);
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

	////////////////////////////////////////////////////////////////////    Pintu Mall DEPAN      ////////////////////////////////////////////////////
	glBegin(GL_POLYGON);

	glColor3f(1,1,1);// KIRI
	glVertex3f( -3.5f,  3.0f, 1.0f);
    glVertex3f( -3.5f,  3.8f, 1.0f);
    glVertex3f( -19.5f, 3.8f, 1.0f);
    glVertex3f( -19.5f, 3.0f, 1.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);// KANAN
	glVertex3f( 3.5f,  3.0f, 1.0f);
    glVertex3f( 3.5f,  3.8f, 1.0f);
    glVertex3f( 19.5f, 3.8f, 1.0f);
    glVertex3f( 19.5f, 3.0f, 1.0f);
	
	glEnd();

	/////////////////////////////////// sekat pintu  //////////////////////
	glBegin(GL_LINE_LOOP);//kiri
	glColor3f(0,0,0);
	glVertex3f( -3.5f,  3.0f, 1.0f);
    glVertex3f( -3.5f,  3.8f, 1.0f);
    glVertex3f( -19.5f, 3.8f, 1.0f);
    glVertex3f( -19.5f, 3.0f, 1.0f);
	glEnd();
	

   glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);     // KANAN
	glVertex3f( 3.5f,  3.0f, 1.0f);
    glVertex3f( 3.5f,  3.8f, 1.0f);
    glVertex3f( 19.5f, 3.8f, 1.0f);
    glVertex3f( 19.5f, 3.0f, 1.0f);
	   glEnd();

	   glBegin(GL_LINES);//Garis di pintu kiri
	glColor3f(0,0,0);
	glVertex3f( -11.5f,  3.0f, 1.0f);
    glVertex3f( -11.5f,  3.8f, 1.0f);
   
	glVertex3f( 11.5f,  3.0f, 1.0f);//Garis di pintu kanan
    glVertex3f( 11.5f,  3.8f, 1.0f);
   
	glEnd();


		////////////////////////////////////////////////////////////////////    Pintu Mall BELAKANG     ////////////////////////////////////////////////////
	glBegin(GL_POLYGON);

	glColor3f(1,1,1);// KIRI
	glVertex3f( -3.5f,  3.0f, -10.0f);
    glVertex3f( -3.5f,  3.8f, -10.0f);
    glVertex3f( -24.5f, 3.8f, -10.0f);
    glVertex3f( -24.5f, 3.0f, -10.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);// KANAN
	glVertex3f( 3.5f,  3.0f, -10.0f);
    glVertex3f( 3.5f,  3.8f, -10.0f);
    glVertex3f( 19.5f, 3.8f, -10.0f);
    glVertex3f( 19.5f, 3.0f, -10.0f);
	
	glEnd();

	/////////////////////////////////// sekat pintu  //////////////////////
	glBegin(GL_LINE_LOOP);//kiri
	glColor3f(0,0,0);
	glVertex3f( -3.5f,  3.0f, -10.0f);
    glVertex3f( -3.5f,  3.8f, -10.0f);
    glVertex3f( -24.5f, 3.8f, -10.0f);
    glVertex3f( -24.5f, 3.0f, -10.0f);
	glEnd();
	

   glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);     // KANAN
	glVertex3f( 3.5f,  3.0f, -10.0f);
    glVertex3f( 3.5f,  3.8f, -10.0f);
    glVertex3f( 19.5f, 3.8f, -10.0f);
    glVertex3f( 19.5f, 3.0f, -10.0f);
	   glEnd();

	   glBegin(GL_LINES);//Garis di pintu kiri
	glColor3f(0,0,0);
	glVertex3f( -13.5f,  3.0f, -10.0f);
    glVertex3f( -13.5f,  3.8f, -10.0f);
    
	glVertex3f( -18.5f,  3.0f, -10.0f);
    glVertex3f( -18.5f,  3.8f, -10.0f);
     
	glVertex3f( -8.5f,  3.0f, -10.0f);
    glVertex3f( -8.5f,  3.8f, -10.0f);
   
	glVertex3f( 11.5f,  3.0f, -10.0f);//Garis di pintu kanan
    glVertex3f( 11.5f,  3.8f, -10.0f);
   
	glEnd();

	/////////////////////////////////// Objek iklan Belakang Mall  ////////////////////
	glBegin(GL_QUADS);// BELAKANG KIRI
	glColor3f(0,0,1);
	glVertex3f(  -4.5f,  4.0f, -10.5f);
    glVertex3f(  -7.5f,  4.0f, -10.5f);
    glVertex3f(  -7.5f, 8.3f, -10.5f);
    glVertex3f(  -4.5f, 8.3f, -10.5f);
	
	glColor3f(0,0,1);// BELAKANG "TENGAH" KIRI
	glVertex3f(  -9.0f,  4.5f, -10.5f);
    glVertex3f(  -15.5f,  4.5f, -10.5f);
    glVertex3f(  -15.5f, 7.5f, -10.5f);
    glVertex3f(  -9.0f, 7.5f, -10.5f);
	
	glColor3f(0,0,1);// BELAKANG "PALING" KIRI
	glVertex3f(  -17.0f,  4.0f, -10.5f);
    glVertex3f(  -23.0f,  4.0f, -10.5f);
    glVertex3f(  -23.0f, 8.0f, -10.5f);
    glVertex3f(  -17.0f, 8.0f, -10.5f);
	

	glColor3f(0,0,1);// BELAKANG KANAN
	glVertex3f(  4.5f,  4.0f, -10.5f);
    glVertex3f(  7.5f,  4.0f, -10.5f);
    glVertex3f(  7.5f, 8.3f, -10.5f);
    glVertex3f(  4.5f, 8.3f, -10.5f);

	glColor3f(0,0,1);// BELAKANG "TENGAH" KANAN
	glVertex3f(  9.5f,  5.0f, -10.5f);
    glVertex3f(  15.5f,  5.0f, -10.5f);
    glVertex3f(  15.5f, 7.0f, -10.5f);
    glVertex3f(  9.5f, 7.0f, -10.5f);
	
	glEnd();

	glBegin(GL_POLYGON); //////  GEDUNG KIRI 1  /////
	glColor3f(1,1,1);// KIRI
	glVertex3f( -4.5f,  4.0f, -10.5f);
    glVertex3f( -4.5f,  8.3f, -10.5f);
    glVertex3f( -4.5f, 8.3f, -9.8f);
    glVertex3f( -4.5f, 8.0f, -9.8f);
	glVertex3f( -4.5f, 8.0f, -10.0f);
	glVertex3f( -4.5f, 4.0f, -10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,1);// KANAN
	glVertex3f( -7.5f,  4.0f, -10.5f);
    glVertex3f( -7.5f,  8.3f, -10.5f);
    glVertex3f( -7.5f, 8.3f, -9.8f);
    glVertex3f( -7.5f, 8.0f, -9.8f);
	glVertex3f( -7.5f, 8.0f, -10.0f);
	glVertex3f( -7.5f, 4.0f, -10.0f);

	glEnd();

	glBegin(GL_QUADS); //////  GEDUNG KIRI 2 "TENGAH KIRI"  /////
	glColor3f(1,1,1);
	glVertex3f( -9.0f,  4.5f, -10.5f);// BAWAH
    glVertex3f( -15.5f,  4.5f, -10.5f);
	glVertex3f( -15.5f, 4.5f, -10.0f);
	glVertex3f( -9.0f, 4.5f, -10.0f);

	glVertex3f( -9.0f,  4.5f, -10.5f);// KANAN
    glVertex3f( -9.0f,  7.5f, -10.5f);
	glVertex3f( -9.0f, 7.5f, -10.0f);
	glVertex3f( -9.0f, 4.5f, -10.0f);
	
	glVertex3f( -9.0f,  7.5f, -10.5f);// ATAS
    glVertex3f( -15.5f,  7.5f, -10.5f);
	glVertex3f( -15.5f, 7.5f, -10.0f);
	glVertex3f( -9.0f, 7.5f, -10.0f);

	glVertex3f( -15.5f,  4.5f, -10.5f);// KANAN
    glVertex3f( -15.5f,  7.5f, -10.5f);
	glVertex3f( -15.5f, 7.5f, -10.0f);
	glVertex3f( -15.5f, 4.5f, -10.0f);

	glEnd();

		glBegin(GL_QUADS); //////  GEDUNG KIRI 2 "PALING KIRI"  /////
	glColor3f(1,1,1);
	glVertex3f( -17.0f,  4.0f, -10.5f);// BAWAH
    glVertex3f( -23.5f,  4.0f, -10.5f);
	glVertex3f( -23.5f, 4.0f, -10.0f);
	glVertex3f( -17.0f, 4.0f, -10.0f);

	glVertex3f( -17.0f,  4.5f, -10.5f);// KANAN
    glVertex3f( -17.0f,  8.0f, -10.5f);
	glVertex3f( -17.0f, 8.0f, -10.0f);
	glVertex3f( -17.0f, 4.5f, -10.0f);
	
	glVertex3f( -17.0f,  8.0f, -10.5f);// ATAS
    glVertex3f( -23.5f,  8.0f, -10.5f);
	glVertex3f( -23.5f, 8.0f, -10.0f);
	glVertex3f( -17.0f, 8.0f, -10.0f);

	glVertex3f( -23.5f,  4.5f, -10.5f);// KANAN
    glVertex3f( -23.5f,  8.0f, -10.5f);
	glVertex3f( -23.5f, 8.0f, -10.0f);
	glVertex3f( -23.5f, 4.5f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON); //////  GEDUNG KANAN 1  /////
	glColor3f(1,1,1);// KIRI
	glVertex3f( 4.5f,  4.0f, -10.5f);
    glVertex3f( 4.5f,  8.3f, -10.5f);
    glVertex3f( 4.5f, 8.3f, -9.8f);
    glVertex3f( 4.5f, 8.0f, -9.8f);
	glVertex3f( 4.5f, 8.0f, -10.0f);
	glVertex3f( 4.5f, 4.0f, -10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,1,1);// KANAN
	glVertex3f( 7.5f,  4.0f, -10.5f);
    glVertex3f( 7.5f,  8.3f, -10.5f);
    glVertex3f( 7.5f, 8.3f, -9.8f);
    glVertex3f( 7.5f, 8.0f, -9.8f);
	glVertex3f( 7.5f, 8.0f, -10.0f);
	glVertex3f( 7.5f, 4.0f, -10.0f);

	glEnd();

	glBegin(GL_QUADS); //////  OBJEK IKLAN GEDUNG KANAN 2  /////
	
	glColor3f(1,1,1);// DEPAN "TENGAH" KANAN
	glVertex3f(  9.5f,  5.0f, -10.5f);//BAWAH 
    glVertex3f(  15.5f,  5.0f, -10.5f);
	glVertex3f(  15.5f,  5.0f, -10.0f);
	glVertex3f(  9.5f,  5.0f, -10.0f);

	glVertex3f(  15.5f,  5.0f, -10.5f);// KANAN
    glVertex3f(  15.5f,  7.0f, -10.5f);
	glVertex3f(  15.5f,  7.0f, -10.0f);
	glVertex3f(  15.5f,  5.0f, -10.0f);

	glVertex3f(  9.5f,  7.0f, -10.5f);//ATAS
    glVertex3f(  15.5f,  7.0f, -10.5f);
	glVertex3f(  15.5f,  7.0f, -10.0f);
	glVertex3f(  9.5f,  7.0f, -10.0f);

	glVertex3f(  9.5f,  5.0f, -10.5f);//KIRI 
    glVertex3f(  9.5f,  7.0f, -10.5f);
	glVertex3f(  9.5f,  7.0f, -10.0f);
	glVertex3f(  9.5f,  5.0f, -10.0f);
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