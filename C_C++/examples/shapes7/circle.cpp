/*     FILE: ./shapes7/circle.cpp     */

#include "circle.h"
#include <cmath>

circle::circle(int x, int y, double radius):point(x,y)
{
  setRadius(radius);
}

circle::circle(point center, double radius):point(center)
{
  setRadius(radius);
}

void circle::setCenter(int x, int y)
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
  return point((point)*this);
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
    
void circle::draw( )
{
	int n = 32;
	double angle = 2*M_PI/n;
	
  glVertex2i(getX( )-2,getY( )-2);
  glVertex2i(getX( )+2,getY( )+2);

  glVertex2i(getX( )-2,getY( )+2);
  glVertex2i(getX( )+2,getY( )-2);
  
  for(int i=1; i<=n; i++){
    glVertex2i((int)(getX( )+radius*cos((i-1)*angle)),(int)(getY( )+radius*sin((i-1)*angle)));
    glVertex2i((int)(getX( )+radius*cos(i*angle)),(int)(getY( )+radius*sin(i*angle)));
  }

}

void circle::print(ostream & os) const
{
  os << "C" << (point)*this << "  r = " << radius;
}
    
ostream & operator<<(ostream & os, const circle& c)
{
  c.print(os);
  return os;
}

