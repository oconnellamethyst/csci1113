//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.7 on page 222
//  Changes to lower case

#include <fstream>
#include <iostream>
using namespace std;
void reduce(string&);

int main()
{ ifstream infile("Pr0907.in");
  string word;
  while (infile >> word)
  { reduce(word);
    cout << word << "\t";
  }
}

bool is_upper(char);
bool is_lower(char);
bool is_letter(char); 

void reduce(string& s)
{ while (s.length() > 0 && !is_letter(s[0]))
    s.erase(0, 1);
  int k = s.length() - 1;
  while (k > 0 && !is_letter(s[k--]))
    s.erase(k+1, 1);
  int len = s.length();
  if (len == 0) return;
  for (int i=0; i<len; i++)
    if (is_upper(s[i])) s[i] += 'a' - 'A';
}

bool is_upper(char c)
{ return bool(c >= 'A' && c <= 'Z');
} 

bool is_lower(char c)
{ return bool(c >= 'a' && c <= 'z');
} 

bool is_letter(char c)
{ return bool(is_upper(c) || is_lower(c));
} 
