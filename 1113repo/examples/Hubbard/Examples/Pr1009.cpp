//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.9 on page 250
//  A Circle class

#include <iostream>
using namespace std;
const double PI=3.14159265358979;

class Circle
{ public:
    Circle( ) : _x(0.0) , _y(0.0), _radius(1.0) {}
    Circle( float x, float y, float radius )
      : _x( x ) , _y( y ),  _radius( radius) {}
    Circle( const Circle & C )
      { _x = C._x ;  _y = C._y ; _radius = C._radius; }
    float diameter() const { return 2.0 * _radius ; }
    float area() const { return 3.141592654 * _radius * _radius; }
    float circumference() const { return PI*diameter(); }
    void  print() const 
     { cout << "Center is at (" << _x << ", " << _y
            << ") and " << "Radius = " << _radius ; }
  private:
    float _x;
    float _y;
    float _radius;
};

int main()
{ Circle c(3,4,5);
  c.print();
}
