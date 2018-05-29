//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.12(b), page 285
//  Memory Leaks

#include <iostream>
using namespace std;

class X
{
public:
  X() { p = new int[2]; cout << "X().  "; }
  virtual ~X() { delete [] p; cout << "~X().\n"; }
private:
  int* p;
};

class Y : public X
{
public:
  Y() { q = new int[1023]; cout << "Y():T::q = " << q << ".  "; }
  ~Y() { delete [] q; cout << "~Y().  "; }
private:
  int* q;
};

int main()
{
  for (int i = 0; i < 8; i++)
    {
      X* r = new Y;
      delete r;
    }
}
