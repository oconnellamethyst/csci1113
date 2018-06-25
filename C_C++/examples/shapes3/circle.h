/*     FILE: ./shapes3/circle.h     */

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
    circle(double x, double y, double radius);
    circle(point center, double radius);
    
    void setCenter(double x, double y);
    void setCenter(point center);
    point getCenter( ) const;
    
    void scale(double factor);
    
    void setRadius(double new_r);
    double getRadius( ) const;
    
    void print(ostream&)const;
    friend ostream & operator<<(ostream & os, const circle& c);
};

#endif
