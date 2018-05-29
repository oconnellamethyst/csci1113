//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.12 on page 193
//  Initializing a string array

#include <iostream>
using namespace std;

int main()
{ char* name[]
    = { "George Washington", "John Adams", "Thomas Jefferson" };
    cout << "The names are:\n";
    for (int i = 0; i < 3; i++)
        cout << "\t" << i << ". [" << name[i] << "]" << endl;
}
