//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.16 on page 222
//  Merging sorted files

#include <fstream>
#include <iostream>
using namespace std;
bool more(ifstream&,string&);
bool copy(ofstream&,ifstream&,string&);

int main()
{ ifstream fin1("Democrats.dat");
  ifstream fin2("Republicans.dat");
  ofstream fout("Presidents.dat");
  string s1, s2;
  bool more1 = more(fin1, s1);
  bool more2 = more(fin2, s2);
  while (more1 && more2)
    if (s1 < s2) more1 = copy(fout, fin1, s1);
    else more2 = copy(fout, fin2, s2);
  while (more1)
    more1 = copy(fout, fin1, s1);
  while (more2)
    more2 = copy(fout, fin2, s2);
  fout << endl;
}

bool more(ifstream& fin, string& s)
{ if (getline(fin, s)) return true;
  else return false;
}

bool copy(ofstream& fout, ifstream& fin, string& s)
{ fout << s << endl;
  cout << s << endl;
  return more(fin,s);
}
