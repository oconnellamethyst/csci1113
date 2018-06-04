/*     FILE: computation2.c     */

/* Computes the cost per sq inch of pizza 
   
   Uses a float for price, to get dollars
   and cents.
                                           */

#include <stdio.h>

int main( )
{
  int diameter, radius, area, pricePerInch;
  float price;
  
  printf("What is the price of your pizza: ");
  scanf("%f", &price);
  
  printf("What is the diameter of your pizza: ");
  scanf("%d", &diameter);
  
  
  radius = diameter/2;
  area = 3.14159 * radius * radius;
  pricePerInch = price/area;
  
  printf("Pizza analysis:\n");
  printf("    diameter = %d\n", diameter);
  printf("      radius = %d\n", radius);
  printf("        area = %d\n", area);
  printf("       price = %d per sq. inch\n", pricePerInch);
  
  return 0;
}


/*    OUTPUT: computation2.c

	What is the price of your pizza: 10.50
	What is the diameter of your pizza: 14
	Pizza analysis:
	    diameter = 14
	      radius = 7
	        area = 153
	       price = 0 per sq. inch

*/
