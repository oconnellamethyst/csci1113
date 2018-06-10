/*     FILE: assignment5oconnell.c     */

/*
   Gets the answer to the quadratic equation.
*/
#include <stdio.h>
#include <math.h>

int main( )
{
  int a, b, c; // Defines the values a, b, and c from the equation ax^2 + bx + c
  float x1, x2, i1, i2; // Defines answers, x1 and x2, and imaginary values i1 and i2

  printf("For the equation ax^2 + bx + c\n");
  printf("Enter an integer for a: "); // Gets the value of a
  scanf("%d", &a);
  printf("Enter an integer for b: "); // Gets the value of b
  scanf("%d", &b);
  printf("Enter an integer for c: "); // Gets the value of c
  scanf("%d", &c);
  
  // Cases determined by the determinant b^2 - 4ac
  
  if ((b*b) > (4*a*c)){ // If there are two real roots
    x1 = (-b + sqrt((float)(b*b)-(4*a*c)))/(2*a); // The full quadratic equation
    x2 = (-b - sqrt((float)(b*b)-(4*a*c)))/(2*a); // in all of it's quadratic equation glory
    printf("\nThe roots of the function are\n");
    printf("x1 = %#.4f\n",x1);
    printf("x2 = %#.4f\n",x2);
  }
  else if((b*b) == (4*a*c)){ // If there is one real root
    x1 = -(float)b/(2*a); // The sqrt(0) = 0 so most of the equation disappears!
    printf("\nThe root of the function is\n");
    printf("x1 = %.4f\n",x1);
  }
  else{ // If there are two imaginary roots
    x1 = x2 = -(float)b/(2*a); // The real part will be the same
    i1 = sqrt((float)(4*a*c)-(b*b))/(2*a); // To keep it real, the pieces of the determinant are reversed
    i2 = -i1; // The other imaginary part is always the inverse of the first imaginary part
    printf("\nThe roots of the function are\n");
    printf("x1 = %.4f%+.4fi\n",x1,i1);
    printf("x2 = %.4f%+.4fi\n",x2,i2);
  }
    
  return 0;
}


/*    OUTPUT: assignment5oconnell.c

Case 1:

  For the equation ax^2 + bx + c
  Enter an integer for a: 1
  Enter an integer for b: -1
  Enter an integer for c: -12

  The roots of the function are
  x1 = 4.0000
  x2 = -3.0000

Case 2:

  For the equation ax^2 + bx + c
  Enter an integer for a: -4
  Enter an integer for b: 12
  Enter an integer for c: -9

  The root of the function is
  x1 = 1.5000

Case 3:

  For the equation ax^2 + bx + c
  Enter an integer for a: 7
  Enter an integer for b: 6
  Enter an integer for c: 5

  The roots of the function are
  x1 = -0.4286+0.7284i
  x2 = -0.4286-0.7284i

*/
