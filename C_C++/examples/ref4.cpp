/*     FILE: ref4.cpp     */

// More efficient COMPLEX Mult( ), less data passed to Mult( )

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Mult(COMPLEX &a, COMPLEX &b);
void print(COMPLEX c);

int main( )
{
  COMPLEX c1, c2, cresult;

  c1.Re = 2;
  c1.Im = 3;

  c2.Re = 2;
  c2.Im = 3;

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

COMPLEX Mult(COMPLEX &a, COMPLEX &b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

void print(COMPLEX c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: ref4.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
