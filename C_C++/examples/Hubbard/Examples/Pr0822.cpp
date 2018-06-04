//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.22 on page 203
//  Removing all blanks from a line of text

#include <iostream>
using namespace std;

void removeBlanks(char* s);
// example                if s = "I like movies and so does Mary"
//  removeBlanks(s) changes s to "IlikemoviesandsodoesMary"

int main()
{ char *line = new char[81] ;
  cout << "Enter line of text below:" << endl ;
  cin.getline( line, 80 ) ;
  cout << "Before removeBlanks(line), line:\n\"" << line << '\"' << endl ;
  removeBlanks( line ) ;
  cout << "After removeBlanks(line), line:\n\"" << line << '\"' << endl ;
  return 0 ;  
}

void removeBlanks( char* s)
{  if ( s == NULL ) return ;
   int j = 0 ;
   for ( int i = 0; s[i] ; i++ )
      if ( s[i] != ' ' ) 
        s[j++] = s[i] ;
   s[j] = '\0' ;
}
