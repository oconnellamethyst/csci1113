/*     FILE: ./shapes4/triangle.cpp     */

#include "triangle.h"

triangle::triangle(point p1, point p2, point p3)
{
  setTriangle(p1.getX( ), p1.getY( ), p2.getX( ), p2.getY( ), p3.getX( ), p3.getY( ));
}

triangle::triangle(double px1, double py1, double px2, double py2, double px3, double py3)
{
  setTriangle(px1, py1, px2, py2, px3, py3);
}

void triangle::setTriangle( double px1, double py1, double px2, double py2, double px3, double py3)
{
  v1 = point(px1, py1);
  v2 = point(px2, py2);
  v3 = point(px3, py3);
}
    
point triangle::getVertex1( ) const
{
  return v1;
}
    
point triangle::getVertex2( ) const
{
  return v2;
}

point triangle::getVertex3( ) const
{
  return v3;
}

void triangle::setVertex1(point p)
{
  v1 = p;
}
   
void triangle::setVertex2(point p)
{
  v2 = p;
}

void triangle::setVertex3(point p)
{
  v3 = p;
}

void triangle::print(ostream & os) const
{
  os << v1 << " " << v2 << " " << v3;
}

ostream & operator<<(ostream & os, const triangle& t)
{
  os << t.v1 << " " << t.v2 << " " << t.v3;
  return os;
}
