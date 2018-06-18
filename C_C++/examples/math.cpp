/*     FILE: math.cpp     */

/* Using the Math libraries, may have to link with -lm */
#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
  int x;
  double root;
  
  cout << "Enter an integer, I'll give you its square root: " << endl;
  cin >> x;
  
  root = sqrt(double(x));
  cout << "The root is " << root << endl;

  return 0;
}


/*    OUTPUT: math.cpp

	Enter an integer, I'll give you its square root: 75
	
	The root is 8.66025

*/
