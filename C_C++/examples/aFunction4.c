/*     FILE: aFunction4.c     */

/* Computes the cost per sq inch of pizza 
   
   Embedded function calls. (This is NOT
   necessarily the right way to do this.)
   
   main( ) has fewer variables, no need to 
   store what you don't need.
   
   Functions have fewer variables.
                                           */

#include <stdio.h>
#define PI 3.14159

void instructions(void);
float circleArea(float radius);
float computePPI(float price, float area);

int main( )
{
  int diameter;
  float price;
  
  instructions( );
  
  printf("What is the price of your pizza: ");
  scanf("%f", &price);
  
  printf("What is the diameter of your pizza: ");
  scanf("%d", &diameter);
  
  
  printf("Pizza analysis:\n");
  printf("       price = %.2f per sq. inch\n", 
           computePPI(price, circleArea((float)diameter/2)));
  
  return 0;
}

void instructions(void)
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

float circleArea(float radius)
{
  return PI * radius * radius;
}
  
float computePPI(float price, float area)
{
  return price/area;
}
  


/*    OUTPUT: aFunction4.c

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
	       price = 0.06 per sq. inch

*/
