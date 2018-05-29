//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.9 on page 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> strings;
typedef strings::iterator sit;
void load(strings&);
void print(strings);

int main()
{ strings v;
  load(v);
  print(v);
  sit egypt=find(v.begin(),v.end(),"Egypt");
  sit malta=find(v.begin(),v.end(),"Malta");
  sort(egypt,malta);
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
  v.push_back("India");
  v.push_back("China");
  v.push_back("Malta");
  v.push_back("Syria");
}

void print(strings v)
{ for (sit it=v.begin(); it!=v.end(); it++)
    cout << *it << endl;
  cout << endl;
}
