/*     FILE: inline5.cpp     */

#include <iostream>
#include "inline5.h"
using namespace std;

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


/*    OUTPUT: inline5.cpp

	Result of (2 + 3i) * (3 + 4i) = (-6 + 17i)

*/
