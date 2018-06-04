//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.2 on page 234
//  A self-contained Ratio class

#include <iostream>
using namespace std;

class Ratio
{ public:
    void assign(int n, int d) { num = n; den = d; }
    double convert() { return double(num)/den; }
    void invert() { int temp = num; num = den; den = temp; }
    void print() { cout << num << '/' << den; }
  private:
    int num, den;
};

int main()
{ Ratio x;
  x.assign(22,7);
  cout << "x = ";
  x.print();
  cout << " = " << x.convert() << endl;
  x.invert();
  cout << "1/x = ";  x.print();
  cout << endl;
}
