//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.12 on page 98
//  A Function that Prints Character Categories

#include <cctype>    // defines the functions isdigit(), islower(), etc.
#include <iostream>  // defines the cout object
using namespace std;

void printCharCategory(char c);
// prints the category to which the given character belongs;

int main()
{ // tests the printCharCategory() function:
  for (int c=0; c < 128; c++)
    printCharCategory(c);
}

void printCharCategory(char c)
{ // prints the category to which the given character belongs:
  cout << "The character [" << c << "] is a ";
  if      (isdigit(c)) cout << "digit.\n";
  else if (islower(c)) cout << "lower-case letter.\n";
  else if (isupper(c)) cout << "capital letter.\n";
  else if (isspace(c)) cout << "white space character.\n";
  else if (iscntrl(c)) cout << "control character.\n";
  else if (ispunct(c)) cout << "punctuation mark.\n";
  else                 cout << "Error.\n";
}
