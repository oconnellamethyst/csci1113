//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.23 on page 73
//  Using continue and break statements

#include <iomanip>   // defines setw()
#include <iostream>  // defines cout
using namespace std;

int main()
{ int n;
  for (;;)
  { cout << "Enter int: ";  cin >> n;
    if (n%2 == 0) continue;
    if (n%3 == 0) break;
    cout << "\tBottom of loop.\n";
  	}
  cout << "\tOutside of loop.\n";
}
