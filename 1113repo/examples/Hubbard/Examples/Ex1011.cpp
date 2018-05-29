//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.11 on page 242
//  A destructor

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio() { cout << "OBJECT IS BORN.\n"; }
    ~Ratio()  { cout << "OBJECT DIES.\n"; }
  private:
    int num, den;
};

int main()
{ { Ratio x;                     // beginning of scope for x
    cout << "Now x is alive.\n";
  }                                   // end of scope for x
  cout << "Now between blocks.\n";
  { Ratio y;
    cout << "Now y is alive.\n";
  }
}
