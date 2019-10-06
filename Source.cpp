#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i, x1 = 0;
void bitmap_output(double x, double y, const char  *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (double)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}

}
//circle
void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}



GLfloat cx1 = -50;
GLfloat cx2 = -45;
GLfloat cx3 = -45;
GLfloat cx4 = -45;
GLfloat cx5 = -45;


GLfloat cx11 = -50;
GLfloat cx12 = -5;
GLfloat cx13 = -45;
GLfloat cx14 = -45;
GLfloat cx15 = -45;



GLfloat cx21 = -50;
GLfloat cx22 = -5;
GLfloat cx23 = -45;
GLfloat cx24 = -45;
GLfloat cx25 = -45;


GLfloat cx31 = -50;
GLfloat cx32 = -45;
GLfloat cx33 = -45;
GLfloat cx34 = -45;
GLfloat cx35 = -45;


GLfloat cx41 = -50;
GLfloat cx42 = -45;
GLfloat cx43 = -45;
GLfloat cx44 = -45;
GLfloat cx45 = -45;

//frame 0
void display0(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	bitmap_output(-21, 40, "DAYANANDA SAGAR COLLEGE OF ENGINEERING", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-21, 30, "COMPUTER SCIENCE AND ENGINEERING DEPARTMENT", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-21, 20, "COMPUTER GRAPHICS AND VISUALIZATION PROJECT", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 0, "SOLAR SYSTEM ADVERTISING", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -20, "Project By", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -25, "MANOJ B S                 1DS17CS414", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -30, "NIKHIL N                      1DS17CS420", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -35, "SANKET P B                1DS17CS428", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, 5, "Press ESC to exit", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, 10, "Press spacebar to start", GLUT_BITMAP_HELVETICA_18);

	glFlush();
}



//frame1 functions

void cloudB()

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();



}

void a()                                        //mini Cloud

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

/*
void car()
{
	glBegin(GL_POLYGON);			//car body
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-45, -20, 0);
	glVertex3f(-45, -12, 0);
	glVertex3f(-42, -12, 0);
	glVertex3f(-40, -5, 0);
	glVertex3f(-35, -5, 0);
	glVertex3f(-32, -12, 0);
	glVertex3f(-30, -12, 0);
	glVertex3f(-30, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40, -6, 0);
	glVertex3f(-35, -6, 0);
	glVertex3f(-35, -11, 0);
	glVertex3f(-40, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//black line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-37.5, -6, 0);
	glVertex3f(-37, -6, 0);
	glVertex3f(-37, -11, 0);
	glVertex3f(-37.5, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car bottom red
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-44, -19, 0);
	glVertex3f(-44, -13, 0);
	glVertex3f(-31, -13, 0);
	glVertex3f(-31, -19, 0);
	glEnd();
}*/

void c()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud()                                     // Three Cloud in first frame
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();

}
void draw_tree()
{
	//1st tree
	/*glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.0, 5.0);
	glVertex2f(-25.0, 5.0);
	glVertex2f(-25.0, 10.0);
	glVertex2f(-30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-17.5, 10.0);
	glVertex2f(-22.5, 15.0);
	glVertex2f(-32.5, 15.0);
	glVertex2f(-37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0, 15.0);
	glVertex2f(-25.0, 20.0);
	glVertex2f(-30.0, 20.0);
	glVertex2f(-35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.5, 20.0);
	glVertex2f(-27.5, 25.0);
	glVertex2f(-32.5, 20.0);
	glEnd();
	*/
	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(30.0, 5.0);
	glVertex2f(25.0, 5.0);
	glVertex2f(25.0, 10.0);
	glVertex2f(30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(17.5, 10.0);
	glVertex2f(22.5, 15.0);
	glVertex2f(32.5, 15.0);
	glVertex2f(37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 15.0);
	glVertex2f(25.0, 20.0);
	glVertex2f(30.0, 20.0);
	glVertex2f(35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.5, 20.0);
	glVertex2f(27.5, 25.0);
	glVertex2f(32.5, 20.0);
	glEnd();
}

void road()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void tution()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window 
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();
}


//frame two functions

void cloudB2()

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();



}

void a2()                                        //mini Cloud

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

/*
void car()
{
	glBegin(GL_POLYGON);			//car body
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-45, -20, 0);
	glVertex3f(-45, -12, 0);
	glVertex3f(-42, -12, 0);
	glVertex3f(-40, -5, 0);
	glVertex3f(-35, -5, 0);
	glVertex3f(-32, -12, 0);
	glVertex3f(-30, -12, 0);
	glVertex3f(-30, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40, -6, 0);
	glVertex3f(-35, -6, 0);
	glVertex3f(-35, -11, 0);
	glVertex3f(-40, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//black line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-37.5, -6, 0);
	glVertex3f(-37, -6, 0);
	glVertex3f(-37, -11, 0);
	glVertex3f(-37.5, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car bottom red
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-44, -19, 0);
	glVertex3f(-44, -13, 0);
	glVertex3f(-31, -13, 0);
	glVertex3f(-31, -19, 0);
	glEnd();
}*/

void c2()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a2();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a2();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a2();
	glPopMatrix();
}

void cloud2()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();

}
void draw_tree2()
{
	glBegin(GL_POLYGON);			//sky
	glColor3f(0.0, 0.5, 0.5);
	glVertex3f(-50, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();
	//1st tree
	/*glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.0, 5.0);
	glVertex2f(-25.0, 5.0);
	glVertex2f(-25.0, 10.0);
	glVertex2f(-30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-17.5, 10.0);
	glVertex2f(-22.5, 15.0);
	glVertex2f(-32.5, 15.0);
	glVertex2f(-37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0, 15.0);
	glVertex2f(-25.0, 20.0);
	glVertex2f(-30.0, 20.0);
	glVertex2f(-35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.5, 20.0);
	glVertex2f(-27.5, 25.0);
	glVertex2f(-32.5, 20.0);
	glEnd();*/

	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(30.0, 5.0);
	glVertex2f(25.0, 5.0);
	glVertex2f(25.0, 10.0);
	glVertex2f(30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(17.5, 10.0);
	glVertex2f(22.5, 15.0);
	glVertex2f(32.5, 15.0);
	glVertex2f(37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 15.0);
	glVertex2f(25.0, 20.0);
	glVertex2f(30.0, 20.0);
	glVertex2f(35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.5, 20.0);
	glVertex2f(27.5, 25.0);
	glVertex2f(32.5, 20.0);
	glEnd();
}

void road2()
{

	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.5);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void tution2()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window 
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 30, 0);
	glVertex3f(-41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 40, 0);
	glVertex3f(-41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30.5, 45, 0);
	glVertex3f(-31, 45, 0);
	glEnd();

}



//frame3 functions

void road3()
{

	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.5);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void tution3()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window 
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 30, 0);
	glVertex3f(-41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 40, 0);
	glVertex3f(-41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30.5, 45, 0);
	glVertex3f(-31, 45, 0);
	glEnd();

}



//frame4 functions


void road4()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.3);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();

}

void tution4()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);     //inverter
	glVertex3f(7, 5, 0);
	glVertex3f(-7, 5, 0);
	glVertex3f(-7, -8, 0);
	glVertex3f(7, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-6.8, 5, 0);
	glVertex3f(-6.8, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6.7, 5, 0);
	glVertex3f(6.7, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(7, -7.6, 0);
	glVertex3f(-7, -7.6, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(7, 4.6, 0);
	glVertex3f(-7, 4.6, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);     //inverter
	glVertex3f(6, 4, 0);
	glVertex3f(4, 4, 0);
	glVertex3f(4, 1, 0);
	glVertex3f(6, 1, 0);
	glEnd();

}

void battery4()
{
	glBegin(GL_POLYGON);                 //battery
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-10, 10, 0);
	glVertex3f(-25, 10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-10, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);				//left battery connection
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-23.5, 13, 0);
	glVertex3f(-25, 13, 0);
	glVertex3f(-25, 10, 0);
	glVertex3f(-23.5, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);				//right battery connection
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-11.5, 13, 0);
	glVertex3f(-10, 13, 0);
	glVertex3f(-10, 10, 0);
	glVertex3f(-11.5, 10, 0);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12, -8, 0);
	glVertex3f(-23, -8, 0);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12, 8, 0);
	glVertex3f(-23, 8, 0);
	glEnd();
}


//frame5 functions


void road5()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void tution5()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.5, 0.1, 0.6);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window 
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();
}


void solar5()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();
}

//frame 6 functions


void road6()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.5);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void tution6()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.4, 0.2, 0.6);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window 
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 30, 0);
	glVertex3f(-41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(40.5, 30, 0);
	glVertex3f(41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 40, 0);
	glVertex3f(-41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(40.5, 40, 0);
	glVertex3f(41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30.5, 45, 0);
	glVertex3f(-31, 45, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(30.5, 45, 0);
	glVertex3f(31, 45, 0);
	glEnd();

}


void solar6()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();

}






/*void spindisplay
{
	x1 += 0.01;
	if (x1 > 110)
		x1 = 50;
	glutPostRedisplay();
}*/


//display function




void spindisplay6()
{
	cx41 += 0.01;
	cx42 += 0.01;
	cx43 += 0.01;
	cx44 += 0.01;
	cx45 += 0.005;
	if (cx41 < 0)
		cx41 = 0;
	glutPostRedisplay();
}

void display6(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx45, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx41, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx42, 20.0, 0.0);
	cloudB();
	glPopMatrix();


	//Cloud3
	/*glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();
	*/

	road6();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution6();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx41, -5, 0);
	//car();
	glPopMatrix();

	//solar pannel alpha residency
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-10, 30.0, 0.0);
	glScalef(1.0, 0.4, 0.0);
	//glColor3f(1.0, 1.0, 0.0);
	solar6();
	glPopMatrix();

	//solar pannel office
	glPushMatrix();
	glTranslatef(-37.5, 15.0, 0.0);
	glScalef(0.5, 0.25, 0.0);
	solar6();
	glPopMatrix();


	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(20, 41, "NO POWER IN THIS HOUSE..", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(27, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "WHEN THE POWER IS OFF THE SOLAR LIGHT IS TURNED ON...SO USE SOLAR PRODUCT", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}




void spindisplay5()
{
	cx31 += 0.01;
	cx32 += 0.01;
	cx33 += 0.01;
	cx34 += 0.01;
	cx35 += 0.005;


	if (cx31 > 10)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display6);
		glutIdleFunc(spindisplay6);
	}
	glutPostRedisplay();

	/*if (cx31 < 74)
	{
		cx31 = 0;

		for (int i = 0; i < 32000; i++)
			for (int j = 0; j < 32000; j++)
			{
			}
		glutDisplayFunc(display6);
		glutIdleFunc(spindisplay6);
	}*/
	glutPostRedisplay();
}

void display5(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx35, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx31, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx32, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx33, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();

	road5();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution5();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx31, -5, 0);
	//car();
	glPopMatrix();


	//solar pannel alpha residency
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-10, 30.0, 0.0);
	glScalef(1.0, 0.4, 0.0);
	//glColor3f(1.0, 1.0, 0.0);
	solar5();
	glPopMatrix();

	//solar pannel office
	glPushMatrix();
	glTranslatef(-37.5, 15.0, 0.0);
	glScalef(0.5, 0.25, 0.0);
	solar5();
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(27, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "After installing SOLAR PANNEL System to the houses", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}



void spindisplay4()
{
	for (int i = 0; i < 32000; i++)
		for (int j = 0; j < 32000; j++)
		{
		}
	glClearColor(0, 0.749, 1, 0);
	glutDisplayFunc(display5);
	glutIdleFunc(spindisplay5);
	glutPostRedisplay();
}
void display4(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);


	road4();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution4();
	glPopMatrix();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(-10, -10, 0);
	tution4();
	glPopMatrix();
	battery4();


	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-40, 38, 0.0);
	glScalef(1.5, 2.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	bitmap_output(-22, 0, "BATTERY", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-14, -15, "INVERTER", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-10, 35, "INTRODUCING SOLAR PANNEL SYSTEM", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "INTRODUCING SOLAR PANNEL SYSTEM. IT PRODUCES ALTERNATIVE ELECTRIC ENERGY.", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}


void spindisplay3()
{
	cx21 += 0.01;
	cx22 += 0.01;
	cx23 += 0.01;
	cx24 += 0.01;
	cx25 += 0.005;

	if (cx21 > 10)
	{
		glClearColor(0, 0.749, 1, 0);
		glutDisplayFunc(display4);
		glutIdleFunc(spindisplay4);
	}
	glutPostRedisplay();

}

void display3(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx25, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx21, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx22, 20.0, 0.0);
	cloudB();
	glPopMatrix();


	road3();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx21, -5, 0);
	//car();
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(27, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "WHEN THE POWER GOES OFF ....NO POWER IN THE AREA..IT IS DIFFICULT TO DO THE WORK ", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}



void spindisplay2()
{
	cx11 += 0.01;
	cx12 += 0.01;
	cx13 += 0.01;
	cx14 += 0.01;
	cx15 += 0.005;

	if (cx11 > 10)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
	glutPostRedisplay();

}

void display2(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx15, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx11, 17.0, 0.0);
	cloudB2();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx12, 20.0, 0.0);
	cloudB2();
	glPopMatrix();


	//Cloud3
	/*glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();
	*/

	road2();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx11, -5, 0);
	//car();
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(27, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "Night time when the power is ON", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}



void spindisplay1()
{
	cx1 += 0.01;
	cx2 += 0.01;
	cx3 += 0.01;
	cx4 += 0.01;
	cx5 += 0.005;

	if (cx1 > 10)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
	glutPostRedisplay();
}

void display1(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx5, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx1, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx2, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();

	road();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cx1, -5, 0);
	//car();
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(27, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-47, -39, "Normal Days Goes Like this....", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}


//init function
void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	//glClearColor(0.5, 0.749, 0.5, 0);
}


void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	else if (key = 32)
	{
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
}


//main function
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display1);
	//glutIdleFunc(spinDisplay);
	//glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	glutDisplayFunc(display0);
	glutKeyboardFunc(processNormalKeys);
	//glutReshapeFunc(reshape);
	glutMainLoop();
}
