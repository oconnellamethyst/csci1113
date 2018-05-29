//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.10 on page 191
//  An array of strings

#include <iostream>
using namespace std;

int main()
{ char name[5][20];
  int count=0;
  cout << "Enter at most 4 names with at most 19 characters:\n";
  while (cin.getline(name[count++], 20))
    		;
  --count;
  cout << "The names are:\n";
  for (int i=0; i<count; i++)
    cout << "\t" << i << ". [" << name[i] << "]" << endl;
}
