/*     FILE: ShapesTest.cpp     */

/*  Classes triangle and circle are using existing class point.

    triangle "has-a" set of points that are vertices.
    circle "is-a" point with a radius.

*/
#include <iostream>
#include <cmath>
using namespace std;

class point{
    int x,y;

  public:
    point( )
    { x=y=0;}
    point(int xvalue, int yvalue);
    
    void setpoint(int new_x, int new_y);
    void setX(int new_x);
    void setY(int new_y);
    int getX( ) const;
    int getY( ) const;
    
    friend ostream & operator<<(ostream & os, const point& p);
};

point::point(int xvalue, int yvalue)
{
  setpoint(xvalue,yvalue);
}

void point::setX(int new_x)
{
        x = new_x;
}

void point::setY(int new_y)
{
  y = new_y;
}

int point::getX( ) const
{
  return x;
}

int point::getY( ) const
{
  return y;
}

void point::setpoint(int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

ostream & operator<<(ostream & os, const point& p)
{
  os << "(" << p.x << "," << p.y << ")";
  return os;
}

class circle:public point{
    double radius;

  public:
    circle( ) {}
    circle(int x, int y, double radius);
    circle(point center, double radius);
    
    void setCenter(point center);
    point getCenter( ) const;
    
    void scale(double factor);
    
    void setRadius(double new_r);
    double getRadius( ) const;
    
    friend ostream & operator<<(ostream & os, const circle& c);
};

circle::circle(int x, int y, double radius):point(x,y)
{
  setRadius(radius);
}

circle::circle(point center, double radius)
{
  setX(center.getX( ));
  setY(center.getY( ));
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

class triangle{
    point v1;
    point v2;
    point v3;
  public:
    triangle( )
    {}
    triangle( point p1, point p2, point p3);
    triangle(int px1, int py1, int px2, int py2, int px3, int py3);
    
    void setTriangle( int px1, int py1, int px2, int py2, int px3, int py3);
    point getVertex1( ) const;
    point getVertex2( ) const;
    point getVertex3( ) const;
    void setVertex1(point p1);
    void setVertex2(point p2);
    void setVertex3(point p3);
    
    friend ostream & operator<<(ostream & os, const triangle& t);
};

triangle::triangle( point p1, point p2, point p3)
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

void triangle::setVertex1(point p1)
{
  v1 = p1;
}
   
void triangle::setVertex2(point p2)
{
  v2 = p2;
}

void triangle::setVertex3(point p3)
{
  v3 = p3;
}

ostream & operator<<(ostream & os, const triangle& t)
{
  os << t.v1 << " " << t.v2 << " " << t.v3;
  return os;
}

int main( )
{
    point p(7,5);          // Build some shapes
    triangle t(1,2,3,4,1,6);
    circle c(1,2,3.5);

    cout << c << endl; // Display the shapes
    cout << t << endl;
    cout << p << endl;

    c = circle(p,1.5);   

    cout << c << endl;
}


/*    OUTPUT: ShapesTest.cpp

	C(1,2)  r = 3.5
	(1,2) (3,4) (1,6)
	(7,5)
	C(7,5)  r = 1.5

*/
