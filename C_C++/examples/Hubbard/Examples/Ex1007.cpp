//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.7 on page 238
//  Access functions

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio(int n=0, int d=1) : num(n), den(d) { }
    int numerator() const { return num; }
    int denominator() const { return den; }
  private:
    int num, den;
};

int main()
{ Ratio x(22,7);
  cout << x.numerator() << '/' << x.denominator() << endl;
}
