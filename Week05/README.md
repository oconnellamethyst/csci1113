# csci1113 Lecture Notes
## Lecture 1
Inheritance, kind of like items in the animal kingdom. Like how there are characteristics of mammals, and then there are characteristics of humans. That's what inheritance does. It's a fairly powerful, yet subtle mechanism.
pg 167 ShapesTest
```C++
#include <iostream>
using namespace std;
class point{
    int x,y;
  public:
    point( ) //Constructors
    { x=y=0;}
    point(int xvalue, int yvalue);
	
    void setpoint(int new_x, int new_y);
    void setX(int new_x);
    void setY(int new_y);
    int getX( ) const; //Constant to protect ourselves from ourselves
    int getY( ) const;

    friend ostream & operator<<(ostream & os, const point& p); //Use putto on output stream
};

point::point(int xvalue, int yvalue)
{
  setpoint(xvalue,yvalue); //Self explanatory, lets you set point
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

/* Inheritance */
class circle:public point{ // A circle is a point with a radius, the colon defines the inherited class, like double colon for class membership for scope resolution.
    double radius; // So we add the radius
	
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

void circle::setCenter(point center) // Method to set the center, i.e. move the circle
{
  setX(center.getX( )); // setX was inherited from point, stuff private in pt are still private
  setY(center.getY( ));
}

point circle::getCenter( ) const
{
  return point(getX( ), getY( )); // Gives back the point that is the center of the circle.
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

ostream & operator<<(ostream & os, const circle& c) // Text representation of circle, C(3,4) r=2
{
  os << "C" << (point)c << " r = " << c.radius; // To piggyback on the functionality of point, we typecast c into a point. (Using c style typecasting, which is still legal). This is only possible because of inheritance. You could also create the ability to type cast using constructors.
  return os;
}

/* Triangle class */

class triangle{ // A triangle has three verticies, a triangle is three points!
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
    point p(7,5); // Build some shapes
	triangle t(1,2,3,4,1,6);
	circle c(1,2,3.5);
	
	cout << c << endl; // Display the shapes
	cout << t << endl;
	cout << p << endl;
	c = circle(p,1.5);
	cout << c << endl;
}
/* OUTPUT: ShapesTest.cpp

C(1,2) r = 3.5
(1,2) (3,4) (1,6)
(7,5)
C(7,5) r = 1.5

*/
```
There used to be a poster in the library, careers and areas of study, math all the way down, except one empty cell, and it was beautician.
```C++
/* FILE: point.h */
#ifndef _point_h  // Prevents redundancy
#define _point_h  // We can pound include this stuff instead of just writing it at the top.

#include <iostream>

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
	
	friend ostream & operator<<(ostream & os, const point& p); // Overloads ostream
};
#endif //This is the end of that #ifndef
```
pg 177, we've got a subdirectory, shapes 2, we can use #define to really organize our code. In real coding, there's a whole bunch of stuff going on, and so we can organize it, so we can have many coders work on the same stuffs.  
In coding, logistics can be a problem.  
  
```BASH
g++ shapes2Test.cpp shapes2\circle.cpp shapes2\point.cpp shapes2\triangle.cpp
```
This compiles all the things, and so it works, but there's a better way, using make.  
A make file describes things to the make utility that should be done, it looks like this
```Make
#     FILE: Shapes2Test.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes2Test.exe: Shapes2Test.o shapes2/point.o shapes2/triangle.o shapes2/circle.o
		g++ -o Shapes2Test Shapes2Test.o shapes2/point.o shapes2/triangle.o shapes2/circle.o
Shapes2Test.o: Shapes2Test.cpp shapes2/point.h shapes2/triangle.h shapes2/circle.h
		g++ -c Shapes2Test.cpp

point.o: shapes2/point.cpp shapes2/point.h
		g++ -c shapes2/point.cpp

circle.o: shapes2/circle.cpp shapes2/circle.h shapes2/point.o 
		g++ -c shapes2/circle.cpp

triangle.o: shapes2/triangle.cpp shapes2/triangle.h shapes2/point.o 
		g++ -c shapes2/triangle.cpp

```
Which means you can do this
```BASH
make -f Shapes2Test.mak
```
**Polymorphic/Virtual Functions**  
pg 185
You can write code to track the common datatype, but it will appear to morph into functions for the correct function for what you've got
```C++
/* FILE: Shapes3Test.cpp */

/* Classes point and circle are related in such a way that a
circle "is-a" point with a radius. Since a circle is-a
point, it can be treated as a point.
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "shapes3/point.h"
#include "shapes3/circle.h"
#include "shapes3/triangle.h"

int main( )
{
    point *ptr; // pointer to a point
	point p(7,5); // create a couple of shapes
	circle c(1,2,3.5);
	
	cout << "\nShapes:" << endl;
	
	cout << "c = " << c << endl; // Display the shapes
	cout << "p = " << p << endl;
	
	ptr = &p; // ptr tracks a point
	ptr->move(3,3);
	
	cout << "ptr points to = " << *ptr << endl;
	
	ptr = &c; // ptr tracks a circle, since a circle
	ptr->move(4,4); // ... is-a point
	
	cout << "ptr points to = " << *ptr << endl;
	cout << "\nShapes:" << endl;
	cout << "c = " << c << endl; // Display the shapes
	cout << "p = " << p << endl;
}
```
```C++
/* FILE: Shapes4Test.cpp */
/* Classes point and circle are related in such a way that a
circle "is-a" point with a radius. Since a circle is-a
point, it can be treated as a point.
To allow for run-time determination of the appropriate method
for the object referenced by a base class pointer a function
must be declared "virtual". This causes C++ to handle the
pointer in such a way that the appropriate method is called.
The code that uses the classes is the same, but in the classes
themselves methods are declared virtual.
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "shapes4/point.h"
#include "shapes4/circle.h"
#include "shapes4/triangle.h"

int main( )
{
    point *ptr; // pointer to a point\
	
	point p(7,5); // create a couple of shapes
	circle c(1,2,3.5);
	
	cout << "\nShapes:" << endl;
	cout << "c = " << c << endl; // Display the shapes
	cout << "p = " << p << endl;
	
	ptr = &p; // ptr tracks a point
	ptr->move(3,3);
	
	cout << "ptr points to = ";
	ptr->print(cout);
	cout << endl;
	
	ptr = &c; // ptr tracks a circle, since a circle
	ptr->move(4,4); // ... is-a point
	cout << "ptr points to = ";
	ptr->print(cout);
	cout << endl;
	
	cout << "\nShapes:" << endl;
	cout << "c = " << c << endl; // Display the shapes
	cout << "p = " << p << endl;
	
}
/* OUTPUT: Shapes4Test.cpp
Shapes:
c = C(1,2) r = 3.5
p = (7,5)
ptr points to = (3,3)
ptr points to = C(4,4) r = 3.5
Shapes:
c = C(4,4) r = 3.5
p = (3,3)
*/
```
Java does this polymorphism automatically, but that makes it slow.  
You can write code like that on pg 200, so that whether the thing is a circle or a point is unknown and the code still works.  
Shapes6Test, nobody said that a triangle is a shape because of how triangle is done.  
We use putto operator, pg 217, sets up call to call the right print.