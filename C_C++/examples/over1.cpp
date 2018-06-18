/*     FILE: over1.cpp     */

/*  Overloads a method named print( ).
    Print can be called for several different
    data types.
    Also creates a data type to model a complex number.
*/
#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Mult(COMPLEX a, COMPLEX b);
void print(COMPLEX c);
void print(char *str);
void print(float f);
 
int main( )
{
  COMPLEX c1, c2, cresult;	// Note: struct keyword not required

  c1.Re = 2;
  c1.Im = 3;

  c2.Re = 2;
  c2.Im = 3;

  cresult = Mult(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " * ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  print("Float example:");
  cout << endl;
  cout << "Result of ";
  print(4.5);
  cout << " * ";
  print(3);
  cout << " = ";
  print(4.5 * 3);
  cout << endl;
 
  return 0;
}
 
COMPLEX Mult(COMPLEX a, COMPLEX b)
{
  COMPLEX result;
 
  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;
 
  return result;
}
 
void print(COMPLEX c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}
 
void print(char *str)
{
  cout << str ;
}
 
void print(float f)
{
  cout << f ;
}


/*    OUTPUT: over1.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)
	Float example:
	Result of 4.5 * 3 = 13.5

*/
