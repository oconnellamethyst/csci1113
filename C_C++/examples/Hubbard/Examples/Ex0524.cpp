//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.24 on page 110
//  Using the exit() function to terminate a program

#include <cstdlib>   // defines the exit() function
#include <iostream>  // defines the cin and cout objects
using namespace std;
double reciprocal(double x);

int main()
{ double x;
  cin >> x;
  cout << reciprocal(x);
}

double reciprocal(double x)
{ // returns the reciprocal of x:
  if (x == 0) exit(1);  // terminate the program
  return 1.0/x;
}
