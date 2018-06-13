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
  int great, greatp, leastp, greatn, leastn, least; // Amethyst's variables

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
      
    /* Amethyst's Code starts here */
	great = scores[0]; // Uses the fact that the list is ordered to set the greatest value
	4
	least = scores[n-1]; // Uses the fact that the list is ordered to set the least value
	
	if(great > 0 && least >= 0){ // Checks to see if the whole set is positive
		greatp = great;
		leastp = least;
		
		printf("\n\nThe largest value in the set is %d\n",great);
		printf("The smallest value in the set is %d\n",least);
		printf("\nThe largest positive value in the set is %d\n",greatp);
		printf("The smallest positive value in the set is %d\n",leastp);
		printf("\nThere are no negative values\n");
	}
	else if(great < 0 && least < 0){ // Checks to see if the whole set is negative
		greatn = great;
		leastn = least;
		
		printf("\n\nThe largest value in the set is %d\n",great);
		printf("The smallest value in the set is %d\n",least);
		printf("\nThere are no positive values\n");
		printf("\nThe largest negative value in the set is %d\n",greatn);
		printf("The smallest negative value in the set is %d\n",leastn);
	}
	else{
		// Reusing i as an incrementor
		greatp = great;
		leastn = least;
		greatn = 0;
		for(i=0; i<n && greatn == 0; i++){ // For loop, finds the location of the greatest negative number, and uses that to set the greatest negative and least positive numbers
			if(scores[i] < 0){
				leastp = scores[i-1];
				greatn = scores[i];
			}
			else{
				; // Do nothing
			}
		}
		
		printf("\n\nThe largest value in the set is %d\n",great);
		printf("The smallest value in the set is %d\n",least);
		printf("\nThe largest positive value in the set is %d\n",greatp);
		printf("The smallest positive value in the set is %d\n",leastp);
		printf("\nThe largest negative value in the set is %d\n",greatn);
		printf("The smallest negative value in the set is %d\n",leastn);
		
	}	
    
  }

  return 0;
}


/*    OUTPUT: select.c

Case 1:
	Please enter number of scores (50 or less): 5
	Enter value 1 of 5: 0
	Enter value 2 of 5: 1
	Enter value 3 of 5: 3
	Enter value 4 of 5: 5
	Enter value 5 of 5: 7


	The scores in order.
	1- 7
	2- 5
	3- 3
	4- 1
	5- 0


	The largest value in the set is 7
	The smallest value in the set is 0

	The largest positive value in the set is 7
	The smallest positive value in the set is 0

	There are no negative values

Case 2:
	Please enter number of scores (50 or less): 4
	Enter value 1 of 4: 1
	Enter value 2 of 4: 5
	Enter value 3 of 4: 8
	Enter value 4 of 4: 90000


	The scores in order.
	1- 90000
	2- 8
	3- 5
	4- 1


	The largest value in the set is 90000
	The smallest value in the set is 1

	The largest positive value in the set is 90000
	The smallest positive value in the set is 1

	There are no negative values

Case 3: 
	Please enter number of scores (50 or less): 6
	Enter value 1 of 6: -1
	Enter value 2 of 6: -2
	Enter value 3 of 6: -3
	Enter value 4 of 6: 4
	Enter value 5 of 6: 5
	Enter value 6 of 6: 6


	The scores in order.
	1- 6
	2- 5
	3- 4
	4- -1
	5- -2
	6- -3


	The largest value in the set is 6
	The smallest value in the set is -3

	The largest positive value in the set is 6
	The smallest positive value in the set is 4

	The largest negative value in the set is -1
	The smallest negative value in the set is -3

*/
