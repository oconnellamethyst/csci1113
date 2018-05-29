//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.8 on page 250
//  A Point class

#include <cmath>
#include <iostream>
using namespace std;

class Point 
{ public:
    Point( ) : _x(0.0), _y(0.0) {}
    Point(double x, double y): _x( x ) , _y( y ) {}
    Point(const Point& p) { _x = p._x ; _y = p._y; }
    double norm() const { return sqrt(_x*_x+_y*_y); }
    void  print() const { cout << "(" << _x << ", " << _y << ")" ; }
    void negate() { _x = -_x; _y = -_y; }
  private:
    double _x;
    double _y;
};

int main()
{ Point p(-3,4);
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
  p.negate();
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
}
