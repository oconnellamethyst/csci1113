/*     FILE: math1.c     */

/* Program to compute the sine function for 
   various values.                            */

#include <stdio.h>
#include <math.h>

int main( )
{
  double start, end, current, step, value;

  /* Set initial values */
  start = 0.0;
  end = 2 * M_PI;
  step = 0.01;

  /* Loop to compute and display values */
  for(current = start; current <= end; current += step){
    value = sin(current);
    printf("%f\n", value);
  }

  return 0;
}


/*    OUTPUT: math1.c

	0.000000
	0.010000
	0.019999
	0.029996
	0.039989
	0.049979
	0.059964
	0.069943
	0.079915
	0.089879
	0.099833
     .
     .
     .
	0.021591
	0.011592
	0.001593
	-0.008407
	-0.018406
	-0.028404
	-0.038398
	-0.048388
     .
     .
     .
	-0.023183
	-0.013185
	-0.003185

*/
