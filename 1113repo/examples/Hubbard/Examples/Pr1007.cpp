//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.7 on page 249
//  A Matrix class

#include <iostream>
using namespace std;

class Matrix
{ public:
    Matrix(double a=0, double b=0, double c=0, double d=0 )
       : a_(a), b_(b), c_(c), d_(d) { }
    Matrix(const Matrix& m) : a_(m.a_), b_(m.b_), c_(m.c_), d_(m.d_)  { }
    double det() { return a_*d_ - b_*c_; }
    int isSingular() { return det() == 0; }
    Matrix inverse();
    void print();
  private:
    double a_, b_, c_, d_;
};

int main()
{ Matrix m(2,-5,1,-3);
  m.print();
  cout << "m.det() = " << m.det() << endl;
  Matrix mm = m.inverse();
  mm.print();
}

Matrix Matrix::inverse()
{ double k = 1/det(); 
  Matrix temp(k*d_,-k*b_,-k*c_,k*a_);
  return temp;
}

void Matrix::print()
{ cout << a_ << "  " << b_ << '\n' << c_ << "  " << d_ << "\n";
}
