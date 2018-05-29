//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.22 on page 72
//  Using a break statement in nested loops

#include <iomanip>   // defines setw()
#include <iostream>  // defines cout
using namespace std;

int main()
{ // prints a multiplication table:
  for (int x=1; x <= 12; x++)
  { for (int y=1; y <= 12; y++)
      if (y > x) break;
      else cout << setw(4) << x*y;
    cout << endl;
  }
}
