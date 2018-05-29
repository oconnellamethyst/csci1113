//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Ratio.cpp from pages 
//  Implementation of the Ratio class

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
#include "Ratio.h"
using namespace std;

//////////////////////////////////////////////////////////////////////
//  friend functions:

ostream& operator<<(ostream& ostr, const Ratio& r)
{ return ostr << r.num << "/" << r.den;
}

istream& operator>>(istream& istr, Ratio& r)
{ istr >> r.num;
  istr.ignore(1);
  istr >> r.den;
  r.reduce();
  return istr;
}

bool operator==(const Ratio& x, const Ratio& y)
{ return (x.num * y.den == y.num * x.den);
}
 
bool operator<(const Ratio& x, const Ratio& y)
{ return (x.num*y.den < y.num*x.den);
}

Ratio operator-(const Ratio& x)
{ Ratio y(-x.num, x.den);
  return y;
}

Ratio operator-(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.den-r2.num*r1.den,r1.den*r2.den);
  return r;
}

Ratio operator*(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.num,r1.den*r2.den);
  return r;
}

Ratio operator/(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.den,r1.den*r2.num);
  return r;
}

//////////////////////////////////////////////////////////////////////
//  public members:

Ratio::Ratio(int num, int den) : num(num), den(den)
{ reduce();
}

Ratio::Ratio(const Ratio& r) : num(r.num), den(r.den)
{ 
}

Ratio& Ratio::operator=(const Ratio& r)
{ num = r.num;
  den = r.den;
  return *this;
}

Ratio& Ratio::operator*=(const Ratio& r)
{ num = num*r.num;
  den = den*r.den;
  reduce();
  return *this;
}

Ratio Ratio::operator++()
{ num += den;
  reduce();
  return *this;
}

Ratio Ratio::operator++(int)
{ Ratio temp = *this;
  num += den;
  reduce();
  return temp;
}

int& Ratio::operator[](int i)
{ if (i == 1) return num;
  if (i == 2) return den;
  cerr << "ERROR: index out of range\n";
  exit(0);
}

int Ratio::numerator() const
{ return num;
}

int Ratio::denominator() const
{ return den;
}

Ratio Ratio::reciprocal() const
{ Ratio r(den,num);
  r.reduce();
  return r;
}

void Ratio::invert()
{ int temp = num;
  num = den;
  den = temp;
  reduce();
}

Ratio::operator double() const
{ return double(num)/den;
}

void Ratio::print() const
{ cout << num << '/' << den;
}

//////////////////////////////////////////////////////////////////////
//  private members:

int gcd(int,int);

void Ratio::reduce()
{ // enforce invariant(den > 0):
  if (num == 0 || den == 0)
  { num = 0;
    den = 1;
    return;
  }
  if (den < 0)
  { den *= -1;
    num *= -1;
  }
  // enforce invariant(gcd(num,den) == 1):
  if (num == 1) return;
  int sgn = (num<0?-1:1);
  int g = gcd(sgn*num,den);
  num /= g;
  den /= g;
}

int gcd(int m, int n)
{ // returns the greatest common divisor of m and n:
  if (m<n) swap(m,n);
  assert(n>=0);
  while (n>0)
  { int r=m%n;
    m = n;
    n = r;
  }
  return m;
}
