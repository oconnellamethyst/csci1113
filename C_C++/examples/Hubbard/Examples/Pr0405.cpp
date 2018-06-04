//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.5 on page 81

#include <iostream>
using namespace std;

int main()
{ for (int i=0; i < 8; i++)
  { if (i%2 == 0) cout << i + 1 << endl;
    else if (i%3 == 0) continue;
    else if (i%5 == 0) break;
    cout << "End of program.\n";
  }
  cout << "End of program.\n";
}
