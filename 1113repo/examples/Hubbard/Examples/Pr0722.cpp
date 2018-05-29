//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.22 on page 176
//  The product a function's values

#include <iostream>  // defines the cout object
using namespace std;

int product(int(*)(int),int,int);
int square(int);
int cube(int);

int main()
{ cout << "product(square,3,4) = " << product(square,3,4) << endl;  // 9*16*25*36
  cout << "product(cube,1,3) = " << product(cube,1,3) << endl;    // 1*8*27
}

int product(int (*pf)(int k), int a, int n)
{ // returns the product f(a)*f(a+1)*f(a+2)* . . . *f(a+n-1)
  // where f() = *pf():
  int p = 1;
  for (int x=a; x<a+n; x++)
    p *= (*pf)(x);
  return p;
}

int square(int k)
{ return k*k;
}

int cube(int k)
{ return k*k*k;
}
