//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.5 on page 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> strings;
typedef strings::iterator sit;
void load(strings&);
void print(strings);

int main()
{ strings v, w;
  load(v);
  w=v;
  sort(v.begin(),v.end());
  print(v);
  print(w);
}

void load(strings& v)
{ v.push_back("Japan");
  v.push_back("Italy");
  v.push_back("Spain");
  v.push_back("Egypt");
  v.push_back("Chile");
  v.push_back("Zaire");
  v.push_back("Nepal");
  v.push_back("Kenya");
}

void print(strings v)
{ for (sit it=v.begin(); it!=v.end(); it++)
    cout << *it << endl;
  cout << endl;
}
