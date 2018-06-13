/*     FILE: extern3.c     */

/* Uses an external set of variables and a static variable. */
/* Calls function found in another file.                    */

#include <stdio.h>

void change_char(void);

char str[81] = "Hello world!";
int position;

int main( )
{

  printf("str = %s\n", str);

  position = 11;
  change_char( );

  printf("str = %s\n", str);

  for(position=10; position>5; position --)
    change_char( );

  printf("str = %s\n", str);

  return 0;
}



/*    OUTPUT: extern3.c

	str = Hello world!
	I've never been called before.
	str = Hello worldX
	I've been called 1 time  before.
	I've been called 2 times before.
	I've been called 3 times before.
	I've been called 4 times before.
	I've been called 5 times before.
	str = Hello XXXXXX

*/
