//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.4 on page 202
//  A pluralize() function

#include <iostream>
using namespace std;
void pluralize(char*);

int main()
{ char word[80];
  for (;;)
  { cin.getline(word, 80);
    if (*word == ' ') break;
    cout << "\tThe singular is [" << word << "].\n";
    pluralize(word);
    cout << "\t  The plural is [" << word << "].\n";
  }
}

bool isvowel(char);

void pluralize(char* s)
{ int len = strlen(s);
  char* p = s + len - 1;    // last letter
  char* q = s + len - 2;    // last 2 letters
  if (*p == 'h' && (*q == 'c' || *q == 's')) strcat(p, "es\0");
  else if (*p == 's') strcat(p, "es\0");
  else if (*p == 'y')
    if (isvowel(*q)) strcat(p, "s\0");
    else strcpy(p, "ies\0");
  else if (*p == 'z')
    if (isvowel(*q)) strcat(p, "zes\0");
    else strcat(p, "es\0");
  else strcat(p, "s\0");
}

bool isvowel(char c)
{ return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
