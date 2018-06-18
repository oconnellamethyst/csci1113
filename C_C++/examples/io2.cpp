/*     FILE: io2.cpp     */

/* Reading in data with the extraction operator. */
#include <iostream>
#include <stdio.h>
using namespace std;

int main( )
{
  int x;

  float fx;

  cout << "Please enter an integer: " << endl;   // Prompt
  cin >> x;                                      // Read

  cout << "Please enter a float: " << endl;   // Prompt
  cin >> fx;                                  // Read

  cout << endl;
  cout << "x = " << x << endl;
  cout << "fx = " << fx << endl;

  return 0;
}


/*    OUTPUT: io2.cpp

	Please enter an integer: 34
	
	Please enter a float: 3.75
	
	
	x = 34
	fx = 3.75

*/
