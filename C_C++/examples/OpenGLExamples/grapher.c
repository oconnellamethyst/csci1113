/*     FILE: ./OpenGLExamples/grapher.c     */

/* Program that graphs a sequence of values.

   The graph is drawn across the width of the screen
   with each data point evenly spaced across.
   
   The values are scaled to span the entire height of 
   the screen.
   
   Exact amount of storage is allocated by building a 
   "linked-list" as the elements are read in. 
   
   Advantage: One pass through the file.
   
                                                       */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "GL/glut.h"

int scrWidth = 500, scrHeight = 500;   /* Initial screen size */
void myinit( );
void display( );
void reshape(int, int);
void drawLine(int x1, int y1, int x2, int y2);
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
void drawCircle(int cx, int cy, int r);
void drawArrow(int x1, int y1, int x2, int y2);
int readPairs(char * file);

int count;    /* Number of points */

double max, min;

struct value{  /* value node  w/ a link*/
  double y;
  struct value * next;
};

             /* pointer for head of pairs list */
struct value* head;

/* Function to initialize OpenGL parameters and
   prepare for drawing.                          */
void myinit( )
{
  glClearColor(1.,1.,1.,1.);         /* white background */
  glColor3f(0.,0.,0.);               /* black foreground */
  glShadeModel(GL_FLAT);
  /* set up viewing scrWidth x scrHeight window with origin at
     lower-left.                                               */
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
  gluOrtho2D(0.0,(GLdouble)scrWidth,0.0,(GLdouble)scrHeight);
  glMatrixMode(GL_MODELVIEW);
}
                  
/* Function registered with OpenGL for producing display */
void display( )
{
  int i;
  double shift = (double)scrWidth/count;
  double scale = (double)scrHeight/(max-min);
  struct value * current;
  glClear(GL_COLOR_BUFFER_BIT);
                 
  glBegin(GL_LINES);
                 
  /* Process list from head->next to end. */
  for(current=head, i=0; current->next != NULL; current = current->next, i++)
    drawLine(i*shift,(current->y-min)*scale,(i+1)*shift,(current->next->y-min)*scale);

  glEnd( );
                 
  glFlush( );

}

/* Draw a line between two (x,y) pairs */
void drawLine(int x1, int y1, int x2, int y2)
{
  glVertex2i(x1,y1);
  glVertex2i(x2,y2);
}

/* Function called when the window is reshaped. */
void reshape(int nescrWidth, int nescrHeight)
{
  scrHeight = nescrHeight;
  scrWidth = nescrWidth;
  glViewport(0,0,scrWidth,scrHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity( );
  gluOrtho2D(0.0,(GLdouble)scrWidth,0.0,(GLdouble)scrHeight);
  glMatrixMode(GL_MODELVIEW);
  display( );
}

/* Reads pairs of ints from "file"  and allocates storage and
   links them into a linked list as they are read.             */
int readPairs(char * file)
{
  int i;
  double y;            /* read in a double */
  struct value * last;  /* position of last node. */
  FILE * fp; 
  
  fp = fopen(file,"r");
  
  i = 0;
  if(fp != NULL){  /* Check if open succeded */
     i = 0;
     head = NULL;
     last = head;
                           /* process file */
     while(fscanf(fp,"%lf", &y) == 1){
       i++;
       if(last == NULL){  /* Allocate nodes */
         head = last = malloc(sizeof(struct value));
       }
       else{
         last->next = malloc(sizeof(struct value));
         last = last->next;
       }
       last->next = NULL; /* assign values */
       last->y = y;
       
       if(i == 1)
         max = min = y;
       else{
	     if (y < min)
	       min = y;
	     if (y > max)
	       max = y;
       }
     }
    fclose(fp);
  }
  else{
    fprintf(stderr,"File open failed: %s\n", file);
    exit(1);
  }

  return i;
}

int main(int argc, char** argv)
{
  if(argc < 2)
    fprintf(stderr,"Usage: %s <file of points>\n", argv[0]);
  else{
    glutInit(&argc,argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(scrWidth,scrHeight);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    myinit( );
    glutReshapeFunc(reshape);
  
    count = readPairs(argv[1]);  /* read points to draw */
  
    glutMainLoop( );
  }
                  
  return 0;
}

