/*     FILE: LocationTest_3.cpp     */

/*  Class location inherits class point.

    location and point have a common function
    print( ).

*/
#include <iostream>
using namespace std;

class point{
    int x,y;

  public:
    point( )
    { x=y=0;}
    point(int xvalue, int yvalue);
    
    void setPoint(int new_x, int new_y);
    void setX(int new_x);
    void setY(int new_y);
    int getX( ) const;
    int getY( ) const;
    
    ostream & print(ostream & os);
    friend ostream & operator<<(ostream & os, const point& p);
};

point::point(int xvalue, int yvalue)
{
  setPoint(xvalue,yvalue);
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

void point::setPoint(int new_x, int new_y)
{
  x = new_x;
  y = new_y;
}

ostream & point::print(ostream & os)
{
  os << "(" << x << "," << y << ")";
  return os;
}

ostream & operator<<(ostream & os, const point& p)
{
  os << "(" << p.x << "," << p.y << ")";
  return os;
}

class location: public point{
    string name;

  public:
    location( ):point(0,0)
    { 
      name = "Origin";
    }
    
    location(int, int, string );
    
    void setLocation(int new_x, int new_y);
    void setLocation(point);
    void setName(string s);
    string getName( ) const;
    
    ostream & print(ostream & os);
    friend ostream & operator<<(ostream &, const location &);
};

location::location(int xvalue, int yvalue, string s):point(xvalue, yvalue)
{
  name = s;
}

void location::setLocation(int xvalue, int yvalue)
{
  setPoint(xvalue,yvalue);
}

void location::setLocation(point p)
{
  setPoint(p.getX( ), p.getY( ));
}

void location::setName(string s)
{
  name = s;
}

string location::getName( ) const
{
  return name;
}

ostream & location::print(ostream & os)
{
  os << point(*this) << " " << name;
  return os;
}

ostream & operator<<(ostream & os, const location & l)
{
  os << point(l) << " " << l.name;
  return os;
}

int main( )
{
  point p(7,5);          // Build some shapes
  location l(1,2,"A Point");

  p.print(cout);
  cout << endl; // Display the shapes
  cout << l << endl;

  l.setLocation(p);
  p.print(cout);
  cout << endl; // Display the shapes
  l.print(cout);
  cout << endl; // Display the shapes
  
  l.setX(3);
  l.setY(-5);
  l.setName("Moved Point");
  l.print(cout);
  cout << endl; // Display the shapes

  return 0;
}


/*    OUTPUT: LocationTest_3.cpp

	(7,5)
	(1,2) A Point
	(7,5)
	(7,5) A Point
	(3,-5) Moved Point

*/
