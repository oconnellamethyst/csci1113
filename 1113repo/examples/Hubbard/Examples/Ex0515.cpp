//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.15 on page 101
//  A Function for Reading the User's Age

#include <iostream>  // defines the cout object
using namespace std;

int age();
// prompts the user to input his/her age, and returns that value;

int main()
{ // tests the age() function:
  int a = age();
  cout << "\nYou are " << a << " years old.\n";
}

int age()
{ // prompts the user to input his/her age, and returns that value:
  int n;
  while (true)
  { cout << "How old are you: ";
    cin >> n;
    if (n < 0) cout << "\a\tYour age could not be negative.";
    else if (n > 120) cout << "\a\tYou could not be over 120.";
    else return n;
    cout << "\n\tTry again.\n";
  }
}
