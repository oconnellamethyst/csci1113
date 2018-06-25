/*     FILE: ./shapes7/point.h     */

#ifndef _point_h
#define _point_h

#include <iostream>
#include "shape.h"

class point: public shape{

  public:
    point( ):shape( )
    { }
    point(int xvalue, int yvalue);
    
    void setPoint(int new_x, int new_y);
    
    void move(int x, int y);
    void shift(int dx, int dy);
    void rotate(double r);
    void draw( );
    
};
#endif
