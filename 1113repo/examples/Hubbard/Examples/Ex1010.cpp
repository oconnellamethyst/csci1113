//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.10 on page 241
//  Tracing calls to the copy constructor

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio(int n=0, int d=1) : num(n), den(d) { reduce(); }
    Ratio(const Ratio& r) : num(r.num), den(r.den) 
    { cout << "COPY CONSTRUCTOR CALLED\n"; }
  private:
    int num, den;
    void reduce();
};

Ratio f(Ratio);

int main()
{ Ratio x(22,7);
  Ratio y(x);  // calls the copy constructor, copying x to y
  f(y);
}

Ratio f(Ratio r)  // calls the copy constructor, copying ? to r
{ Ratio s = r;    // calls the copy constructor, copying r to s
  return s;	      // calls the copy constructor, copying s to ?
}

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
  if (den == 1) return;    // it's already reduced
  int sgn = (num<0?-1:1);  // no negatives to gcd()
  int g = gcd(sgn*num,den);
  num /= g;
  den /= g;
}

int gcd(int m, int n)
{ // returns the greatest common divisor of m and n:
  if (m<n) swap(m,n);
  while (n>0)
  { int r=m%n;
    m = n;
    n = r;
  }
  return m;
}
