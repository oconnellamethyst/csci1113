//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.24 on page 203
//  Reversing the words in a line of text

#include <iostream>
using namespace std;

char*  addWords( char* leftPLUSright, const char* left, const char* right ) ;
// preconditions: all pointers are nonNULL
//    length of leftPLUSright >= sum of lengths of left & right + 1
// examples: for left = "make" and right = "happy" returns leftPLUSright = "make fun"
//           for left = ""     and right = "make"  returns leftPLUSright = "make"
//           for left = "make" ane right = ""      returns leftPLUSright = "make"

char*  reverseWords(char* reverseS, const char* s);
//precondition: reverseS has allocated space >= length of s
//example: for s = "I like movies" returns reverseS="movies I like"
// if reverseS or s is NULL returns NULL

int main()
{ char * origLine = new char[81] ;
  char * reverseLine = new char[81] ;
  cout << "Enter line of text below:" << endl ;
  cin.getline( origLine, 80 ) ;
  reverseLine = reverseWords(reverseLine, origLine ) ; 
  cout << " original line : \"" << origLine << '\"' << endl ;
  cout << "words reversed : \"" << reverseLine << '\"' << endl ;
  return 0 ;  
}

char*  reverseWords(char* reverseS, const char* s)
{  if ( (reverseS == NULL) || (s == NULL) ) return NULL;
   char * Copy  = new char[ strlen(s) ] ;
   Copy = strcpy( Copy , s ) ;
   char * currentReverse = new char[ strlen(s) ] ;  
   char * revPtr = reverseS ;
   *revPtr = '\0' ;  // reverse starts with no words
   char * pS;
   pS = strtok(Copy, " \t" ) ;  // words separated by space or tab
   while ( pS ) 
   {  // reverseS = currentWordInS + currentReverse 
      currentReverse = strcpy( currentReverse, revPtr ) ; 
      revPtr = addWords( revPtr, pS, currentReverse ) ;
      pS = strtok( NULL, " \t" ) ;  // advance pS to next word in s
   }    // end while (pS)
   return revPtr ;
}

char*  addWords( char* leftPLUSright, const char* left, const char* right ) 
{    char * both = leftPLUSright ;
     const char * pLeft = left ;
     const char * pRight = right ;
     while ( *pLeft )
        *(both++) = *(pLeft++) ;
     if ( *left && *right )  // both words nonempty
        *(both++) = ' ' ;    // so put space between
     while ( *pRight )
        *(both++) = *(pRight++) ;
     *both = '\0' ;    // terminate new string with null character
     return leftPLUSright ;
}
