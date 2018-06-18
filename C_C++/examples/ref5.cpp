/*     FILE: ref5.cpp     */

// Efficient COMPLEX Add( ) is passed a reference to each operand/parameter
// The "reference-ness" of the parameters can be protected with const

// Add( ) produces the correct result but produces a nasty side effect

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Add(COMPLEX &a, COMPLEX &b);
void print(COMPLEX c);

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

COMPLEX Add(COMPLEX &a, COMPLEX &b)
{
  a.Re = a.Re + b.Re;
  a.Im = a.Im + b.Im;

  return a;
}

void print(COMPLEX c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: ref5.cpp

	Result of (4 + 6i) + (2 + 3i) = (4 + 6i)

*/
