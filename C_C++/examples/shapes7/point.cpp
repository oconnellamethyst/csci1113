/*     FILE: ./shapes7/point.cpp     */

#include "point.h"

point::point(int xvalue, int yvalue):shape(xvalue,yvalue)
{

}

void point::setPoint(int new_x, int new_y)
{
  setShape(new_x, new_y);
}

void point::move(int x, int y)
{
  setX(x);
  setY(y);
}

void point::shift(int dx, int dy)
{
  setX(getX( )+dx);
  setY(getY( )+dy);
}

void point::rotate(double r)
{
  
}

void point::draw( )
{
  glVertex2i(getX( )-2,getY( )-2);
  glVertex2i(getX( )+2,getY( )+2);

  glVertex2i(getX( )-2,getY( )+2);
  glVertex2i(getX( )+2,getY( )-2);

}
