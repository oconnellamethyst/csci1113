/*     FILE: array.cpp     */

/* The compiler does a lot of nice initialization.  */

#include <iostream>
using namespace std;

int main( )
{
  char name[ ] = "Jim Polzin";
  int ar[ ] = {1,2,3,4,5};

  cout << "The string is: " << name << endl;
  
  for(int i=0; i < 5; i++)        /* Display the array. */
    cout << "ar[" << i << "] = " << ar[i] << endl;

  return 0;
}


/*    OUTPUT: array.cpp

	The string is: Jim Polzin
	ar[0] = 1
	ar[1] = 2
	ar[2] = 3
	ar[3] = 4
	ar[4] = 5

*/
