//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.13
//  Finding the minimum of four integers

#include <iostream>  // defines the cout object
using namespace std;

int min(int,int,int,int);

int main()
{ // tests the min() function:
  cout << "Enter four integers: ";
  int w, x, y, z;
  cin >> w >> x >> y >> z;
  cout << "Their minimum is " << min(w,x,y,z) << endl;
}

int min(int,int);

int min(int n1, int n2, int n3, int n4)
{ int m12=min(n1,n2);
  int m34=min(n3,n4);
  return (m12 < m34 ? m12 : m34);
}

int min(int m, int n)
{ return (m < n ? m : n);
}
