/*     FILE: binary.c     */

/* A couple functions that get passed a value,
   display some output and return nothing.   */

#include <stdio.h>

void print_binary_int(unsigned int);
void print_binary_char(unsigned char);  /* Prototypes:  
                                             - no return values
                                             - one parameter each  */

int main( )
{
  int first;
  char second;

  printf("Enter an integer: ");
  scanf("%d", &first);

  printf("Enter a character: ");
  scanf(" %c", &second);

  printf("Integer %d = ", first);
  print_binary_int(first);

  printf("\n\n");
  printf("Character %c = %d = ", second, second);
  print_binary_char(second);

  printf("\n\n");

  return 0;
}

void print_binary_int(unsigned int x)
{
  unsigned int divisor = 2147483648U;

  while(divisor > 0){
    if(divisor <= x){
      printf("1");
      x = x - divisor;
    }
    else
      printf("0");

    divisor = divisor/2;
  }

  return;
}

void print_binary_char(unsigned char c)
{
  unsigned char divisor = 128;

  while(divisor > 0){
    if(divisor <= c){
      printf("1");
      c = c - divisor;
    }
    else
      printf("0");

    divisor = divisor/2;
  }

  return;
}


/*    OUTPUT: binary.c

	Enter an integer: 127
	Enter a character: A
	Integer 127 = 00000000000000000000000001111111
	
	Character A = 65 = 01000001
	

*/
