/*     FILE: max_cnt.c     */

/*
   Loads an array with up to SIZE values.
   Finds the max and the count of values
   greater than 90.
*/

#include <stdio.h>
#define SIZE 50

int main( )
{
  int scores[SIZE];
  int i, n, max, a_count;

  /* Get number of values to read */
  printf("Please enter number of scores (%d or less): ", SIZE);
  scanf("%d", &n);

  /* Validate number entered by user. */
  if (n<=SIZE && n>0){
    /* Read score values into array */
    for(i=0; i<n; i++)
    {
      printf("Enter value %d of %d: ", i+1, n);
      scanf("%d", &scores[i]);
    }

    /* Find maximum of values read. */
    max = scores[0];
    for(i=1; i<n; i++)
    {
      if (scores[i] > max)
        max = scores[i];
    }

    printf("Max score = %d\n", max);

    /* Count number of A's, scores greater than 90 */
    a_count = 0;
    for(i=0; i<n; i++)
    {
      if (scores[i] > 90)
        a_count++;
    }

    printf("A's = %d\n", a_count);
  }

  return 0;

}


/*    OUTPUT: max_cnt.c

	Please enter number of scores (50 or less): 4
	Enter value 1 of 4: 75
	Enter value 2 of 4: 85
	Enter value 3 of 4: 95
	Enter value 4 of 4: 92
	Max score = 95
	A's = 2

*/
