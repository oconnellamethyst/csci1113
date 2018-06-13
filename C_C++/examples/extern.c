/*     FILE: extern.c     */

/* Uses an external set of variables and a static variable. */

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

void change_char(void)
{
  static int calls;
  if(calls != 0)
    printf("I've been called %d time%c before.\n",
                            calls, calls==1?' ':'s');
  else
    printf("I've never been called before.\n");

  str[position] = 'X';

  calls++;

  return;
}


/*    OUTPUT: extern.c

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
