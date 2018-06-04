//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.5 on page 91
//  A Test Driver for the max() Function

#include <iostream>  // defines the cout object
using namespace std;

int max(int x, int y);

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
{ // returns larger of the two given integers:
  if (x < y) return y;
  else return x;
}
