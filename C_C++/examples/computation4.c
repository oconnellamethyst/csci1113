/*     FILE: computation4.c     */

/* Computes the cost per sq inch of pizza 
   
   A type cast.
                                           */

#include <stdio.h>

#define PI 3.14159

int main( )
{
  int diameter;
  float price, radius, area, pricePerInch;
  
  printf("What is the price of your pizza: ");
  scanf("%f", &price);
  
  printf("What is the diameter of your pizza: ");
  scanf("%d", &diameter);
  
  
  radius = (float)diameter/2;
  area = PI * radius * radius;
  pricePerInch = price/area;
  
  printf("Pizza analysis:\n");
  printf("    diameter = %d\n", diameter);
  printf("      radius = %f\n", radius);
  printf("        area = %f\n", area);
  printf("       price = %.2f per sq. inch\n", pricePerInch);
  
  return 0;
}


/*    OUTPUT: computation4.c

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
	      radius = 9.500000
	        area = 283.528503
	       price = 0.05 per sq. inch

*/
