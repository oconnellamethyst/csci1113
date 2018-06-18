/*     FILE: ref11.cpp     */

/* A reference return value can be assigned into. */

// This could also be done with skillful use of pointers.

#include <iostream>
using namespace std;

int &ref1(int &i1);
int *ref2(int *i1);

int main( )
{
  int x;

  x = 5;

  cout << "Before: x = " << x << endl;

  ref1(x) = 7;

  cout << "After: x = " << x << endl;

  *ref2(&x) = 9;

  cout << "After again: x = " << x << endl;

  return 0;
}

int &ref1(int &i1)
{
  return i1;

}

int *ref2(int *i1)
{
  return i1;

}



/*    OUTPUT: ref11.cpp

	Before: x = 5
	After: x = 7
	After again: x = 9

*/
