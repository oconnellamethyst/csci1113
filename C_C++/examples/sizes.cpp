/*     FILE: sizes.cpp     */

/* Sizes of the various data types, on this implementation. */
#include <iostream>
using namespace std;

int main( )
{
  cout << "Size of 123: " << sizeof(123) 
       << " bytes, " << sizeof(char)*8 << " bits." << endl;
  cout << "Size of char: " << sizeof(char) 
       << " bytes, " << sizeof(char)*8 << " bits." << endl;
  cout << "Size of short: " << sizeof(short) 
       << " bytes, " << sizeof(short)*8 << " bits." << endl;
  cout << "Size of int: " << sizeof(int) 
       << " bytes, " << sizeof(int)*8 << " bits." << endl;
  cout << "Size of long: " << sizeof(long) 
       << " bytes, " << sizeof(long)*8 << " bits." << endl;
  cout << "Size of float: " << sizeof(float) 
       << " bytes, " << sizeof(float)*8 << " bits." << endl;
  cout << "Size of double: " << sizeof(double) 
       << " bytes, " << sizeof(double)*8 << " bits." << endl;
  cout << "Size of long double: " << sizeof(long double) 
       << " bytes, " << sizeof(long double)*8 << " bits." << endl;
  cout << "Size of bool: " << sizeof(bool) 
       << " bytes, " << sizeof(bool)*8 << " bits." << endl;

  return 0;
}


/*    OUTPUT: sizes.cpp

	Size of 123: 4 bytes, 8 bits.
	Size of char: 1 bytes, 8 bits.
	Size of short: 2 bytes, 16 bits.
	Size of int: 4 bytes, 32 bits.
	Size of long: 4 bytes, 32 bits.
	Size of float: 4 bytes, 32 bits.
	Size of double: 8 bytes, 64 bits.
	Size of long double: 12 bytes, 96 bits.
	Size of bool: 1 bytes, 8 bits.

*/
