/*     FILE: dynamic1.c     */

/* Dynamic memory allocation using malloc( ).
   Note: #include stdlib.h for memory allocation
         functions.                              */

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
  for(i=0; i<size; i++){
    printf("Enter integer %d of %d: ", i+1, size);
    scanf("%d", &ptr[i]);
  }

  for(i=0; i<size; i++)
    printf("ptr[%d] = %d\n", i, ptr[i]);

  free(ptr);

  return 0;
}


/*    OUTPUT: dynamic1.c

	Please enter number of integers to be read: 5
	Enter integer 1 of 5: 11
	Enter integer 2 of 5: 22
	Enter integer 3 of 5: 33
	Enter integer 4 of 5: 44
	Enter integer 5 of 5: 55
	ptr[0] = 11
	ptr[1] = 22
	ptr[2] = 33
	ptr[3] = 44
	ptr[4] = 55

*/
