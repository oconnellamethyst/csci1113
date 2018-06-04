//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.6 on page 237
//  Default parameter values

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio(int n=0, int d=1) : num(n), den(d) { }
    void print() { cout << num << '/' << den; }
  private:
    int num, den;
};

int main()
{ Ratio x, y(4), z(22,7);
  cout << "x = ";
  x.print();
  cout << "\ny = ";
  y.print();
  cout << "\nz = ";
  z.print();
}
