/*     FILE: cond_op.c     */

/* conditional operator example. */

#include <stdio.h>

int main( )
{
  int i;

  /* Loop to read integers and quit on non-integer */
  printf("Enter an integer (q to quit): ");
  while(scanf("%d", &i) == 1){  /* scanf returns # of items read. */
    printf("Value entered = %d, absolute value = %d\n",
            i, i<0?-i:i);

    printf("Enter an integer (q to quit): ");
  }

  return 0;
}


/*    OUTPUT: cond_op.c

	Enter an integer (q to quit): 7
	Value entered = 7, absolute value = 7
	Enter an integer (q to quit): -7
	Value entered = -7, absolute value = 7
	Enter an integer (q to quit): 13
	Value entered = 13, absolute value = 13
	Enter an integer (q to quit): -27
	Value entered = -27, absolute value = 27
	Enter an integer (q to quit): q
	
*/
