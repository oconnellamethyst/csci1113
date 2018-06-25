/*     FILE: ./shapes4/triangle.h     */

#ifndef _triangle_h
#define _triangle_h

#include <iostream>
using std::ostream;
#include "point.h"

class triangle{
    point v1;
    point v2;
    point v3;
  public:
    triangle( )
    {}
    triangle(point p1, point p2, point p3);
    triangle(double px1, double py1, double px2, double py2, double px3, double py3);
    
    void setTriangle( double px1, double py1, double px2, double py2, double px3, double py3);
    point getVertex1( ) const;
    point getVertex2( ) const;
    point getVertex3( ) const;
    void setVertex1(point p);
    void setVertex2(point p);
    void setVertex3(point p);
    
    void print(ostream&)const;
    friend ostream & operator<<(ostream & os, const triangle& t);
};

#endif
