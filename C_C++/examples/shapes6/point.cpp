/*     FILE: ./shapes6/point.cpp     */

#include "point.h"

point::point(double xvalue, double yvalue):shape(xvalue,yvalue)
{

}

void point::setPoint(double new_x, double new_y)
{
  setShape(new_x, new_y);
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

void point::rotate(double r)
{
  
}

void point::draw( )
{
  cout << "Drawing: " << *this << endl;
}
