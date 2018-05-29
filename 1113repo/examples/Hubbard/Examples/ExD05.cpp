//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.5 on page 358
//  Using some more generic algorithms on a vector object

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Vector;
typedef Vector::iterator It;
void print(const Vector&);

int main()
{ Vector v1(9);
  for (int i=0; i<9; i++)
    v1[i] = 111*i + 111;
  print(v1);
  Vector v2(9);
  print(v2);
  It p1=v1.begin(), p2=v2.begin();
  copy(p1+3,p1+8,p2+3);
  print(v2);
  It p = min_element(p1+4,p1+8);
  cout << "*p=" << *p << "\n";
  p = max_element(p1+4,p1+8);
  cout << "*p=" << *p << "\n";
  p = find(p1,p1+9,444);
  if (p != p1+9) cout << "*p=" << *p << "\n";
}

void print(const Vector& v)
{ cout << "size=" << v.size() << ": (" << v[0];
  for (int i=1; i<v.size(); i++)
    cout << "," << v[i];
  cout << ")\n";
}
