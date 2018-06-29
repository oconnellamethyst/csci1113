/*     FILE: assignment7oconnell.cpp     */

/*
   Program for doing complex math.
   
   based on const4.cpp
*/

#include <iostream>
using namespace std;

class COMPLEX{ 
  friend ostream& operator<<(ostream& ostr, const COMPLEX&);
  
  friend COMPLEX operator*(const double &x, const COMPLEX & b);
  friend COMPLEX operator+(const double &x, const COMPLEX & b);
  friend COMPLEX operator-(const double &x, const COMPLEX & b);
  friend COMPLEX operator/(const double &x, const COMPLEX & b);
  
  double Re;
  double Im;
public:
  const COMPLEX operator*(const COMPLEX & b);
  const COMPLEX operator+(const COMPLEX & b);
  const COMPLEX operator-(const COMPLEX & b);
  const COMPLEX operator/(const COMPLEX & b);
  
  const COMPLEX operator*(const double &x);
  const COMPLEX operator+(const double &x);
  const COMPLEX operator-(const double &x);
  const COMPLEX operator/(const double &x);
  
  static const COMPLEX creator();
  
  COMPLEX(double r=0, double im=0) : Re(r) , Im(im) {} // Constructor that defaults to zeroes
};

/* You could say there's... a method to the madness? */

const COMPLEX COMPLEX::creator(){ // Method that creates complexes
  COMPLEX result(0,0);
  cout << "Type the real part of your number" << endl;
  cin >> result.Re;
  cout << "Type the imaginary part of your number" << endl;
  cin >> result.Im;
  return result;
}

const COMPLEX COMPLEX::operator*(const COMPLEX & b) // Multiplying method
{
  COMPLEX result(0,0);

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

const COMPLEX COMPLEX::operator+(const COMPLEX & b) // Adding method
{
  COMPLEX result(0,0);

  result.Re = Re+b.Re;
  result.Im = Im+b.Im;

  return result;
}

const COMPLEX COMPLEX::operator-(const COMPLEX & b) //Subtracting method
{
  COMPLEX result(0,0);

  result.Re = Re-b.Re;
  result.Im = Im-b.Im;

  return result;
}

const COMPLEX COMPLEX::operator/(const COMPLEX & b) // Dividing method
{
  COMPLEX result(0,0); 

  result.Re = ((Re*b.Re)+(Im*b.Im))/((b.Re*b.Re)+(b.Im*b.Im));
  result.Im = ((Im*b.Re)+(Re*b.Im))/((b.Re*b.Re)+(b.Im*b.Im));

  return result;
}


COMPLEX operator*(const double &x, const COMPLEX &b) // Multiplying w/ doubles
{
  COMPLEX result(0,0); 

  result.Re = (b.Re*x);
  result.Im = (b.Im*x);

  return result;
}

COMPLEX operator+(const double &x, const COMPLEX &b) // Adding with doubles
{
  COMPLEX result(0,0); 

  result.Re = b.Re + x;
  result.Im = b.Im;

  return result;
}

COMPLEX operator/(const double &x, const COMPLEX &b) // Dividing with doubles
{
  COMPLEX result(0,0); 

  result.Re = (x*b.Re)/((b.Re*b.Re)+(b.Im*b.Im)); //(ac)/(cc+dd)
  result.Im = (-x*b.Im)/((b.Re*b.Re)+(b.Im*b.Im)); //(-ad)/(cc+dd)

  return result;
}

COMPLEX operator-(const double &x, const COMPLEX &b) // Subtracting with doubles
{
  COMPLEX result(0,0);

  result.Re = x-b.Re;
  result.Im = -b.Im;

  return result;
}

const COMPLEX COMPLEX::operator*(const double &x) // * w/ D
{
  COMPLEX result(0,0); 

  result.Re = (Re*x);
  result.Im = (Im*x);

  return result;
}

const COMPLEX COMPLEX::operator+(const double &x) // + w/ D
{
  COMPLEX result(0,0); 

  result.Re = Re + x;
  result.Im = Im;

  return result;
}

const COMPLEX COMPLEX::operator-(const double &x) // - w/ D
{
  COMPLEX result(0,0);

  result.Re = Re-x;
  result.Im = Im;

  return result;
}

const COMPLEX COMPLEX::operator/(const double &x) // / w/ D
{
  COMPLEX result(0,0); 

  result.Re = (Re)/(x);  //(ac)/(cc)
  result.Im = (Im)/(x);  //(bc)/(cc)

  return result;
}

ostream& operator<<(ostream& ostr, const COMPLEX & comp)
{
  return ostr << "(" << comp.Re << " + " << comp.Im << "i)" ;
}

int main( )
{
  COMPLEX result;
  COMPLEX one, two;
  double three;
  
  one = COMPLEX::creator();
  two = COMPLEX::creator();
  cout << "Give me a number" << endl;
  cin >> three;

  result = one + two;
  cout << "Result of " << one << " + " << two << " = " << result << endl;
  result = one - two;
  cout << "Result of " << one << " - " << two << " = " << result << endl;
  result = one * two;
  cout << "Result of " << one << " * " << two << " = " << result << endl;
  result = one / two;
  cout << "Result of " << one << " / " << two << " = " << result << endl;
  
  result = one + three;
  cout << "Result of " << one << " + " << three << " = " << result << endl;
  result = one - three;
  cout << "Result of " << one << " - " << three << " = " << result << endl;
  result = one * three;
  cout << "Result of " << one << " * " << three << " = " << result << endl;
  result = one / three;
  cout << "Result of " << one << " / " << three << " = " << result << endl;
  
  result = three + two;
  cout << "Result of " << three << " + " << two << " = " << result << endl;
  result = three - two;
  cout << "Result of " << three << " - " << two << " = " << result << endl;
  result = three * two;
  cout << "Result of " << three << " * " << two << " = " << result << endl;
  result = three / two;
  cout << "Result of " << three << " / " << two << " = " << result << endl;

  return 0;
}


/*    OUTPUT: assignment7oconnell.cpp

  Type the real part of your number
  1
  Type the imaginary part of your number
  2
  Type the real part of your number
  3
  Type the imaginary part of your number
  4
  Give me a number
  5
  Result of (1 + 2i) + (3 + 4i) = (4 + 6i)
  Result of (1 + 2i) - (3 + 4i) = (-2 + -2i)
  Result of (1 + 2i) * (3 + 4i) = (-5 + 10i)
  Result of (1 + 2i) / (3 + 4i) = (0.44 + 0.4i)
  Result of (1 + 2i) + 5 = (6 + 2i)
  Result of (1 + 2i) - 5 = (-4 + 2i)
  Result of (1 + 2i) * 5 = (5 + 10i)
  Result of (1 + 2i) / 5 = (0.2 + 0.4i)
  Result of 5 + (3 + 4i) = (8 + 4i)
  Result of 5 - (3 + 4i) = (2 + -4i)
  Result of 5 * (3 + 4i) = (15 + 20i)
  Result of 5 / (3 + 4i) = (0.6 + -0.8i)

*/
