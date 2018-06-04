//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.9 on page 220
//  Using an input string stream

#include <iostream>  // defines the cout object
#include <sstream>   // defines the istringstream classe
#include <string>    // defines the string class
using namespace std;

void print(string&,int,float,istringstream&);

int main()
{ string s;                                  // a character string
  int n=0;                                   // an integer
  float x=0.0;                               // a floating-point number
  istringstream iss("ABCDEFG 44 3.14");  // an input string stream
  print(s,n,x,iss);
  iss >> s;
  print(s,n,x,iss);
  iss >> n;
  print(s,n,x,iss);
  iss >> x;
  print(s,n,x,iss);
}

void print(string& s, int n, float x, istringstream& iss)
{ cout << "s = \"" << s << "\", n = " << n << ", x = " << x
       << ", iss.str() = \"" << iss.str() << "\"" << endl;
}
