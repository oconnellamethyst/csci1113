/*     FILE: constant.cpp     */

/* Avoiding #define. */
#include <iostream>
#include <cstdio>
using namespace std;

int main( )
{
  const int size = 5;
  int ar[size];
  
  for(int i=0; i<size ; i++)
    ar[i] = i+1;

  for(int i=0; i<size ; i++)
     cout << "ar[" << i << "] = " << ar[i] << endl;
     
  return 0;
}


/*    OUTPUT: constant.cpp

	ar[0] = 1
	ar[1] = 2
	ar[2] = 3
	ar[3] = 4
	ar[4] = 5

*/
