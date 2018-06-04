//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.18 on page 203
//  A strpbrk() function

#include <iostream>
using namespace std;

char* Strpbrk(const char* s1, const char* s2);
// finds ADDRESS of first character in s1 that IS in s2[]
// if no character of s1[] is in s2[], returns NULL

void test(char* s1, char* s2);

int main()
{ test("DABC","ABCD");
  test("XYZC","ABCD");
  test("XYZ","ABCD");
  
}

char* Strpbrk(const char* s1, const char* s2)
{  const char *p1, *p2;
   for ( p1 = s1 ; *p1; p1++)
    for ( p2 = s2 ; *p2 ; p2++ )
      if ( *p1 == *p2 )         // *p1 found in s2[]
         return (char*) p1 ;       // so returns its address
   return NULL ;  // no character of s1 is in s2[]
}

void test(char* s1, char* s2)
{  char* ptr = Strpbrk(s1,s2) ;
   cout << "Strpbrk(\"" << s1 << "\",\"" << s2 << "\") points to "; 
   if ( ptr )
     cout << "s1[" << ptr-s1 << "]" << endl;
   else
     cout << "NULL" << endl ;
}
