//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.11 on page 192
//  A string array

#include <iostream>
using namespace std;

int main()
{ char buffer[80];
  cin.getline(buffer,80,'$');
  char* name[4];
  name[0] = buffer;
  int count = 0;
  for (char* p=buffer; *p !='\0'; p++)
    if (*p == '\n')
    { *p = '\0';            //  end name[count]
      name[++count] = p+1;  //  begin next name
    }
  cout << "The names are:\n";
  for (int i=0; i<count; i++)
    cout << "\t" << i << ". [" << name[i] << "]" << endl;
}
