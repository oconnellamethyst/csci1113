/*     FILE: ./shapes5/shape.h     */

#ifndef _shape_h
#define _shape_h

#include <iostream>
using std::ostream;

class shape{
    double x,y;

  public:
    shape( )
    { x=y=0;}
    shape(double xvalue, double yvalue);
    
    void setShape(double new_x, double new_y);
    void setX(double new_x);
    void setY(double new_y);
    double getX( ) const;
    double getY( ) const;
    
    virtual void move(double x, double y) = 0;
    virtual void shift(double dx, double dy) = 0;
    virtual void draw( ) = 0;
    virtual void rotate(double r) = 0;

    virtual void print(ostream&)const;
    friend ostream & operator<<(ostream & os, const shape& s);
};
#endif
