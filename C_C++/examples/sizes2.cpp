/*     FILE: sizes2.cpp     */

/* Controlling the size of constants. */
#include <iostream>
using namespace std;

int main( )
{
  cout << "Size of 123: " << sizeof(123) 
       << " bytes, " << sizeof(123)*8 << " bits." << endl;
  cout << "Size of 123: " << sizeof(123L) 
       << " bytes, " << sizeof(123L)*8 << " bits." << endl;
  cout << "Size of 3.21: " << sizeof(3.21) 
       << " bytes, " << sizeof(3.21)*8 << " bits." << endl;
  cout << "Size of 3.21f: " << sizeof(3.21f) 
       << " bytes, " << sizeof(3.21f)*8 << " bits." << endl;
  cout << "Size of 3.21L: " << sizeof(3.21L) 
       << " bytes, " << sizeof(3.21L)*8 << " bits." << endl;
       
  return 0;
}


/*    OUTPUT: sizes2.cpp

	Size of 123: 4 bytes, 32 bits.
	Size of 123: 4 bytes, 32 bits.
	Size of 3.21: 8 bytes, 64 bits.
	Size of 3.21f: 4 bytes, 32 bits.
	Size of 3.21L: 12 bytes, 96 bits.

*/
