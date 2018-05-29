//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.5 on page 217
//  Using the standard C++ string type

#include <iostream>
using namespace std;

bool is_vowel(char);

int main()
{ string word;
  int k;
  while (cin >> word)
  { k = word.find("t") + 1;
    if (k < word.length() && is_vowel(word[k]))
      word.replace(k, 0, "eg");
    cout << word << ' ';
  }
}

bool is_vowel(char c)
{ return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
