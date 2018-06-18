/*     FILE: ref8.cpp     */

// The caller could defend against reference parameters

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Add(COMPLEX &a, COMPLEX &b);
void print(const COMPLEX &c);

int main( )
{
  COMPLEX c1, c2, cresult;

  c1.Re = 2;
  c1.Im = 3;

  c2.Re = 2;
  c2.Im = 3;
  
  const COMPLEX & p1 = c1;
  const COMPLEX & p2 = c2;

  cresult = Add(p1, p2);

// or

  cresult = Add((const COMPLEX)c1, (const COMPLEX)c2);

  cout << "Result of ";
  print(c1);
  cout << " + ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  return 0;
}

COMPLEX Add(COMPLEX &a, COMPLEX &b)
{
  a.Re = a.Re + b.Re;
  a.Im = a.Im + b.Im;

  return a;
}

void print(const COMPLEX &c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: ref8.cpp

	ref8.cpp: In function `int main()':
	ref8.cpp:27: conversion from `const COMPLEX' to `COMPLEX &' discards qualifiers
	ref8.cpp:11: in passing argument 1 of `Add(COMPLEX &, COMPLEX &)'
	ref8.cpp:27: conversion from `const COMPLEX' to `COMPLEX &' discards qualifiers
	ref8.cpp:11: in passing argument 2 of `Add(COMPLEX &, COMPLEX &)'
	ref8.cpp:31: initialization of non-const reference type `struct COMPLEX &'
	ref8.cpp:31: from rvalue of type `COMPLEX'
	ref8.cpp:11: in passing argument 1 of `Add(COMPLEX &, COMPLEX &)'
	ref8.cpp:31: initialization of non-const reference type `struct COMPLEX &'
	ref8.cpp:31: from rvalue of type `COMPLEX'
	ref8.cpp:11: in passing argument 2 of `Add(COMPLEX &, COMPLEX &)'

*/
