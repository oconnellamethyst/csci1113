//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.8 on page 222
//  Counting word frequencies

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
void reduce(string&);

int main()
{ ifstream in("Pr0907.in");
  string s;
  const int SIZE=1000;     // assume at most 1000 different words
  string word[SIZE];                          // holds words read
  int lines=0, words=0, n=0, freq[SIZE]={0}, i;
  char c;
  while (in >> s)
  { reduce(s);
    if (s.length() == 0) continue;
    ++words;
    in.get(c);
    if (c == '\n') ++lines;                         // count line
    for (i=0; i<n; i++)
      if (word[i] == s) break;
    if (i == n) word[n++] = s;                // add word to list
    ++freq[i];                                      // count word
  }
  cout << "The input had " << lines << " lines and " << words
       << " words,\nwith the following frequencies:\n";
  for (int i=0; i<n; i++)
  { s = word[i];
    if (i > 0 && i%3 == 0) cout << endl;      // print 3 to a line
    cout << setw(16) << setiosflags(ios::right) 
         << s.c_str() << ": " << setw(2) << freq[i];
  }
  cout << endl;
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
