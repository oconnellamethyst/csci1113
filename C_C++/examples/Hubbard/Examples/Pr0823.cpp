//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.23 on page 203
//  Counting the words in a line of text

#include <iostream>
using namespace std;

int numWords(const char* s);

int main()
{ char *line = new char[81] ;
  cout << "Enter line of text below:" << endl ;
  cin.getline( line, 80 ) ;
  int count = numWords( line ) ;
  cout << "numWords(\"" << line << "\") = " << count << endl ;
  return 0 ;  
}

int numWords( const char* s)
{  if ( s == NULL ) return 0 ;
   int wordCount = 0 ;
   char * Copy = new char[ strlen(s) ] ;
   Copy = strcpy( Copy, s ) ;
   char * p = strtok( Copy, "\n \v\t\f\r" ) ;
   while ( p )    
   {  char ch0 = p[0];  // check whether first char is letter
      if ( ((ch0 >= 'a') && (ch0 <= 'z') ) ||   // lowercase
           ((ch0 >= 'A') && (ch0 <= 'Z') ) )    // uppercase
            wordCount++ ; 
      p = strtok( NULL, "\n \v\t\f\r" ) ;
   }    // end while (p)
   return wordCount ;
}
