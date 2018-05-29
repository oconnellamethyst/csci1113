//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.7 on page 267
//  Equality and inequality operators for the Point class

bool Point::operator==(const Point& point) const
{ return _x == point._x && _y == point._y && _z == point._z;
}

bool Point::operator!=(const Point& point) const
{ return _x != point._x || _y != point._y || _z != point._z;
}
