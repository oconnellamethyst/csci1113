//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.6, page 319
//  An Array subclass template

#include <iostream>
#include "Vector.h"
using namespace std;

template<class T, class E>
class Array : public Vector<T>
{
public:
  Array(E last) : Vector<T>(unsigned(last) + 1) { }
  Array(const Array<T,E>&a) : Vector<T>(a) { }
  T& operator[](E index) const
  {
    return Vector<T>::operator[](unsigned(index));
  }
};

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main()
{
  Array<int, Days> customers(SAT);
  customers[MON] = 27;
  customers[TUE] = 23;
  customers[WED] = 20;
  customers[THU] = 23;  
  customers[FRI] = 36;
  customers[SAT] = customers[SUN] = 0;
  for (Days day = SUN; day ,+ SAT; day++)
    cout << customers[day] << "  ";
}
