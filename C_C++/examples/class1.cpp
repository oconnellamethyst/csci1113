/*     FILE: class1.cpp     */

/*
   This is an attempt at a data type that functions
   like a complex number,  a + bi, where a is the real 
   part of the complex number and b is the real 
   component of the imaginary part of the complex
   number.
   
   We can create COMPLEX entities, initialize them, 
   print them and so far, even multiply them.  
   However, they still don't "look" or act exactly 
   like the C++ native data types. But they are 
   working.
*/

#include <iostream>
using namespace std;

struct COMPLEX{
   double Re;
   double Im;
};

COMPLEX Mult(const COMPLEX  & a, const COMPLEX & b);
void print(const COMPLEX  & c);
void init(COMPLEX &c, double r, double im);

int main( )
{
  COMPLEX c1, c2, cresult;

  init(c1,2,3);
  init(c2,2,3);

  cresult = Mult(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " * ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  return 0;
}

COMPLEX Mult(const COMPLEX  & a, const COMPLEX  & b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

void print(const COMPLEX  & c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}

void init(COMPLEX &c, double r, double im)
{
  c.Re = r;
  c.Im = im;
}


/*    OUTPUT: class1.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
