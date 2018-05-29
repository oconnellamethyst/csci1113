//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.18 on page 197
//  The strncat() function

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ // test-driver for the strncat() function:
  char s1[] = "ABCDEFG";
  char s[] = "\0\0\0\0";
  char s2[] = "XYZ";
  cout << "Before strncat(s1,s2,2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
  strncat(s1,s2,2);
  cout << "After strncat(s1,s2,2):\n";
  cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << endl;
  cout << "\ts2 = [" << s2 << "], length = " << strlen(s2) << endl;
}
