/*     FILE: ./shapes6/point.h     */

#ifndef _point_h
#define _point_h

#include <iostream>
#include "shape.h"
using std::cout;
using std::endl;
using std::ostream;

class point: public shape{

  public:
    point( ):shape( )
    { }
    point(double xvalue, double yvalue);
    
    void setPoint(double new_x, double new_y);
    
    void move(double x, double y);
    void shift(double dx, double dy);
    void rotate(double r);
    void draw( );
    
};
#endif
