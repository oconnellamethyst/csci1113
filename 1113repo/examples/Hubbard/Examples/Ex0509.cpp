//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.9 on page 95
//  The Factorial Function

#include <iostream>  // defines the cout object
using namespace std;

long fact(int);

int main()
{ // tests the factorial() function:
  for (int i=-1; i < 6; i++)
    cout << " " << fact(i);
  cout << endl;
}

long fact(int n)
{ // returns n!
  if (n < 0) return 0;
  int f = 1;
  while (n > 1)
    f *= n--;
  return f;
}
