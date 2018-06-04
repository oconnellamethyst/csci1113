//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.2 on page 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> strings;
void load(strings&);
void print(strings);

int main()
{ strings v;
  load(v);
  print(v);
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
{ for (int i=0; i<v.size(); i++)
    cout << v[i] << endl;
  cout << endl;
}
