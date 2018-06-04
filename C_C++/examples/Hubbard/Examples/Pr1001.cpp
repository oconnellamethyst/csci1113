//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.1 on page 249
//  A Point class

#include <cmath>
#include <iostream>
using namespace std;

class Point
{ public:
    Point(float x=0, float y=0, float z=0): x_(x), y_(y), z_(z) {}
    Point(const Point& p) : x_(p.x_), y_(p.y_), z_(p.z_)  { }
    void negate() { x_ *= -1; y_ *= -1; z_ *= -1; }
    double norm() { return sqrt(x_*x_ + y_*y_ + z_*z_); }
    void print()
    { cout << '(' << x_ << "," << y_ << "," << z_ << ")";
    }
  private:
    float x_, y_, z_;
};

int main()
{ Point p(12,-3,4);
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
  p.negate();
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
}
