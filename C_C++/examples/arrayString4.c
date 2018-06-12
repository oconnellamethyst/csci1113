/*     FILE: arrayString4.c     */

/* Strings as parameters 

   myStrcpy - altered       */
   
#include <stdio.h>
#include <string.h>

void myPuts(char [ ]);
void myStrcpy(char [ ], char[ ]);

int main( )
{
  int i;
  char name[81];

  myStrcpy(name,"Jim");
  strcat(name," Polzin");

  printf("You created: ");

  myPuts(name);
 
  return 0;
}

void myPuts(char s[ ])
{
  int i;
  
  for(i=0; s[i] != '\0'; i++)
    putchar(s[i]);
    
  putchar('\n');
 
  return;
}
void myStrcpy(char dest[ ], char src[ ])  /* C style, streamlined! */
{
  int i;
  
  for(i=0; (dest[i]=src[i]) != '\0'; i++)
  ;    
 
  return;
}


/*    OUTPUT: arrayString4.c

	You created: Jim Polzin

*/
