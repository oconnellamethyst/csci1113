//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.24 on page 74
//  Using a goto to break out of nested loops

#include <iostream>  // defines cout
using namespace std;

int main()
{ const int N=5;
  for (int i=0; i < N; i++)
  { for (int j=0; j < N; j++)
    { for (int k=0; k < N; k++)
        if (i+j+k > N) goto esc;
        else cout << i+j+k << " ";
      cout << "* ";
    }
  esc: cout << "." << endl;  // inside the i loop, outside the j loop
  }
}
