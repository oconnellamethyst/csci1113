//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.22 on page 109
//  Overloading the max() function

#include <iostream>  // defines the cin and cout objects
using namespace std;
int max(int, int);
int max(int, int, int);

int main()
{ cout << max(99,77) << " " << max(55,66,33);
}

int max(int x, int y)
{ // returns the maximum of the two given integers:
  return (x > y ? x : y);
}

int max(int x, int y, int z)
{ // returns the maximum of the three given integers:
  int m = (x > y ? x : y);  // m = max(x,y)
  return (z > m ? z : m);
}
