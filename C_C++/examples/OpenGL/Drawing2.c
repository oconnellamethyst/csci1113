/*     FILE: Drawing2.c     */

/* Program that draws some 2-D shapes 

   Functions are defined to generate 
   the appropriate vertices for OpenGL
   when passed reasonable parameters
   for a particular shape.               */

#include <stdlib.h>
#include "glut.h"

int scrWidth = 500, scrHeight = 500;   /* Initial screen size */
void myinit( );
void display( );
void reshape(int, int);

double square1[4][2] = {{1,1},  /* Vertices provided in order */
                        {3,1},  /* ... that defines edges.    */
                        {3,3},  /*     (Right-hand rule. )    */
                        {1,3}
                      };

double square2[4][2] = {{5,5},
                        {5,10},
                        {10,10},
                        {10,5}
                       };

/* Function to initialize OpenGL parameters and
   prepare for drawing.                          */
void myinit( )
{
  glClearColor(1.,1.,1.,1.);         /* white background */
  glColor3f(0.,0.,0.);               /* black foreground */
  glShadeModel(GL_FLAT);
  /* set up viewing scrWidth x scrHeight window with origin at
     lower-left.                                              */
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
//  gluOrtho2D(0.0,(GLdouble)10,0.0,(GLdouble)10);
  gluOrtho2D(0.0,(GLdouble)scrWidth/50,0.0,(GLdouble)scrHeight/50);
  glMatrixMode(GL_MODELVIEW);
}
                  
/* Function registered with OpenGL for producing display */
void display( )
{
  
  char buf[128];
  glClear(GL_COLOR_BUFFER_BIT);
                 
  glBegin(GL_LINES);
                                  
  /* Supply vertices to draw LINES between.   */
  glVertex2d(square1[0][0],square1[0][1]);
  glVertex2d(square1[1][0],square1[1][1]);

  glVertex2d(square1[1][0],square1[1][1]);
  glVertex2d(square1[2][0],square1[2][1]);

  glVertex2d(square1[2][0],square1[2][1]);
  glVertex2d(square1[3][0],square1[3][1]);

  glVertex2d(square1[3][0],square1[3][1]);
  glVertex2d(square1[0][0],square1[0][1]);
  
  /* Do another shape/square  */
  glVertex2d(square2[0][0],square2[0][1]);
  glVertex2d(square2[1][0],square2[1][1]);

  glVertex2d(square2[1][0],square2[1][1]);
  glVertex2d(square2[2][0],square2[2][1]);

  glVertex2d(square2[2][0],square2[2][1]);
  glVertex2d(square2[3][0],square2[3][1]);

  glVertex2d(square2[3][0],square2[3][1]);
  glVertex2d(square2[0][0],square2[0][1]);
  
  glEnd( );
                 
  glFlush( );

}

/* Function called when the window is reshaped. */
void doSquare(double square[4][2])
{
  glVertex2d(square[0][0],square[0][1]);
  glVertex2d(square[1][0],square[1][1]);

  glVertex2d(square[1][0],square[1][1]);
  glVertex2d(square[2][0],square[2][1]);

  glVertex2d(square[2][0],square[2][1]);
  glVertex2d(square[3][0],square[3][1]);

  glVertex2d(square[3][0],square[3][1]);
  glVertex2d(square[0][0],square[0][1]);
}

/* Function called when the window is reshaped. */
void reshape(int nescrWidth, int nescrHeight)
{
  scrHeight = nescrHeight;
  scrWidth = nescrWidth;
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
//  gluOrtho2D(0.0,(GLdouble)scrWidth,0.0,(GLdouble)scrHeight);
  gluOrtho2D(0.0,(GLdouble)scrWidth/50,0.0,(GLdouble)scrHeight/50);
  glMatrixMode(GL_MODELVIEW);
  display( );
}

int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(scrWidth,scrHeight);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  myinit( );

  glutReshapeFunc(reshape); 
  glutMainLoop( );
                  
  return 0;
}

