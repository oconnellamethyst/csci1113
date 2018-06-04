//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.1 on page 

#include <iomanip>
#include <iostream>
using namespace std;

typedef vector<string> strings;

void print(strings);

int main()
{ strings eu;
  eu.push_back("Germany");
  eu.push_back("United Kingdom");
  eu.push_back("France");
  eu.push_back("Italy");
  eu.push_back("Spain");
  print(eu);
  strings v=eu;
  sort(v.begin(),v.end());
  print(v);
  strings::iterator it=v.begin();
  ++it;
  ++it;
  it = v.insert(it,"Greece");
  ++it;
  ++it;
  v.insert(it,"Netherlands");
  print(v);
  print(eu);
}

void print(strings v)
{ cout.setf(ios::left);
  cout << endl;
  for (int i=0; i<v.size(); i++)
    cout << i+1 << ". " << setw(16) << v[i] << endl;
}
