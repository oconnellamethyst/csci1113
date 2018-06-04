//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.4 on page 357
//  Using some generic algorithms on a vector object

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Vector;
typedef Vector::iterator It;
void print(const Vector&);

int main()
{ Vector v(9);
  for (int i=0; i<9; i++)
    v[i] = 111*i + 111;
  print(v);
  It it=v.begin();
  fill(it+2,it+5,400);  // replaces v[2:5] with 400
  print(v);
  reverse(it+4,it+7);   //
  print(v);
  iter_swap(it+6,it+8);
  print(v);
  sort(it+4,it+9);
  print(v);
}

void print(const Vector& v)
{ cout << "size=" << v.size() << ": (" << v[0];
  for (int i=1; i<v.size(); i++)
    cout << "," << v[i];
  cout << ")\n";
}
