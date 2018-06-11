/*     FILE: stringRead3.c     */

/* Reading strings with scanf( ) 
   - the rough repair           */
   
#include <stdio.h>

int main( )
{
  char firstName[81];
  char lastName[81];
  int age;

  /* scanf( ) treats whitespace as a delimiter. So...
     ... you CAN read each separate piece.           */
  printf("Enter your first name: ");
  scanf("%s", firstName);

  printf("Enter your last name: ");
  scanf("%s", lastName);

  printf("Enter your age: ");
  scanf("%d", &age);
  
  

  printf("\n\n");
  printf("Hello %s %s\n", firstName, lastName);
  printf("you are %d years old.\n", age);

  return 0;
}


/*    OUTPUT: stringRead3.c

	Enter your first name: Jim 
	Enter your last name: Polzin 
	Enter your age: 44
	
	
	Hello Jim Polzin
	you are 44 years old.

*/
