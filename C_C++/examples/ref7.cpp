/*     FILE: ref7.cpp     */

// Efficient COMPLEX Add( ) is passed a reference to each operand/parameter
// The "reference-ness" of the parameters can be protected with const

// Add( ) produces the correct result and the compiler watches over the parameters

// print( ) now uses "const &" since it shouldn't alter the parameter

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
  COMPLEX result;
  
  result.Re = a.Re + b.Re;
  result.Im = a.Im + b.Im;

  return result;
}

void print(const COMPLEX &c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: ref7.cpp

	Result of (2 + 3i) + (2 + 3i) = (4 + 6i)

*/
