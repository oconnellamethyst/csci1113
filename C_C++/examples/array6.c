/*     FILE: array6.c     */

/* Passing an array to a function.
   Array name/pointer equivalence.*/
   
#include <stdio.h>
#define SIZE 5
void print_array(int a[ ], int length);
void print_array2(int* a, int length);

main( )
{
  int ar[SIZE];
  int i;

  for(i=0; i<SIZE; i++)
  {
    printf("Enter value %d of %d: ", i+1, SIZE);
    scanf("%d", ar + i);
  }

  
  printf("\n");
  print_array(ar, SIZE);
  
  printf("\n");
  print_array2(ar, SIZE);

  return 0;
}

void print_array(int a[ ], int length)
{
  int i;
  for(i=0; i<length; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return;
}

void print_array2(int* a, int length)
{
  int i;
  for(i=0; i<length; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return;
}


/*    OUTPUT: array6.c

	Enter value 1 of 5: 11
	Enter value 2 of 5: 22
	Enter value 3 of 5: 33
	Enter value 4 of 5: 44
	Enter value 5 of 5: 55
	
	a[0] = 11
	a[1] = 22
	a[2] = 33
	a[3] = 44
	a[4] = 55
	
	a[0] = 11
	a[1] = 22
	a[2] = 33
	a[3] = 44
	a[4] = 55

*/
