/*     FILE: stringRead2.c     */

/* Reading strings with scanf( ) 
   - it gets more complicated   */
   
#include <stdio.h>

int main( )
{
  char name[81];
  int age;

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your age: ");
  scanf("%d", &age);
  
  

  printf("\n\n");
  printf("Hello %s\n", name);
  printf("you are %d years old.\n", age);

  return 0;
}


/*    OUTPUT: stringRead2.c

	Enter your name: Jim Polzin 
	Enter your age: 
	
	
	Hello Jim
	you are 1 years old.

*/
