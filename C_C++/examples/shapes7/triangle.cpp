/*     FILE: ./shapes7/triangle.cpp     */

#include "triangle.h"

triangle::triangle(point p1, point p2, point p3)
{
  setTriangle(p1.getX( ), p1.getY( ), p2.getX( ), p2.getY( ), p3.getX( ), p3.getY( ));
}

triangle::triangle(int px1, int py1, int px2, int py2, int px3, int py3)
{
  setTriangle(px1, py1, px2, py2, px3, py3);
}

void triangle::setTriangle( int px1, int py1, int px2, int py2, int px3, int py3)
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

void triangle::draw( )
{
  point p1 = getVertex1( );
  point p2 = getVertex2( );

  glVertex2i(p1.getX( ), p1.getY( ));
  glVertex2i(p2.getX( ), p2.getY( ));

  p1 = getVertex2( );
  p2 = getVertex3( );

  glVertex2i(p1.getX( ), p1.getY( ));
  glVertex2i(p2.getX( ), p2.getY( ));

  p1 = getVertex3( );
  p2 = getVertex1( );

  glVertex2i(p1.getX( ), p1.getY( ));
  glVertex2i(p2.getX( ), p2.getY( ));

}

void triangle::print(ostream & os) const
{
  os << v1 << " " << v2 << " " << v3;
}

ostream & operator<<(ostream & os, const triangle& t)
{
  t.print(os);
  return os;
}
