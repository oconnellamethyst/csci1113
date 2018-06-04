//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.4 on page 215
//  Using the cin.getline() function

#include <iostream>
using namespace std;

const int LEN=32;        // maximum word length
const int SIZE=10;       // array size
typedef char Name[LEN];  // defines Name to be a C-string type

int main()
{ Name king[SIZE];       // defines king to be an array of 10 names
  int n=0;
  while(cin.getline(king[n++], LEN) && n<SIZE)
    ;
  --n;                   // now n == the number of names read
  for (int i=0; i<n; i++)
    cout << '\t' << i+1 << ". " << king[i] << endl;
}
