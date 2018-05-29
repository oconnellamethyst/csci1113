//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.9 on page 222
//  Right-justifying text

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{ ifstream in("Pr0909.in");
  const int SIZE=100;  // maximum number of lines stored
  string line[SIZE], s;
  int n=0, len, maxlen=0;
  while (!in.eof())
  { getline(in, s);
    len = s.length();
    if (len > 0) cout << s << endl;
    if (len > maxlen) maxlen = len;
    line[n++] = s;
  }
  --n;                     // n == number of lines read
  for (int i=0; i<n; i++)
  { s = line[i];
    len = s.length();
    cout << string(maxlen-len, ' ') << s << endl;
  }
} 
