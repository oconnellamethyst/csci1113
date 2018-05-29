//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.32 on page 381
//  Testing the next_permutation() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="ABCD";
  for (int i=0; i<24; i++)
  { next_permutation(s,s+4);
    cout << (i%8?'\t':'\n') << s;
  }
}
