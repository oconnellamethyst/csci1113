/*     FILE: switch.c     */

/* switch example. */

#include <stdio.h>

int main( )
{
  int ch;

  /* Display menu of choices */
  printf("\tA- append data\n");
  printf("\tD- delete data\n");
  printf("\tR- replace data\n");

  printf("\n\tQ- to quit\n");
  printf("\n\n\tChoice: ");

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
    printf("\tA- append data\n");
    printf("\tD- delete data\n");
    printf("\tR- replace data\n");

    printf("\n\tQ- to quit\n");
    printf("\n\n\tChoice: ");

    ch =getchar( );
  }

  return 0;
}


/*    OUTPUT: switch.c

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
	
	
		Choice: R
	Case 'Replace' selected.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: d
	Case 'Delete' selected.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: t
	Invalid choice- 't'.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: w
	Invalid choice- 'w'.
	
	
		A- append data
		D- delete data
		R- replace data
	
		Q- to quit
	
	
		Choice: q
	
*/
