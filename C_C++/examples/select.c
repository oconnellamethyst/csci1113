/*     FILE: select.c     */

/*
   Loads an array with up to 50 values.
   Sorts the values into descending order.
*/

#include <stdio.h>
#define SIZE 50

int main( )
{
  int scores[SIZE];
  int i, n, pass, item, position, temp;

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

    /* Selection-sort the values read in. */
    for(pass=0; pass<n-1; pass++){
      position = pass;
      for(item=pass+1; item<n; item++)
        if (scores[position] < scores[item])
          position = item;
      if(pass != position){
        temp = scores[pass];
        scores[pass] = scores[position];
        scores[position] = temp;
      }
    }

    /* Display scores in sorted order */
    printf("\n\nThe scores in order.\n");
    for(i=0; i<n; i++)
      printf("%d- %d\n", i+1, scores[i]);
  }

  return 0;
}


/*    OUTPUT: select.c

	Please enter number of scores (50 or less): 6
	Enter value 1 of 6: 75
	Enter value 2 of 6: 42
	Enter value 3 of 6: 88
	Enter value 4 of 6: 37
	Enter value 5 of 6: 99
	Enter value 6 of 6: 92
	
	
	The scores in order.
	1- 99
	2- 92
	3- 88
	4- 75
	5- 42
	6- 37

*/
