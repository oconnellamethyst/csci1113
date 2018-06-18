/*     FILE: constant2.cpp     */

/* Avoiding #define. The compiler is watching. */
#include <iostream>

using namespace std;

int main( )
{
  const int size = 5;
  int ar[size];
  
  for(int i=0; i<size ; i++)
    ar[i] = i+1;

  for(int i=0; i<size ; i++)
     cout << "ar[" << i << "] = " << ar[i] << endl;


  cout << "size = " << size << endl;

  size = 11;

  cout << "now size = " << size << endl;
  
  return 0;
}


/*    OUTPUT: constant2.cpp

	constant2.cpp: In function `int main()':
	constant2.cpp:20: assignment of read-only variable `size'

*/
