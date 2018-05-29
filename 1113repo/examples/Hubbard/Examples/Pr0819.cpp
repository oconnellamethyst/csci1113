//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.19 on page 203
//  A word frequency function

#include <iostream>
using namespace std;

int freqInWords(const char* sentence, char ch);
// returns number of words in sentence that contain ch

void  test(const char* sentence, char  ch);

int main()
{ char s[] = "I like nice voices but not nose vices.";
  test(s,'e');
  test(s,'i');
  test(s,'o');
}

int freqInWords(const char* sentence, char ch)
{  int count = 0 ;
   char* Copy = new char[strlen(sentence)];
   Copy = strcpy(Copy,sentence) ;  
   if (Copy == NULL)  return 0 ;
   char *p = strtok(Copy, "\t\n \v\f\r" ) ;
   while (p) {
     for ( int i = 0  ; p[i]  ; i++ )
       if (p[i] == ch)    // ch found in current word
       { count++ ;        // referenced by p
         break   ;        // finished with current word
       }
     p = strtok(NULL, "\t\n \v\f\r"  );  // advance to next word
   }
   return count ;
}

void test(const char* sentence, char  ch)
{  int frequency = freqInWords(sentence, ch) ;
   cout << "freqInWords(\"" << sentence << "\",'" << ch
        << "') = " << frequency << endl;
}
