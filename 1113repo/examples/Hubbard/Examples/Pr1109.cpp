//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.9 on page 267
//  A multiplication operator for the Point class

Point operator*(const double coef, const Point& point)
{ return Point(coef*point._x,coef*point._y,coef*point._z);
}