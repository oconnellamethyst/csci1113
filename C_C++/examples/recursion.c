/*     FILE: recursion.c     */

/* Recursive function to display octal. */

#include <stdio.h>
void printOctal(int x);

int main( )
{
  int value = 71;
  
  /* Display value in decimal */
  printf("Value = %d decimal\n", value);

  /* Display value in octal */
  printf("Value = ");
  printOctal(value);
  printf(" octal\n");

  return 0;
}

void printOctal(int x)  /* Recursive - printOctal( ) calls  */
{                       /* ... itself.                      */
  if(x < 0){
    printf("-");
    printOctal(-x);
  }
  else {
    if (x > 7)
      printOctal(x/8);
    printf("%d", x%8);
  }

  return;
}


/*    OUTPUT: recursion.c

	Value = 71 decimal
	Value = 107 octal

*/
