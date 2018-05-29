//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.7 on page 218
//  Merging two sorted data files

#include <fstream>
#include <iostream>
using namespace std;

bool more(ifstream&,int&);
bool copy(ofstream&,ifstream&,int&);

int main()
{ ifstream fin1("north.dat");
  ifstream fin2("south.dat");
  ofstream fout("combined.dat");
  int n1, n2;
  bool more1 = more(fin1, n1);
  bool more2 = more(fin2, n2);
  while (more1 && more2)
    if (n1 < n2) more1 = copy(fout, fin1, n1);
    else more2 = copy(fout, fin2, n2);
  while (more1)
    more1 = copy(fout, fin1, n1);
  while (more2)
    more2 = copy(fout, fin2, n2);
  fout << endl;
}

bool more(ifstream& fin, int& n)
{ if (fin >> n) return true;
  else return false;
}

bool copy(ofstream& fout, ifstream& fin, int& n)
{ fout << " " << n;
  return more(fin, n);
}
