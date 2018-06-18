/*     FILE: point.h     */

#ifndef _point_h
#define _point_h
 
#include <iostream>

using namespace std;
 
class point{
    int x,y;
 
  public:
    point( )
    { x=y=0;}
    point(int xvalue, int yvalue);
    
    void setpoint(int new_x, int new_y);
    void setX(int new_x);
    void setY(int new_y);
    int getX( ) const;
    int getY( ) const;
   
    friend ostream & operator<<(ostream & os, const point& p);
};
#endif
