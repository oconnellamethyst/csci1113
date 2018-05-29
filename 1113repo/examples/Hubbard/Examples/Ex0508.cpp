//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.8 on page 94
//  Test Driver for the max() Function

#include <iostream>  // defines the cout object
using namespace std;

int max(int,int);
// returns larger of the two given integers:

int main()
{ // tests the max() function:
  int m, n;
  do
  { cin >> m >> n;
	    cout << "\tmax(" << m << "," << n << ") = " << max(m,n) << endl;
  }
  while (m != 0);
}
