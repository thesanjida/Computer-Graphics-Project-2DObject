#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(100, 50);
glVertex2i(110, 130);
glVertex2i(250, 130);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(400, 100);
glVertex2i(500, 150);
glVertex2i(600, 100);
glBegin(GL_TRIANGLES);
glVertex2i(400, 150);
glVertex2i(500, 200);
glVertex2i(600, 150);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
