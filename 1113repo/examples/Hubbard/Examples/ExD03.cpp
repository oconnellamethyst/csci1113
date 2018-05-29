//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.3 on page 356
//  Using the insert() function on a vector object

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Vector;
typedef Vector::iterator It;
void print(const Vector&);

int main()
{ Vector v(4);
  for (int i=0; i<4; i++)
    v[i] = 222*i + 333;
  print(v);  
  It it = v.insert(v.begin()+2,666);
  print(v);
  cout << "*it=" << *it << "\n";
}

void print(const Vector& v)
{ cout << "size=" << v.size() << ": (" << v[0];
  for (int i=1; i<v.size(); i++)
    cout << "," << v[i];
  cout << ")\n";
}
