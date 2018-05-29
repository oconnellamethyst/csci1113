//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 1.9 on page 10
//  Testing the ten escape sequences

#include <iostream>
using namespace std;

int main()
{ // prints escape sequences:
  cout << "Prints \"\\nXXYY\": " << "\nXXYY" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints \"\\nXX\\bYY\": " << "\nXX\bYY" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints \"\\n\\tXX\\tYY\": " << "\n\tXX\tYY" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints the \'\\a\' character: " << '\a' << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints the \'\\r\' character: " << '\r' << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints the \'\\v\' character: " << '\v' << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Prints the \'\\?\' character: " << '\?' << endl;
  cout << "--------------------------------------------" << endl;
}
