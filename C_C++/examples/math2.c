/*     FILE: math2.c     */

/* Program to compute the sine function for 
   various values.   
   
   Reads inputs.                            */

#include <stdio.h>
#include <math.h>

int main( )
{
  double start, end, current, step, value;

  /* Read initial values */
  scanf("%lf", &start);
  scanf("%lf", &end);
  scanf("%lf", &step);

  /* Loop to compute and display values */
  for(current = start; current <= end; current += step){
    value = sin(current);
    printf("%f\n", value);
  }

  return 0;
}


/*    OUTPUT: math2.c

	0.000000
	0.010000
	0.019999
     .
     .
     .
	0.021591
	0.011592
	0.001593
	-0.008407
	-0.018406
	-0.028404
     .
     .
     .
	-0.023183
	-0.013185
	-0.003185
	0.006815
	0.016814
	0.026811
     .
     .
     .
	0.024775
	0.014777
	0.004778

       INPUT: 

	0.0 
	9.4247779
	0.01

*/
