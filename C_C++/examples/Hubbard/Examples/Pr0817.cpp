//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.17 on page 203
//  A strcspn() function

#include <iostream>
using namespace std;

size_t Strcspn(const char* s1, const char* s2);
// finds index of first character in s1 that IS in s2[]
// if no character of s1[] is in s2[], returns length of s1

void test(char* s1, char* s2);

int main()
{ test("DABC","ABCD");
  test("XYZC","ABCD");
  test("XYZ","ABCD");
  
}

size_t Strcspn(const char* s1, const char* s2)
{  const char *p1, *p2;
   for ( p1 = s1 ; *p1; p1++)
    for ( p2 = s2 ; *p2 ; p2++ )
      if ( *p1 == *p2 )         // *p1 found in s2[]
         return ( p1 - s1 ) ;  // and p1-s1 is its index
   return ( p1 - s1 ) ;  // returning length of s1
}

void test(char* s1, char* s2)
{  size_t index = Strcspn(s1,s2) ;
   cout << "Strcspn(\"" << s1 << "\",\"" << s2 << "\") = "
        << index << endl;
}
