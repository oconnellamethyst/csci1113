/*     FILE: average2.c     */

/* A function that is passed two values and returns
   one too. Function average( ) with less overhead. */

#include <stdio.h>

double average(int, int);     /*   Parameters: 2 ints
                                 Return value: a double  */

int main( )
{
  int first, second;
  double avg;

  printf("Enter first integer: ");
  scanf("%d", &first);

  printf("Enter second integer: ");
  scanf("%d", &second);

  avg = average(first, second);

  printf("Average = %f\n", avg);

  return 0;
}

double average(int x, int y)
{
  return (x + y)/2.0;
}


/*    OUTPUT: average2.c

	Enter first integer: 1
	Enter second integer: 2
	Average = 1.500000

*/
