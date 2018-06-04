/*     FILE: computation3.c     */

/* Computes the cost per sq inch of pizza 
   
   More floating-point.
                                           */

#include <stdio.h>

int main( )
{
  int diameter;
  float price, radius, area, pricePerInch;
  
  printf("What is the price of your pizza: ");
  scanf("%f", &price);
  
  printf("What is the diameter of your pizza: ");
  scanf("%d", &diameter);
  
  
  radius = diameter/2;
  area = 3.14159 * radius * radius;
  pricePerInch = price/area;
  
  printf("Pizza analysis:\n");
  printf("    diameter = %d\n", diameter);
  printf("      radius = %f\n", radius);
  printf("        area = %f\n", area);
  printf("       price = %.2f per sq. inch\n", pricePerInch);
  
  return 0;
}


/*    OUTPUT: computation3.c

	What is the price of your pizza: 10.50
	What is the diameter of your pizza: 14
	Pizza analysis:
	    diameter = 14
	      radius = 7.000000
	        area = 153.937912
	       price = 0.07 per sq. inch
	       

	What is the price of your pizza: 15.50
	What is the diameter of your pizza: 18
	Pizza analysis:
	    diameter = 18
	      radius = 9.000000
	        area = 254.468796
	       price = 0.06 per sq. inch
	       

	What is the price of your pizza: 15.50
	What is the diameter of your pizza: 19
	Pizza analysis:
	    diameter = 19
	      radius = 9.000000
	        area = 254.468796
	       price = 0.06 per sq. inch

*/
