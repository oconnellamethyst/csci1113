//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.11 on page 112
//  The Factorial Function

#include <iostream>  // defines the cin and cout objects
using namespace std;

long fact(int n);
int main()
{ for (int i=-1; i<20; i++)
    cout << "fact(" << i << ") = " << fact(i) << endl;
}

long fact(int n)
{ if (n < 2) return 1;
  long f=1;
  for (int i=2; i <= n; i++)
    f *= i;
  return f;
}
