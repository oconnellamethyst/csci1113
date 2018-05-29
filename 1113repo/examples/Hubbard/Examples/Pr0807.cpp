//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.7 on page 202
//  I/O of C-string

#include <iostream>
using namespace std;

int main()
{ char word[80];
   while (cin >> word)
     if (*word) cout << "\t\"" << word << "\"\n";
}
