//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 14.4 on page 333
//  Conversion functions

#include <iostream>
using namespace std;

typedef vector<int> BinaryCode ;
typedef BinaryCode::iterator BCIterator  ;


int unsignedValue( BinaryCode bc ) ;
// example if bc has these bit values 1 0 1 0 1 
//    unsignedValue( bc ) returns 21

BinaryCode getUnsignedCode( unsigned n ) ;
// returns shortest possible code for n
// example:  if n = 15 returns the vector with elements 1 1 1 1

int signedValue ( BinaryCode bc ) ;
// example if bc has these bit values  1 0 1 1 1 0
//    signedValue( bc ) returns -30

BinaryCode getSignedCode( int n ) ;
// returns shortest possible twosComplement code for n
// example: if n = 15 returns the vector with elements 0 1 1 1 1
//          if n = -15   "     "    "     "     "      1 0 0 0 1

void print( BinaryCode bc );

void testUnsigned() ;
void testSigned() ;

int main()
{ testUnsigned() ; 
  testSigned() ;
  return 0 ;
}   // end main()


void testUnsigned() 
{ BinaryCode bc ;
  for ( unsigned n = 0 ; n <= 11 ; n++ )
  {  bc  = getUnsignedCode( n ) ;
     print( bc ) ;
     cout << "  has unsigned value " << unsignedValue( bc ) 
          << " and signed value " << signedValue( bc ) << endl ;
  }  // end for
}      // end testUnsigned()

int unsignedValue( BinaryCode bc ) 
{   int value = 0 ;
    for ( BCIterator bcIt = bc.begin() ; bcIt != bc.end() ; bcIt++ )
      value = value * 2 + *bcIt ;
    return value ;
}    // end unsignedValue( bc )

BinaryCode getUnsignedCode( unsigned n ) 
{ BinaryCode answer ;
  answer.push_back( n%2 ) ;  // start with least sig bit
  n = n / 2 ;
  while ( n > 0 ) 
  { BCIterator bcIt = answer.begin() ;
    answer.insert( bcIt , n % 2 ) ;
    n = n / 2 ;
  }    // end while (n>0)
  return answer ;
}    // end getUnsignedCode( n )

void print( BinaryCode bc )
{ for ( BCIterator bcIt = bc.begin() ; bcIt != bc.end() ; bcIt++ )
    cout << *bcIt << ' ' ;
}   // end print(  bc )

int signedValue( BinaryCode bc ) 
{   int uvalue = unsignedValue( bc ) ;
    if ( *bc.begin() == 0 ) return uvalue ;  // not negative
    int modulus = (int) pow( 2 , bc.size() ) ;
    return uvalue - modulus ;
}    // end signedValue()

BinaryCode getSignedCode( int n )
{  BinaryCode answer ;
   if ( n >= 0 )   // n not negative
   {  answer = getUnsignedCode( n ) ;
      BCIterator bcIt = answer.begin() ;
      answer.insert( bcIt , 0 ) ;  // insert leading bit 0 at beginning
   }   // end n not negative
   else              // n is negative
   {  int posN = -n ;
      int modulus = 2 ;
      while ( posN > 0 )  // build modulus
      { posN /= 2 ;
        modulus *= 2 ;
      }                // end build modulus  
      answer = getUnsignedCode( modulus + n ) ;      
   }            // end n is negative
   return answer ;
}    // end getSignedCode( n )
 
void testSigned() 
{  BinaryCode bcPos ;
   BinaryCode bcNeg ;
   for ( int n = 1 ; n <= 12 ; n++ )
   {   bcPos = getSignedCode(  n ) ;
       bcNeg = getSignedCode( -n ) ;
       int decodePos = signedValue( bcPos ) ;
       int decodeNeg = signedValue( bcNeg ) ;
       cout << decodePos << ": " ;
       print( bcPos ) ; 
       cout << "\tvs\t\t" << decodeNeg << ": ";
       print( bcNeg ) ; 
       cout << endl ;  
   }    // end for
}     // end testSigned()
