/*     FILE: circle.cpp     */

#include "circle.h"

circle::circle(int x, int y, double radius):point(x,y)
{
  setRadius(radius);
}

circle::circle(point center, double radius)
{
  setCenter(center);
  setRadius(radius);
}

void circle::setCenter(point center)
{
  setX(center.getX( ));
  setY(center.getY( ));
}

point circle::getCenter( ) const
{
  return point(getX( ), getY( ));
}

void circle::scale(double factor)
{
  radius = fabs(factor)*radius;
}

void circle::setRadius(double new_r)
{
  radius = new_r;
}
    
double circle::getRadius( ) const
{
  double radius;
}
 
ostream & operator<<(ostream & os, const circle& c)
{
  os << "C" << (point)c << "  r = " << c.radius;
  return os;
}
