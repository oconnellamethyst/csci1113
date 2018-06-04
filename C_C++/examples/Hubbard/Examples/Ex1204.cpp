//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 12.4 on page 
//  The multiplication operator for the Ratio class

#include <iostream>
using namespace std;

class Ratio
{ // instances represent fractions
    friend Ratio operator*(const Ratio&, const Ratio&);
  public:
    Ratio(int=0,int=1);
    int numerator() const;
    int denominator() const;
    Ratio reciprocal() const;
    void invert();
    operator double() const;
    
    void print() const { cout << num << '/' << den << endl; }
  private:
    int num, den;
    void reduce();
    // INVARIANT: den > 0 && gcd(num,den) == 1
};


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
