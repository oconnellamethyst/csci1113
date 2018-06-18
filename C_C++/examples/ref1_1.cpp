/*     FILE: ref1_1.cpp     */

#include <iostream>
using namespace std;

int main( )
{
  int x;
  int y;
  int &r = x;           // r will be synonymous with x
                        // r cannot be made to refer to 
                        // ... another variable
  x = 5;
  y = 12;
  cout << "x = " << x << endl;
  cout << "r = " << r << endl;

  r = y;
  cout << "x = " << x << endl;
  cout << "r = " << r << endl;

  return 0;
}




/*    OUTPUT: ref1_1.cpp

	x = 5
	r = 5
	x = 12
	r = 12

*/
