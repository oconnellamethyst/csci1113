/*     FILE: computation.c     */

/* Computes the cost per sq inch of pizza 
   -- inspired by pizza.c example in C
      Primer Plus by Prata                */

#include <stdio.h>

int main( )
{
  int diameter, radius, area, price, pricePerInch;

  printf("What is the price of your pizza: ");
  scanf("%d", &price);
  
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


/*    OUTPUT: computation.c

	What is the price of your pizza: 10.50
	What is the diameter of your pizza: 
	Pizza analysis:
	    diameter = 4206596
	      radius = 2103298
	        area = -2147483648
	       price = 0 per sq. inch
	       

	What is the price of your pizza: 10
	What is the diameter of your pizza: 14
	Pizza analysis:
	    diameter = 14
	      radius = 7
	        area = 153
	       price = 0 per sq. inch

*/
