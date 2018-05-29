//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.6 on page 112
//  The Minimum of Four Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
int min(int,int,int,int);

int main()
{ cout << "Enter four integers: ";
  int w, x, y, z;
  cin >> w >> x >> y >> z;
  cout << "Their minimum is " << min(w,x,y,z) << endl;
}

int min(int n1, int n2, int n3, int n4)
{ int min=n1;
  if (n2 < min) min = n2;
  if (n3 < min) min = n3;
  if (n4 < min) min = n4;
  return min;
}
