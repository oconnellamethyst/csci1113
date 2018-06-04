/*     FILE: math3.c     */

/* Program to compute various values using
   the power function.    pow( )             */

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
    value = pow(current,2.0);
    printf("%f\n", value);
  }

  return 0;
}


/*    OUTPUT: math3.c

	0.000000
	0.000100
	0.000400
     .
     .
     .
	88.172100
	88.360000
	88.548100
	88.736400

       INPUT: 

	0.0 
	9.4247779
	0.01

*/
