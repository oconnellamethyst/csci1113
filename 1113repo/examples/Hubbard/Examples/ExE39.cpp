//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.39 on page 383
//  Testing the prev_permutation() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="ABCD";
  for (int i=0; i<24; i++)
  { prev_permutation(s,s+4);
    cout << (i%8?'\t':'\n') << s;
  }
}
