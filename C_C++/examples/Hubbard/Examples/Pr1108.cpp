//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.8 on page 267
//  Addition and subtraction operators for the Point class

Point operator+(const Point& p1, const Point& p2)
{ return Point(p1._x+p2._x,p1._y+p2._y,p1._z+p2._z);
}

Point operator-(const Point& p1, const Point& p2)
{ return Point(p1._x-p2._x,p1._y-p2._y,p1._z-p2._z);
}
