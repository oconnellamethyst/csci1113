//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.5 on page 267
//  An assignment operator for the Point class

Point& Point::operator=(const Point& point)
{ _x = point._x;
  _y = point._y;
  _z = point._z;
  return *this;
}
