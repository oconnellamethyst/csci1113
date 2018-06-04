/*     FILE: switch2.c     */

/* A function that displays info. */

#include <stdio.h>

void print_menu(void);

int main( )
{
  int ch;

  /* Display menu of choices */
  print_menu( );
  ch =getchar( );

  /* Loop to quit on upper or lower case Q */
  while(ch != 'q' && ch != 'Q'){
    switch(ch){
      case 'a':
      case 'A':
         printf("Case 'Append' selected.\n", ch);
         break;
      case 'd':
      case 'D':
         printf("Case 'Delete' selected.\n", ch);
         break;
      case 'r':
      case 'R':
         printf("Case 'Replace' selected.\n", ch);
         break;
      default:
         printf("Invalid choice- '%c'.\n", ch);
         break;
    }

    getchar( );         /* strip trailing newline */

    /* Display menu of choices */
    printf("\n\n");
    print_menu( );

    ch =getchar( );
  }

  return 0;
}

void print_menu(void)
{
  printf("\tA- append data\n");
  printf("\tD- delete data\n");
  printf("\tR- replace data\n");

  printf("\n\tQ- to quit\n");
  printf("\n\n\tChoice: ");

  return;
}


/*    OUTPUT: switch2.c

		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: r
	Case 'Replace' selected.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: D
	Case 'Delete' selected.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: q
	
*/
