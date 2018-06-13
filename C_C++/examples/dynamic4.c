/*     FILE: dynamic4.c     */

/*
   Prompts the user for the number of values
   and uses malloc( ) to allocate the appropriate
   amount of storage.
   
   Passes the array/allocation to functions
   for reading, displaying and for sorting.       */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int * selectionSort(int [ ], int);
int * printArray(int [ ], int);
int * readArray(int [ ], int);

int main(int argc, char *argv[ ])
{
  int *ar;
  int n;
  
  /* Get number of values to malloc( ) and read */
  printf("Please enter number of values: ");
  scanf("%d", &n);

  /* Validate number entered by user. */
  if (n<=INT_MAX && n>0){
    /* Allocate the appropriate number of bytes */
    ar = (int *)malloc(sizeof(int)*n);
    
    if (ar != NULL){

      readArray(ar, n);
      
      printf("\nOriginal array:\n");
      printArray(ar, n);
  
      selectionSort(ar, n);
  
      printf("\nSorted array:\n");
      printArray(ar, n);
      
      free(ar);
    }
    else
      printf("Malloc( ) request failed!\n");
  }
  else
    printf("Invalid allocation request: %d\n", n);
 
  return 0;
}

int * selectionSort(int array[ ], int size)
{
  int pass,item,position,temp;
  
  /* Selection-sort the values read in. */
  for(pass=0; pass<size-1; pass++){
    position = pass;
    for(item=pass+1; item<size; item++)
      if (array[position] < array[item])
        position = item;
    if(pass != position){
      temp = array[pass];
      array[pass] = array[position];
      array[position] = temp;
    }
  }
  
  return array;
}

int * printArray(int a[ ], int s)
{
  int i;
  
  for(i=0; i<s; i++)  /* display values in array */
     printf("%d\n", a[i]);
  
  return a;
}

int * readArray(int a[ ], int s)
{
  int i;
        /* Read score values into array */
  for(i=0; i<s; i++)
  {
    printf("Enter value %d of %d: ", i+1, s);
    scanf("%d", &a[i]);
  }
      
  return a;
}


/*    OUTPUT: dynamic4.c

	Please enter number of values: 4
	Enter value 1 of 4: 75
	Enter value 2 of 4: 85
	Enter value 3 of 4: 95
	Enter value 4 of 4: 92
	
	Original array:
	75
	85
	95
	92
	
	Sorted array:
	95
	92
	85
	75

	Please enter number of values: 7
	Enter value 1 of 7: 75
	Enter value 2 of 7: 76
	Enter value 3 of 7: 85
	Enter value 4 of 7: 86
	Enter value 5 of 7: 92
	Enter value 6 of 7: 97
	Enter value 7 of 7: 99
	
	Original array:
	75
	76
	85
	86
	92
	97
	99
	
	Sorted array:
	99
	97
	92
	86
	85
	76
	75

*/
