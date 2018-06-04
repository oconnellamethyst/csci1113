//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 2.4 on page 33
//  Converting Inches to Centimeters

#include <iostream>
using namespace std;

int main()
{ // converts inches to centimeters
  float inches, cm;
  cout << "Enter length in inches: ";
  cin >> inches;
  cm = 2.54*inches;
  cout << inches << " inches = " << cm << " centimeters.\n";

}
