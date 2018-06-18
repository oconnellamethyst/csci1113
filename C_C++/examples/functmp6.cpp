/*     FILE: functmp6.cpp     */

/*
   Overloaded print( ) method.
*/

// Errors: What's wrong?
// - value parameters that are numeric constants are not
//   ... alterable storage.
// - Compiler cannot determine how to insert our COMPLEX 
//   ... into an output stream. A "specialized" template can be defined. 

#include <iostream>
using namespace std;

template <class t>
void print(const t &value);

struct COMPLEX{
   float Re;
   float Im;
};

template <> void print<COMPLEX>(const COMPLEX &c);

COMPLEX Mult(COMPLEX a, COMPLEX b);

int main( )
{
  COMPLEX c1, c2, cresult;

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

template <class t>
void print(const t &value)
{
  cout << value;
}

template <> void print<COMPLEX>(const COMPLEX &c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}


/*    OUTPUT: functmp6.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)
	Float example:
	Result of 4.5 * 3 = 13.5

*/
