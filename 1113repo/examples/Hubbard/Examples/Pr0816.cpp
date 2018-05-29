//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.16 on page 203
//  A strspn() function

#include <iostream>
using namespace std;

size_t Strspn(const char* s1, const char* s2);
// finds index of first character in s1 that is NOT in s2[]
// if each character of s1[] is in s2[], returns length of s1

void test(char* s1, char* s2);

int main()
{ test("ABCEFD","ABCD");
  test("ABCA","ABCD");
  
}

size_t Strspn(const char* s1, const char* s2)
{  const char *p1, *p2;
   for ( p1 = s1 ; *p1; p1++)
    for ( p2 = s2 ;  ; p2++ )
      if ( *p2 == '\0' )  // end of s2 reached; no match found
         return ( p1 - s1 ) ;  // so *p1 is not in s2[]
      else if ( *p1 == *p2 ) // *p1 is not the one
         break ;   // aborts inner for loop
   return ( p1 - s1 ) ;  // returning length of s1
}

void test(char* s1, char* s2)
{  size_t index = Strspn(s1,s2) ;
   cout << "Strspn(\"" << s1 << "\",\"" << s2 << "\") = "
        << index << endl;
}
