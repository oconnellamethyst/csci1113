/*     FILE: dynamic2.c     */

/* Dynamic memory allocation using malloc( ).
   Note: #include stdlib.h for memory allocation
         functions.                              
         
   Error handling for dynamic memory allocation. */

#include <stdio.h>
#include <stdlib.h>

int main( )
{
  int* ptr;
  int size, i;

  printf("Please enter number of integers to be read: ");
  scanf("%d", &size);

  ptr = malloc(size * sizeof(int));   /* allocation is requested in bytes */

                                      /* Once the storage is allocated, ptr
                                         can be treated like an array.    */
  if(ptr != NULL){
    for(i=0; i<size; i++){
      printf("Enter integer %d of %d: ", i+1, size);
      scanf("%d", &ptr[i]);
    }

    for(i=0; i<size; i++)
      printf("ptr[%d] = %d\n", i, ptr[i]);

    free(ptr);
  }
  else
    printf("FAILURE: Unable to allocate storage.\n");

  return 0;
}


/*    OUTPUT: dynamic2.c

	Please enter number of integers to be read: 5
	Enter integer 1 of 5: 511
	Enter integer 2 of 5: 522
	Enter integer 3 of 5: 533
	Enter integer 4 of 5: 544
	Enter integer 5 of 5: 555
	ptr[0] = 511
	ptr[1] = 522
	ptr[2] = 533
	ptr[3] = 544
	ptr[4] = 555

*/
