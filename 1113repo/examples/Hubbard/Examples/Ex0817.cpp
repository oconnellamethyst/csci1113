//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.17 on page 196
//  The strcat() function

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ char s1[] = "ABCDEFG";
  char s2[] = "XYZ";
  cout << "Before strcat(s1,s2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
  strcat(s1,s2);
  cout << "After strcat(s1,s2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
}
