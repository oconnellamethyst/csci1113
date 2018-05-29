//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.23 on page 378
//  Testing the lexicographical_compare() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void test(char*,int,char*,int);

int main()
{ char* s1="COMPUTER";
  char* s2="COMPUTABLE";
  char* s3="COMPUTE";
  test(s1,3,s2,3); 
  test(s1,8,s2,10); 
  test(s1,8,s3,7); 
  test(s2,10,s3,7); 
  test(s1,7,s3,7); 
}

char* sub(char*,int);

void test(char* s1, int n1, char* s2, int n2)
{ bool lt=lexicographical_compare(s1,s1+n1,s2,s2+n2);
  bool gt=lexicographical_compare(s2,s2+n2,s1,s1+n1);
  if (lt) cout << sub(s1,n1) << " < " << sub(s2,n2) << "\n";
  else if (gt) cout << sub(s1,n1) << " > " << sub(s2,n2) << "\n";
  else cout << sub(s1,n1) << " == " << sub(s2,n2) << "\n";  
}

char* sub(char* s, int n)
{ char* buffer = new char(n+1);
  strncpy(buffer,s,n);
  buffer[n] = 0;
  return buffer;
}
