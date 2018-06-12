/*     FILE: sort1.c     */

/* An example of sorting with selection sort. */

#include <stdio.h>
#define SIZE 10
main( )
{
  int ar[SIZE];
  int pass,item,position,temp;
  
  for(item=0; item<SIZE; item++)  /* load array with values */
     ar[item] = item*10;
     
  printf("\nOriginal array:\n");
  for(item=0; item<SIZE; item++)  /* display values in array */
     printf("ar[%d] = %d\n", item, ar[item]);

    /* Selection-sort the values read in. */
    for(pass=0; pass<SIZE-1; pass++){
      position = pass;
      for(item=pass+1; item<SIZE; item++)
        if (ar[position] < ar[item])
          position = item;
      if(pass != position){
        temp = ar[pass];
        ar[pass] = ar[position];
        ar[position] = temp;
      }
    }

  printf("\nSorted array:\n");
  for(item=0; item<SIZE; item++)  /* display values in array */
     printf("ar[%d] = %d\n", item, ar[item]);

  return 0;
}


/*    OUTPUT: sort1.c

	
	Original array:
	ar[0] = 0
	ar[1] = 10
	ar[2] = 20
	ar[3] = 30
	ar[4] = 40
	ar[5] = 50
	ar[6] = 60
	ar[7] = 70
	ar[8] = 80
	ar[9] = 90
	
	Sorted array:
	ar[0] = 90
	ar[1] = 80
	ar[2] = 70
	ar[3] = 60
	ar[4] = 50
	ar[5] = 40
	ar[6] = 30
	ar[7] = 20
	ar[8] = 10
	ar[9] = 0

*/
