/*     FILE: stringRead4.c     */

/* Reading strings with scanf( ) 
   - the real fix               */
   
#include <stdio.h>

int main( )
{
  char name[81];
  int age;

  printf("Enter your name: ");
  gets(name);   /* gets( ) knows all about strings
                   ... it reads all the input through
                   ... the end-of-line.               */

  printf("Enter your age: ");
  scanf("%d", &age);

  
  
  printf("\n\n");
  printf("Hello %s\n", name);
  printf("you are %d years old.\n", age);

  return 0;
}


/*    OUTPUT: stringRead4.c

	Enter your name: Jim Polzin 
	Enter your age: 44
	
	
	Hello Jim Polzin 
	you are 44 years old.

*/
