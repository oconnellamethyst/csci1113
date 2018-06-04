//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.6, page 308
//  A Matrix Class Template

#include <iostream>
using namespace std;
#include "Vector.h"

template<class T>
class Matrix
{
public:
  Matrix(unsigned r=1, unsigned c=1) : row(r)
  {
    for (int i = 0; i < r; i++)
      row[i] = new Vector<T>(c); 
  }
  ~Matrix() { for (int i=0; i < row.size(); i++) delete row[i]; }
  Vector<T>& operator[](unsigned i) const { return *row[i]; }
  unsigned rows() { return row.size(); }
  unsigned columns() { return row[0]->size(); }
protected:
  Vector<Vector<T>*> row;
};

int main()
{
  Matrix<float> a(2,3);
  a[0][0] = 0.0; a[0][1] = 0.1; a[0][2] = 0.2;
  a[1][0] = 1.0; a[1][1] = 1.1; a[1][2] = 1.2;
  cout << "The matrix a has " << a.rows()
       << " rows and " << a.columns() << " columns.\n";
  for (int i=0; i<2; i++)  
    {
    for (int j=0; j<3; j++)
      cout << a[i][j] << " ";
    cout << endl;
    }
}
