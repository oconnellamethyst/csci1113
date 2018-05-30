/*     FILE: scan.c     */

/*
   Illustration of scanf( ).
*/
#include <stdio.h>

int main( )
{
  
  long a, b, c, d, e, f; // Defines all the longs
  double g, h, i, j, k, l; // and all the doubles
  
  printf("Longs:\n"); // What's in the shady boxes that we got from... somewhere?
  printf("a = %ld, b = %ld, c = %ld, d = %ld, e = %ld, f = %ld \n", a,b,c,d,e,f);
  printf("Doubles:\n");
  printf("g = %lf, h = %lf, i = %lf, j = %lf, k = %lf, l = %lf \n\n", g,h,i,j,k,l);

  printf("Enter a long value for a: "); // Takes new values for the longs
  scanf("%ld", &a);
  printf("Enter a long value for b: ");
  scanf("%ld", &b);
  printf("Enter a long value for c: ");
  scanf("%ld", &c);
  printf("Enter a long value for d: ");
  scanf("%ld", &d);
  printf("Enter a long value for e: ");
  scanf("%ld", &e);
  printf("Enter a long value for f: ");
  scanf("%ld", &f);

  printf("Enter a double value for g: "); // Takes new values for the doubles
  scanf("%lf", &g);
  printf("Enter a double value for h: ");
  scanf("%lf", &h);
  printf("Enter a double value for i: ");
  scanf("%lf", &i);
  printf("Enter a double value for j: ");
  scanf("%lf", &j);
  printf("Enter a double value for k: ");
  scanf("%lf", &k);
  printf("Enter a double value for l: ");
  scanf("%lf", &l);
  
  printf("\nLongs:\n");
  printf("a = %ld, b = %ld, c = %ld, d = %ld, e = %ld, f = %ld \n", a,b,c,d,e,f); //Shows you the new values
  printf("Doubles:\n");
  printf("g = %lf, h = %lf, i = %lf, j = %lf, k = %lf, l = %lf \n", g,h,i,j,k,l);

  return 0;
}


/*    OUTPUT: scan.c

	Longs:
	a = 0, b = 106, c = 0, d = 106, e = 0, f = 4204345
	Doubles:
	g = 0.000000, h = 0.000000, i = -1.#QNAN0, j = 0.000000, k = 0.000000, l = 0.000000
	
	Enter a long value for a: 5
	Enter a long value for b: 5
	Enter a long value for c: 5
	Enter a long value for d: 5
	Enter a long value for e: 5
	Enter a long value for f: 5
	Enter a double value for g: 5
	Enter a double value for h: 5.5
	Enter a double value for i: 5.5
	Enter a double value for j: 5.5
	Enter a double value for k: 5.5
	Enter a double value for l: 5.5
	
	Longs:
	a = 5, b = 5, c = 5, d = 5, e = 5, f = 5
	Doubles:
	g = 5.000000, h = 5.500000, i = 5.500000, j = 5.500000, k = 5.500000, l = 5.500000

*/
