/*     FILE: array5.c     */

/* Reads in values, computes their average, and displays them. 

   Uses a defined constant to simplify future changes and 
   increase readability. */
   
#include <stdio.h>
#define SIZE 10

main( )
{
  int ar[SIZE];
  int i, sum;
  double avg;

  for(i=0; i<SIZE; i++)
  {
    printf("Enter value %d of %d: ", i+1, SIZE);
    scanf("%d", &ar[i]);
  }

  sum = 0;
  for(i=0; i<SIZE; i++)
    sum = sum + ar[i];

  avg = (double)sum / SIZE;
  printf("avg = %f\n", avg);

  return 0;
}




/*    OUTPUT: array5.c

	Enter value 1 of 10: 4
	Enter value 2 of 10: 4
	Enter value 3 of 10: 4
	Enter value 4 of 10: 4
	Enter value 5 of 10: 4
	Enter value 6 of 10: 5
	Enter value 7 of 10: 5
	Enter value 8 of 10: 5
	Enter value 9 of 10: 5
	Enter value 10 of 10: 5
	avg = 4.500000

*/
