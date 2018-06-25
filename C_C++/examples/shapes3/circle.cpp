/*     FILE: ./shapes3/circle.cpp     */

#include "circle.h"

circle::circle(double x, double y, double radius):point(x,y)
{
  setRadius(radius);
}

circle::circle(point center, double radius):point(center)
{
  setRadius(radius);
}

void circle::setCenter(double x, double y)
{
  setX(x);
  setY(y);
}

void circle::setCenter(point center)
{
  *(point *)this = center;
}

point circle::getCenter( ) const
{
  return *this;
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
  return radius;
}
    
void circle::print(ostream & os) const
{
  os << "C" << (point)*this << "  r = " << radius;
}
    
ostream & operator<<(ostream & os, const circle& c)
{
  os << "C" << (point)c << "  r = " << c.radius;
  return os;
}
