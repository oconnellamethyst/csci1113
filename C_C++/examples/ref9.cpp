/*     FILE: ref9.cpp     */

/* A reference return value can be assigned into. */
#include <iostream>
using namespace std;

int &ref1(int &i1);

int main( )
{
  int x;

  x = 5;

  cout << "Before: x = " << x << endl;

  ref1(x) = 7;

  cout << "After: x = " << x << endl;

  return 0;
}

int &ref1(int &i1)
{
  return i1;

}


/*    OUTPUT: ref9.cpp

	Before: x = 5
	After: x = 7

*/
