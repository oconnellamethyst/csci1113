//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.2 on page 214
//  Using the extraction operation to control a loop

#include <iostream>
using namespace std;

int main()
{ int n;
  while (cin >> n)
    cout << "n = " << n << endl;
}
