/*     FILE: recursion2.c     */

/* Recursive functions to display octal and hexadecimal. */

#include <stdio.h>
void printOctal(int x);
void printHex(int x);

int main( )
{
  int value = 175;
  
  /* Display value in decimal */
  printf("Value = %d decimal\n", value);

  /* Display value in octal */
  printf("Value = ");
  printOctal(value);
  printf(" octal\n");

  /* Display value in hexadecimal */
  printf("Value = ");
  printHex(value);
  printf(" hexadecimal\n");

  return 0;
}

void printOctal(int x)/* Recursive - printOctal( ) calls    */
{                     /* ... itself.                        */
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

void printHex(int x)/* Recursive - printHex( ) calls        */
{                       /* ... itself.                     */
  if(x < 0){
    printf("-");
    printHex(-x);
  }
  else {
    if (x > 15)
      printHex(x/16);
    if((x%16) < 10)
      printf("%d", x%16);
    else
      printf("%c", 'A' + x%16 - 10);
  }

  return;
}


/*    OUTPUT: recursion2.c

	Value = 175 decimal
	Value = 257 octal
	Value = AF hexadecimal

*/
