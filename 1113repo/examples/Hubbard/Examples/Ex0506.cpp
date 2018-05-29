//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.6 on page 93
//  The max() Function with Declaration Separate from Definition

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

int max(int x, int y)
{ if (x < y) return y;
  else return x;
}
