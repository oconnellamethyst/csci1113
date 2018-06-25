/*     FILE: ./shapes7/circle.h     */

#ifndef _circle_h
#define _circle_h

#include <iostream>
#include <cmath>
#include "point.h"
using std::ostream;

class circle:public point{
    double radius;

  public:
    circle( ) {}
    circle(int x, int y, double radius);
    circle(point center, double radius);
    
    void setCenter(int x, int y);
    void setCenter(point center);
    point getCenter( ) const;
    
    void scale(double factor);
    
    void setRadius(double new_r);
    double getRadius( ) const;
    
    void draw( );
    
    void print(ostream & os) const;
    friend ostream & operator<<(ostream & os, const circle& c);
};

#endif
