/*     FILE: inline3.cpp     */

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

inline COMPLEX Mult(COMPLEX a, COMPLEX b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

inline void init(COMPLEX *c,float r, float im)
{
  c->Re = r;
  c->Im = im;
}

void print(COMPLEX c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


int main( )
{
  COMPLEX c1, c2, cresult;

  init(&c1,2,3);
  init(&c2,3,4);

  cresult = Mult(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " * ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  return 0;
}


/*    OUTPUT: inline3.cpp

	Result of (2 + 3i) * (3 + 4i) = (-6 + 17i)

*/
