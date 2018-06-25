/*     FILE: ./shapes7/shape.cpp     */

#include "shape.h"

shape::shape(int xvalue, int yvalue)
{
  setShape(xvalue,yvalue);
}

void shape::setX(int new_x)
{
  x = new_x;
}

void shape::setY(int new_y)
{
  y = new_y;
}

int shape::getX( ) const
{
  return x;
}

int shape::getY( ) const
{
  return y;
}

void shape::setShape(int new_x, int new_y)
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
  s.print(os);
  return os;
}
