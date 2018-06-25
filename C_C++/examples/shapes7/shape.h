/*     FILE: ./shapes7/shape.h     */

#ifndef _shape_h
#define _shape_h

#include <iostream>
using std::ostream;
#include "..\glut.h"

class shape{
    int x,y;

  public:
    shape( )
    { x=y=0;}
    shape(int xvalue, int yvalue);
    
    void setShape(int new_x, int new_y);
    void setX(int new_x);
    void setY(int new_y);
    int getX( ) const;
    int getY( ) const;
    
    virtual void move(int x, int y) = 0;
    virtual void shift(int dx, int dy) = 0;
    virtual void draw( ) = 0;
    virtual void rotate(double r) = 0;

    virtual void print(ostream&)const;
    friend ostream & operator<<(ostream & os, const shape& s);
};
#endif
