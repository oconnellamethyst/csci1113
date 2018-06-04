//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 12.2, page 292
//  Shape Heirarchy

#include <cmath>
#include <iostream>
using namespace std;
const double PI=3.14159265358979;

class Shape
{
public:
  virtual void print() = 0;
  virtual float area() = 0;
};

class TwoDimensional : public Shape
{
public:
  virtual float perimeter() = 0;
};

class ThreeDimensional : public Shape
{
public:
  virtual float volume() = 0;
};

class Circle : public TwoDimensional
{
public:
  Circle(float r) : radius(r) { }
  void print() { cout << "Shape is a circle.\n"; }
  float perimeter() { return 2*PI*radius; }
  float area() { return PI*radius*radius; }
private:
  float radius;
};

class Cone : public ThreeDimensional
{
public:
  Cone(float r, float h) : radius(r), height(h) { }
  void print();
  float area();
  float volume() { return PI*radius*radius*height/3; }
private:
  float radius, height;
};
void Cone::print()
{
  cout << "Cone: radius = " << radius << ", height = " << height << endl;
}
float Cone::area()
{
  float s = sqrt(radius*radius + height*height);
  return PI*radius*(radius+s);
}
