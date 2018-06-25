/*     FILE: ./shapes5/shape.cpp     */

#include "shape.h"

shape::shape(double xvalue, double yvalue)
{
  setShape(xvalue,yvalue);
}

void shape::setX(double new_x)
{
  x = new_x;
}

void shape::setY(double new_y)
{
  y = new_y;
}

double shape::getX( ) const
{
  return x;
}

double shape::getY( ) const
{
  return y;
}

void shape::setShape(double new_x, double new_y)
{
  x = new_x;
  y = new_y;
}

void shape::print(ostream & os) const
{
  os << "(" << x << "," << y << ")";
}

ostream & operator<<(ostream & os, const shape& s)
{
  os << "(" << s.x << "," << s.y << ")";
  return os;
}
