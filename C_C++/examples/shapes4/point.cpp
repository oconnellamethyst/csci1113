/*     FILE: ./shapes4/point.cpp     */

#include "point.h"

point::point(double xvalue, double yvalue)
{
  setPoint(xvalue,yvalue);
}

void point::setX(double new_x)
{
  x = new_x;
}

void point::setY(double new_y)
{
  y = new_y;
}

double point::getX( ) const
{
  return x;
}

double point::getY( ) const
{
  return y;
}

void point::setPoint(double new_x, double new_y)
{
  x = new_x;
  y = new_y;
}

void point::move(double x, double y)
{
  setX(x);
  setY(y);
}

void point::shift(double dx, double dy)
{
  setX(getX( )+dx);
  setY(getY( )+dy);
}

void point::print(ostream & os) const
{
  os << "(" << x << "," << y << ")";
}

ostream & operator<<(ostream & os, const point& p)
{
  os << "(" << p.x << "," << p.y << ")";
  return os;
}
