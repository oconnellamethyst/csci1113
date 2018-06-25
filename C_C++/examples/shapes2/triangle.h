/*     FILE: ./shapes2/triangle.h     */

#ifndef _triangle_h
#define _triangle_h

#include <iostream>
#include "point.h"

using namespace std;

class triangle{
    point v1;
    point v2;
    point v3;
  public:
    triangle( )
    {}
    triangle( point p1, point p2, point p3);
    triangle(int px1, int py1, int px2, int py2, int px3, int py3);
    
    void setTriangle( int px1, int py1, int px2, int py2, int px3, int py3);
    point getVertex1( ) const;
    point getVertex2( ) const;
    point getVertex3( ) const;
    void setVertex1(point p);
    void setVertex2(point p);
    void setVertex3(point p);
    
    friend ostream & operator<<(ostream & os, const triangle& t);
};

#endif
