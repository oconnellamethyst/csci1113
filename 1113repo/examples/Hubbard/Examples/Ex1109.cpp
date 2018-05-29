//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.9 on page 262
//  Overloading the >> operator

#include <cassert>   // defines the assert() function
#include <iostream>
using namespace std;

class Ratio
{ // instances represent fractions
    friend ostream& operator<<(ostream&, const Ratio&);
    friend istream& operator>>(istream&, Ratio&);
    friend bool operator==(const Ratio&, const Ratio&);
    friend Ratio operator+(const Ratio&, const Ratio&);
    friend Ratio operator-(const Ratio&, const Ratio&);
    friend Ratio operator*(const Ratio&, const Ratio&);
    friend Ratio operator/(const Ratio&, const Ratio&);
  public:
    Ratio(int=0,int=1);
    Ratio(const Ratio&);
    Ratio& Ratio::operator=(const Ratio&);
    Ratio& operator*=(const Ratio&);
    int numerator() const;
    int denominator() const;
    Ratio reciprocal() const;
    void invert();
    operator double() const;
    void print() { cout << num << '/' << den; }
  private:
    int num;
    int den;
    void reduce();
    // INVARIANT: den > 0 && gcd(num,den) == 1
};

//#include "Ratio.h"

int main()
{ Ratio x, y;
  cin >> x >> y;
  cout << "x = " << x << ", y = " << y << endl;
}

ostream& operator<<(ostream& ostr, const Ratio& r)
{ return ostr << r.num << "/" << r.den;
}

istream& operator>>(istream& istr, Ratio& r)
{ cout << "\t  Numerator: ";  	istr >> r.num;
  cout << "\tDenominator: ";  	istr >> r.den;
  r.reduce();
  return istr;
}

bool operator==(const Ratio& x, const Ratio& y)
{ return (x.num * y.den == y.num * x.den);
}

Ratio operator+(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.den+r2.num*r1.den,r1.den*r2.den);
  r.reduce();
  return r;
}

Ratio operator-(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.den-r2.num*r1.den,r1.den*r2.den);
  r.reduce();
  return r;
}

Ratio operator*(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.num,r1.den*r2.den);
  r.reduce();
  return r;
}

Ratio operator/(const Ratio& r1, const Ratio& r2)
{ Ratio r(r1.num*r2.den,r1.den*r2.num);
  r.reduce();
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
  return *this;
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
