//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 14.2 on page 333
//  A remove_duplicates() function for vectors

#include <iostream>
#include <iostream>
#include <typeinfo>
using namespace std;
typedef vector<int> Ints;
typedef Ints::iterator Iit;

void remove_duplicates(Ints& v);
void print(Ints v);

int main()
{ int a[]={4,7,3,4,8,5,0,9,6,7,4,2,3,1,2,5,6,3,4,2,2,6,0,9,1,5,4,1,4,6,7,4};
  Ints v(a,a+32);
  print(v);
  remove_duplicates(v);
  print(v);
}

void remove_duplicates(Ints& v)
{ for (Iit it=v.begin()+1; it!=v.end(); )
  { Iit jt=find(v.begin(),it,*it);
    if (jt == it) ++it;
    else it = v.erase(it);
  }
}

void print(Ints v)
{ for (Iit it=v.begin(); it!=v.end(); it++)
    cout << *it << " ";
  cout << endl;
}
