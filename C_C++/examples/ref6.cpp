/*     FILE: ref6.cpp     */

// Efficient COMPLEX Add( ) is passed a reference to each operand/parameter
// The "reference-ness" of the parameters can be protected with const

// Add( ) would produce the correct result but tries to produce a nasty 
// ... side effect but, the compiler is watching over the parameters

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Add(const COMPLEX &a, const COMPLEX &b);
void print(const COMPLEX &c);

int main( )
{
  COMPLEX c1, c2, cresult;

  c1.Re = 2;
  c1.Im = 3;

  c2.Re = 2;
  c2.Im = 3;

  cresult = Add(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " + ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  return 0;
}

COMPLEX Add(const COMPLEX &a, const COMPLEX &b)
{
  a.Re = a.Re + b.Re;
  a.Im = a.Im + b.Im;

  return a;
}

void print(const COMPLEX &c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: ref6.cpp

	ref6.cpp: In function `struct COMPLEX Add(const COMPLEX &, const COMPLEX &)':
	ref6.cpp:43: assignment of member `COMPLEX::Re' in read-only structure
	ref6.cpp:44: assignment of member `COMPLEX::Im' in read-only structure

*/
