/*     FILE: ref1.cpp     */

#include <iostream>
using namespace std;

int main( )
{
  int x;
  int &r = x;           // r will be synonymous with x

  x = 5;
  cout << "x = " << x << endl;
  cout << "r = " << r << endl;

  r = 7;
  cout << "x = " << x << endl;
  cout << "r = " << r << endl;

  return 0;
}




/*    OUTPUT: ref1.cpp

	x = 5
	r = 5
	x = 7
	r = 7

*/
