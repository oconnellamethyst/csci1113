//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.7 on page 112
//  The Maximum of Three Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
int max(int,int,int);

int main()
{ cout << "Enter three integers: ";
  int x, y, z;
  cin >> x >> y >> z;
  cout << "Their maximum is " << max(x,y,z) << endl;
}

int max(int, int);

int max(int x, int y, int z)
{ int max(int,int);
  return max(max(x,y),z);
}

int max(int x, int y)
{ // returns the maximum of the two given integers:
  if (x < y) return y;
  else return x;
}
