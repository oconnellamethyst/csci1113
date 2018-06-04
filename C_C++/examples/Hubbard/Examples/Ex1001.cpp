//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.1 on page 233
//  A Ratio class

#include <iostream>
using namespace std;

class Ratio
{ public:
    void assign(int, int);
    double convert();
    void invert();
    void print();
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

void Ratio::assign(int numerator, int denominator)
{ num = numerator;
  den = denominator;
}

double Ratio::convert()
{ return double(num)/den;
}

void Ratio::invert()
{ int temp = num;
  num = den;
  den = temp;
}

void Ratio::print()
{ cout << num << '/' << den;
}
