//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.8 on page 220
//  Using an output string stream

#include <iostream>  // defines the cout object
#include <sstream>   // defines the istringstream classe
#include <string>    // defines the string class
using namespace std;

void print(ostringstream&);

int main()
{ string s="ABCDEFG";
  int n=33;
  float x=2.718;
  ostringstream oss;
  print(oss);
  oss << s;
  print(oss);
  oss << " " << n;
  print(oss);
  oss << " " << x;
  print(oss);
}

void print(ostringstream& oss)
{ cout << "oss.str() = \"" << oss.str() << "\"" << endl;
}
