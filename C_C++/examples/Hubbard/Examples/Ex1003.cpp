//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.3 on page 235
//  A constructor for the Ratio class

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio(int n, int d) { num = n; den = d; }
    void print() { cout << num << '/' << den; }
  private:
    int num, den;
};

int main()
{ Ratio x(-1,3), y(22,7);
  cout << "x = ";
  x.print();
  cout << " and y = ";
  y.print();
}
