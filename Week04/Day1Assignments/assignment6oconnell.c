/*     FILE: assignment6oconnell.c     */

/*
   Takes a file with a bunch of numbers in it and computes things
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int* sort(int* file);

int main(int argc, char *argv[])
{
  FILE *numbers;
  numbers = fopen(argv[0], "r");
  
  int numArray, great, i;
  numArray = sort(numbers);
  numArray[0] = great;
  
  
  printf("The highest value is %d\n",great);
  
  for(i = 0, i<sizeof(numArray), i++){
  	
  }
  
  
  return 0;
}

int* sort(int* file){ // This is the selection sort program select.c adapted for this program
  int scores[] = file;
  int size = sizeof(scores);
  int n, pass, item, position, temp;

  /* Get number of values to read */
  printf("Please enter number of scores (%d or less): ", size);
  scanf("%d", &n);

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

    return &scores;
}

/*    OUTPUT: assignment6oconnell.c

  
*/
