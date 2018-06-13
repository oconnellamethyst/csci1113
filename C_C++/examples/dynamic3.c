/*     FILE: dynamic3.c     */

/*
   Prompts the user for the number of scores
   and uses malloc( ) to allocate the appropriate
   amount of storage.
   
   Finds the max and the count of values
   greater than 90.
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main( )
{
  int* scores;             /* tracks malloc-ed score storage */
  int i, n, max, a_count;

  /* Get number of values to malloc( ) and read */
  printf("Please enter number of scores: ");
  scanf("%d", &n);

  /* Validate number entered by user. */
  if (n<=INT_MAX && n>0){
    /* Allocate the appropriate number of bytes */
    scores = (int *)malloc(sizeof(int)*n);
    
    if (scores != NULL){
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
      
      free(scores);
    }
    else
      printf("Malloc( ) request failed!\n");
  }
  else
    printf("Invalid allocation request: %d\n", n);

  return 0;

}


/*    OUTPUT: dynamic3.c

	Please enter number of scores: 4
	Enter value 1 of 4: 75
	Enter value 2 of 4: 85
	Enter value 3 of 4: 95
	Enter value 4 of 4: 92
	Max score = 95
	A's = 2

	Please enter number of scores: 7
	Enter value 1 of 7: 75
	Enter value 2 of 7: 76
	Enter value 3 of 7: 85
	Enter value 4 of 7: 86
	Enter value 5 of 7: 92
	Enter value 6 of 7: 97
	Enter value 7 of 7: 99
	Max score = 99
	A's = 3

*/
