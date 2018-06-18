/*     FILE: io1.cpp     */

/* C++ comments and output with the insertion operator. */
#include <iostream>
#include <stdio.h>
using namespace std;

int main( )
{
  int x,y,z;

  float fx,fy,fz;

  x = 1;
  y = 2;
  z = 3;

  fx = 1.1;
  fy = 2.1;
  fz = 3.1;

  printf("%d\n",x);     // Easy one line comments
  printf("%d\n",y);     // C code works, C libraries available
  printf("%d\n",z);

  printf("%f\n",fx);
  printf("%f\n",fy);
  printf("%f\n",fz);

  float fsum = fx + fy + fz;   // Define variables anytime
  printf("%f\n",fsum);

  cout << x << endl;    // Easy "smart" output
  cout << y << endl;
  cout << z << endl;

  cout << fx << endl;
  cout << fy << endl;
  cout << fz << '\n';

  cout << fsum << '\n';

  return 0;
}




/*    OUTPUT: io1.cpp

	1
	2
	3
	1.100000
	2.100000
	3.100000
	6.300000
	1
	2
	3
	1.1
	2.1
	3.1
	6.3

*/
