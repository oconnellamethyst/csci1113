//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.1 on page 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void load(vector<string>&);
void print(vector<string>);
const int SIZE=8;

int main()
{ vector<string> v(SIZE);
  load(v);
  print(v);
}

void load(vector<string>& v)
{ v[0] = "Japan";
  v[1] = "Italy";
  v[2] = "Spain";
  v[3] = "Egypt";
  v[4] = "Chile";
  v[5] = "Zaire";
  v[6] = "Nepal";
  v[7] = "Kenya";
}

void print(vector<string> v)
{ for (int i=0; i<SIZE; i++)
    cout << v[i] << endl;
  cout << endl;
}
