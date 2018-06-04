/*     FILE: aFunction.c     */

/* Computes the cost per sq inch of pizza 
   
   A function example. No parameters, no 
   return value.
                                           */

#include <stdio.h>
#define PI 3.14159

void instructions(void);   /* Function prototype */

int main( )
{
  int diameter;
  float price, radius, area, pricePerInch;
  
  instructions( );  /* Call the instructions( )
                                 ... function         */
  
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

void instructions(void)   /* Function definition */
{
  printf("This program will compute the price per \n"); 
  printf("square inch of a circular pizza.  \n\n"); 
  
  printf("It will prompt you for the price and the \n"); 
  printf("diameter of the pizza. Then it will display \n"); 
  printf("the results of its computations.\n\n"); 
  
  printf("Then compare several different price/size \n"); 
  printf("combinations to determine your best pizza \n"); 
  printf("value .\n\n"); 
}


/*    OUTPUT: aFunction.c

	This program will compute the price per 
	square inch of a circular pizza.  
	
	It will prompt you for the price and the 
	diameter of the pizza. Then it will display 
	the results of its computations.
	
	Then compare several different price/size 
	combinations to determine your best pizza 
	value .
	
	What is the price of your pizza: 10.50
	What is the diameter of your pizza: 14
	Pizza analysis:
	    diameter = 14
	      radius = 7.000000
	        area = 153.937912
	       price = 0.07 per sq. inch

	       
	       
	This program will compute the price per 
	square inch of a circular pizza.  
	
	It will prompt you for the price and the 
	diameter of the pizza. Then it will display 
	the results of its computations.
	
	Then compare several different price/size 
	combinations to determine your best pizza 
	value .
	
	What is the price of your pizza: 15.50
	What is the diameter of your pizza: 18
	Pizza analysis:
	    diameter = 18
	      radius = 9.000000
	        area = 254.468796
	       price = 0.06 per sq. inch

*/
