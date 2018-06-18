/*     FILE: hatch2.cpp     */

#include <stdlib.h>
#include "glut.h"
#include "shapes7\point.h"
#include "shapes7\triangle.h"
#include "shapes7\circle.h"
              
int scrWidth = 500, scrHeight = 500;
point p(25,50);
triangle t(100,100,100,150,150,150);
triangle t2(-100,-100,-100,150,150,0);
circle c(300,195,100);
circle c2(0,0,50);
void myinit( );
void display( );
void reshape(int, int);
void hatch( );

void myinit( )
{
  glClearColor(1.,1.,1.,1.);          /* white background */
  glColor3f(0.,0.,0.);                /* black foreground */
  glShadeModel(GL_FLAT);
  /* set up viewing scrWidth x scrHeight window with origin lower left */
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
  gluOrtho2D(-(GLdouble)scrWidth/2,(GLdouble)scrWidth/2,-(GLdouble)scrHeight/2,(GLdouble)scrHeight/2);     /* ensure aspect ratio */
  glMatrixMode(GL_MODELVIEW);
}
                  
void display( )
{
  glClear(GL_COLOR_BUFFER_BIT);
                 
  glBegin(GL_LINES);
                 
  hatch( );
  p.draw( );
  t.draw( );
  c.draw( );
  t2.draw( );
  c2.draw( );
                 
  glEnd( );
                 
  glFlush( );

}

void hatch( )
{
  int halfHeight = scrHeight/2;
  int halfWidth = scrWidth/2;
  for(int i=5; i < halfHeight; i+=5){ 
    glVertex2i(-2,i);
    glVertex2i(2,i);
                  
    glVertex2i(-2,-i);
    glVertex2i(2,-i);
                  
    if(i%25 ==0){
	  glVertex2i(-5,i);
      glVertex2i(5,i);
	  glVertex2i(-5,-i);
      glVertex2i(5,-i);
    }
  }
  for(int i=5; i < halfWidth; i+=5){ 
    glVertex2i(i,-2);
    glVertex2i(i,2);
    
    glVertex2i(-i,-2);
    glVertex2i(-i,2);
                  
    if(i%25 ==0){
      glVertex2i(i,-5);
      glVertex2i(i,5);
      glVertex2i(-i,-5);
      glVertex2i(-i,5);
    }
  } 
}

void reshape(int nescrWidth, int nescrHeight)
{
  scrHeight = nescrHeight;
  scrWidth = nescrWidth;
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
  gluOrtho2D(-(GLdouble)scrWidth/2,(GLdouble)scrWidth/2,-(GLdouble)scrHeight/2,(GLdouble)scrHeight/2);
  glMatrixMode(GL_MODELVIEW);
  display( );
}

int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(scrWidth,scrHeight);
  glutCreateWindow("Hatch 2");
  glutDisplayFunc(display);
  myinit( );
  glutReshapeFunc(reshape); 
  glutMainLoop( );
                  
  return 0;
}


/*    OUTPUT: hatch2.cpp


*/
