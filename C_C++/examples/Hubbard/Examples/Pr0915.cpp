//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.15 on page 222
//  Verifying palindromes

#include <iostream>
using namespace std;
bool is_palindrome(string);
void test(string);

int main()
{ test("");
  test("A");
  test("AA");
  test("AB");
  test("ABA");
  test("ABB");
  test("Able was I ere I saw Elba.");
  test("ABLEWASIEREISAWELBA");
  test("Was it Eliot's toilet I saw?");
  test("WASITELIOTSTOILETISAW");
}

bool is_palindrome(string s)
{ int len = s.length();
  for (int i=0; i<len/2; i++)
    if (s[i] != s[len-i-1]) return false;
  return true;
}

void test(string s)
{ cout << "\"" << s << "\"";
  if (is_palindrome(s)) cout << " is a palindrome.\n";
  else cout << " is not a palindrome.\n";
}
