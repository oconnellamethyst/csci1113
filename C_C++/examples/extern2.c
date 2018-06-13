/*     FILE: extern2.c     */

/* Functions that use an external set of variables */

extern char str[81];
extern int position;

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
