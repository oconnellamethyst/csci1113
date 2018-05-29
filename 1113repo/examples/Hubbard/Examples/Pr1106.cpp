//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.6 on page 267
//  An insertion operator for the Point class

ostream& operator<<(ostream& ostr, const Point& point)
{ return ostr << "(" << _x << "," << _y << "," << _z << ")";
}
