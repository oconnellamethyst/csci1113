//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.2 on page 356
//  Using a reverse iterator on a vector object

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int>::reverse_iterator RIt;

int main()
{ vector<int> v(4);
  for (int i=0; i<4; i++)
    v[i] = 222*i + 333;
  cout << "Using the reverse iterator rit in a for loop:\n";
  for (RIt rit=v.rbegin(); rit!=v.rend(); rit++)
    cout << "\t*rit=" << *rit << "\n";
  cout << "Using the reverse iterator rp in a while loop:\n";
  RIt rp=v.rbegin();
  while(rp!=v.rend())
    cout << "\t*rp++=" << *rp++ << "\n";
}
