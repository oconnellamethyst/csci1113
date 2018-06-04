//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example G.2 on page 402
//  Using input manipulators

#include <iostream>
using namespace std;

int main()
{ int n;
  cout << "Enter an octal numeral (use 0 prefix): ";
  cin >> oct >> n;
  cout << "Base  8: n = " << oct << n << endl;
  cout << "Base 10: n = " << dec << n << endl;
  cout << "Base 16: n = " << hex << n << endl;
  cout << "Enter a decimal numeral: ";
  cin >> dec >> n;
  cout << "Base  8: n = " << oct << n << endl;
  cout << "Base 10: n = " << dec << n << endl;
  cout << "Base 16: n = " << hex << n << endl;
  cout << "Enter a hexadecimal numeral (use 0x prefix): ";
  cin >> hex >> n;
  cout << "Base  8: n = " << oct << n << endl;
  cout << "Base 10: n = " << dec << n << endl;
  cout << "Base 16: n = " << hex << n << endl;
}
