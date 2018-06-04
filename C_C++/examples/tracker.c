/*     FILE: tracker.c     */

/* Program to read user input and track changes
   indicated by the user.                        */

#include <stdio.h>

void printMenu(void);
void printStatus(int, int);

int main( )
{
  int x=0, y=0;
  int ch;

  printStatus(x,y);  /* Print current x,y  */
  
  /* Display menu of choices */
  printMenu( );
  ch =getchar( );

  /* Loop to quit on upper or lower case Q */
  while(ch != 'q' && ch != 'Q'){
    switch(ch){
      case 'u':
      case 'U':
         printf("Case 'Up' selected.\n", ch);
         y++;
         break;
      case 'd':
      case 'D':
         printf("Case 'Down' selected.\n", ch);
         y--;
         break;
      case 'l':
      case 'L':
         printf("Case 'Left' selected.\n", ch);
         x--;
         break;
      case 'r':
      case 'R':
         printf("Case 'Right' selected.\n", ch);
         x++;
         break;
      default:
         printf("Invalid choice- '%c'.\n", ch);
         break;
    }

    getchar( );         /* strip trailing newline */
    
    printStatus(x,y);   /* Print current x,y  */

    /* Display menu of choices */
    printf("\n\n");
    printMenu( );

    ch =getchar( );
  }

  return 0;
}

void printMenu(void)
{
  printf("\tU- Increase y\n");
  printf("\tD- Decrease y\n");
  printf("\tL- Decrease x\n");
  printf("\tR- Increase x\n");

  printf("\n\tQ- to quit\n");
  printf("\n\n\tChoice: ");

  return;
}

void printStatus(int x, int y)
{
  printf("Current location: x = %d, y = %d \n", x, y);
  return;
}


/*    OUTPUT: tracker.c

	Current location: x = 0, y = 0 
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: u
	Case 'Up' selected.
	Current location: x = 0, y = 1 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: U
	Case 'Up' selected.
	Current location: x = 0, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: r
	Case 'Right' selected.
	Current location: x = 1, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: r
	Case 'Right' selected.
	Current location: x = 2, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: l
	Case 'Left' selected.
	Current location: x = 1, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: l
	Case 'Left' selected.
	Current location: x = 0, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: l
	Case 'Left' selected.
	Current location: x = -1, y = 2 
	
	
		U- Increase y
		D- Decrease y
		L- Decrease x
		R- Increase x
	
		Q- to quit
	
	
		Choice: q
	
*/
