/*     FILE: ./shapes4/point.h     */

#ifndef _point_h
#define _point_h

#include <iostream>
using std::ostream;

class point{
    double x,y;

  public:
    point( )
    { x=y=0;}
    point(double xvalue, double yvalue);
    
    void setPoint(double new_x, double new_y);
    void setX(double new_x);
    void setY(double new_y);
    double getX( ) const;
    double getY( ) const;
    
    virtual void move(double x, double y);
    virtual void shift(double dx, double dy);
    
    virtual void print(ostream &)const;
    friend ostream & operator<<(ostream & os, const point& p);
};
#endif
